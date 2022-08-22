//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants_ptr.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

#include "variants_ptr_ptr.h"

namespace variants_ptr {

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Expr& value)
{
    stream << "Expr(variant|";
    [[maybe_unused]] bool first = true;
    switch (value.index()) {
        case 0:
            stream<< "{bool}";
            stream << std::get<0>(value);
            break;
        case 1:
            stream<< "{string}";
            stream << std::get<1>(value);
            break;
        case 2:
            stream<< "{int32}";
            stream << std::get<2>(value);
            break;
        default:
            static_assert("unreachable branch");
    }
    stream << ")";
    return stream;
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const V& value)
{
    stream << "V(variant|";
    [[maybe_unused]] bool first = true;
    switch (value.index()) {
        case 0:
            stream<< "{int32}";
            stream << std::get<0>(value);
            break;
        case 1:
            stream<< "{string}";
            stream << std::get<1>(value);
            break;
        case 2:
            stream<< "{double}";
            stream << std::get<2>(value);
            break;
        case 3:
            stream<< "{Simple}";
            stream << std::get<3>(value);
            break;
        case 4:
            stream<< "{Simple*}";
            stream << "ptr of other struct: " << (std::get<4>(value) == nullptr ? "nullptr" : "true");
            if (std::get<4>(value) != nullptr)
            {
                stream << "->" << *std::get<4>(value);
            }
            break;
        case 5:
            stream << "{Simple}=[" << std::get<5>(value).size() << "][";
            for (const auto& it : std::get<5>(value))
            {
                stream << std::string(first ? "" : ",") << it;
                first = false;
            }
            stream << "]";
            break;
        case 6:
            stream << "{int32}=[" << std::get<6>(value).size() << "][";
            for (const auto& it : std::get<6>(value))
            {
                stream << std::string(first ? "" : ",") << it;
                first = false;
            }
            stream << "]";
            break;
        case 7:
            stream << "{int32->Simple}=[" << std::get<7>(value).size() << "][";
            for (const auto& it : std::get<7>(value))
            {
                stream << std::string(first ? "" : ",") << it.first;
                stream << "->";
                stream << it.second;
                first = false;
            }
            stream << "]";
            break;
        case 8:
            stream << "{bytes}=[" << std::get<8>(value).size() << "][";
            for (const auto& it : std::get<8>(value))
            {
                stream << std::string(first ? "" : ",") << "bytes[" << it.size() << "]";
                first = false;
            }
            stream << "]";
            break;
        case 9:
            stream << "{string}=[" << std::get<9>(value).size() << "][";
            for (const auto& it : std::get<9>(value))
            {
                stream << std::string(first ? "" : ",") << "\"" << it << "\"";
                first = false;
            }
            stream << "]";
            break;
        case 10:
            stream << "{int32->bytes}=[" << std::get<10>(value).size() << "][";
            for (const auto& it : std::get<10>(value))
            {
                stream << std::string(first ? "" : ",") << it.first;
                stream << "->";
                stream << "bytes[" << it.second.size() << "]";
                first = false;
            }
            stream << "]";
            break;
        case 11:
            stream << "{string->bytes}=[" << std::get<11>(value).size() << "][";
            for (const auto& it : std::get<11>(value))
            {
                stream << std::string(first ? "" : ",") << "\"" << it.first << "\"";
                stream << "->";
                stream << "bytes[" << it.second.size() << "]";
                first = false;
            }
            stream << "]";
            break;
        case 12:
            stream << "{Simple*}=[" << std::get<12>(value).size() << "][";
            for (const auto& it : std::get<12>(value))
            {
                stream << std::string(first ? "" : ",") << "ptr of other struct: " << (it == nullptr ? "nullptr" : "true");
                if (it != nullptr)
                {
                    stream << "->" << *it;
                }
                first = false;
            }
            stream << "]";
            break;
        case 13:
            stream<< "{Expr}";
            stream << std::get<13>(value);
            break;
        default:
            static_assert("unreachable branch");
    }
    stream << ")";
    return stream;
}

Simple::Simple()
    : name()
{}

Simple::Simple(const std::string& arg_name)
    : name(arg_name)
{}

Simple::Simple([[maybe_unused]] Simple&& other) noexcept
    : name(std::move(other.name))
{}

Simple::~Simple()
{
}

bool Simple::operator==([[maybe_unused]] const Simple& other) const noexcept
{
    return (
        true
        );
}

bool Simple::operator<([[maybe_unused]] const Simple& other) const noexcept
{
    return false;
}

Simple& Simple::operator=(Simple&& other) noexcept
{
    if (this != &other)
    {
        name = std::move(other.name);
    }
    return *this;
}

std::string Simple::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Simple::swap([[maybe_unused]] Simple& other) noexcept
{
    using std::swap;
    swap(name, other.name);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Simple& value)
{
    stream << "Simple(";
    stream << "name="; stream << "\"" << value.name << "\"";
    stream << ")";
    return stream;
}

Value::Value()
    : v()
    , vo()
    , vo2()
{}

Value::Value(::variants_ptr::V&& arg_v, std::optional<::variants_ptr::V> arg_vo, std::optional<::variants_ptr::V> arg_vo2)
    : v(std::move(arg_v))
    , vo()
    , vo2()
{
    if (arg_vo.has_value()) {
        vo.emplace(std::move(arg_vo.value()));
        arg_vo.reset();
    }
    if (arg_vo2.has_value()) {
        vo2.emplace(std::move(arg_vo2.value()));
        arg_vo2.reset();
    }
}

Value::Value([[maybe_unused]] Value&& other) noexcept
    : v(std::move(other.v))
    , vo()
    , vo2()
{
    if (other.vo.has_value()) {
        vo.emplace(std::move(other.vo.value()));
        other.vo.reset();
    }
    if (other.vo2.has_value()) {
        vo2.emplace(std::move(other.vo2.value()));
        other.vo2.reset();
    }
}

Value::~Value()
{
}

bool Value::operator==([[maybe_unused]] const Value& other) const noexcept
{
    return (
        true
        );
}

bool Value::operator<([[maybe_unused]] const Value& other) const noexcept
{
    return false;
}

Value& Value::operator=(Value&& other) noexcept
{
    if (this != &other)
    {
        v = std::move(other.v);
        if (other.vo.has_value()) {
            vo.emplace(std::move(other.vo.value()));
            other.vo.reset();
        }
        if (other.vo2.has_value()) {
            vo2.emplace(std::move(other.vo2.value()));
            other.vo2.reset();
        }
    }
    return *this;
}

std::string Value::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Value::swap([[maybe_unused]] Value& other) noexcept
{
    using std::swap;
    swap(v, other.v);
    swap(vo, other.vo);
    swap(vo2, other.vo2);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Value& value)
{
    stream << "Value(";
    stream << "v="; stream << value.v;
    stream << ",vo="; if (value.vo) stream << *value.vo; else stream << "null";
    stream << ",vo2="; if (value.vo2) stream << *value.vo2; else stream << "null";
    stream << ")";
    return stream;
}

ValueContainer::ValueContainer()
    : vv()
    , vm()
{}

ValueContainer::ValueContainer(std::vector<::variants_ptr::V> arg_vv, std::unordered_map<int32_t, ::variants_ptr::V> arg_vm)
    : vv(std::move(arg_vv))
    , vm(std::move(arg_vm))
{}

ValueContainer::ValueContainer([[maybe_unused]] ValueContainer&& other) noexcept
    : vv(std::move(other.vv))
    , vm(std::move(other.vm))
{}

ValueContainer::~ValueContainer()
{
}

bool ValueContainer::operator==([[maybe_unused]] const ValueContainer& other) const noexcept
{
    return (
        true
        );
}

bool ValueContainer::operator<([[maybe_unused]] const ValueContainer& other) const noexcept
{
    return false;
}

ValueContainer& ValueContainer::operator=(ValueContainer&& other) noexcept
{
    if (this != &other)
    {
        vv = std::move(other.vv);
        vm = std::move(other.vm);
    }
    return *this;
}

std::string ValueContainer::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void ValueContainer::swap([[maybe_unused]] ValueContainer& other) noexcept
{
    using std::swap;
    swap(vv, other.vv);
    swap(vm, other.vm);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const ValueContainer& value)
{
    stream << "ValueContainer(";
    {
        bool first = true;
        stream << "vv=[" << value.vv.size() << "][";
        for (const auto& it : value.vv)
        {
            stream << std::string(first ? "" : ",") << it;
            first = false;
        }
        stream << "]";
    }
    {
        bool first = true;
        stream << ",vm=[" << value.vm.size()<< "][{";
        for (const auto& it : value.vm)
        {
            stream << std::string(first ? "" : ",") << it.first;
            stream << "->";
            stream << it.second;
            first = false;
        }
        stream << "}]";
    }
    stream << ")";
    return stream;
}

} // namespace variants_ptr
