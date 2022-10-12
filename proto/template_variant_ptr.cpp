//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: template_variant.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

#include "template_variant_ptr.h"

namespace template_variant {

Line::Line()
    : v()
    , vv()
    , vm()
    , vo()
{}

Line::Line(::variants::V&& arg_v, std::vector<::variants::V> arg_vv, std::unordered_map<stdb::memory::string, ::variants::V> arg_vm, std::optional<::variants::V> arg_vo)
    : v(std::move(arg_v))
    , vv(std::move(arg_vv))
    , vm(std::move(arg_vm))
    , vo()
{
    if (arg_vo.has_value()) {
        vo.emplace(std::move(arg_vo.value()));
        arg_vo.reset();
    }
}

Line::Line([[maybe_unused]] Line&& other) noexcept
    : v(std::move(other.v))
    , vv(std::move(other.vv))
    , vm(std::move(other.vm))
    , vo()
{
    if (other.vo.has_value()) {
        vo.emplace(std::move(other.vo.value()));
        other.vo.reset();
    }
}

Line::~Line()
{
}

bool Line::operator==([[maybe_unused]] const Line& other) const noexcept
{
    return (
        true
        );
}

bool Line::operator<([[maybe_unused]] const Line& other) const noexcept
{
    return false;
}

Line& Line::operator=(Line&& other) noexcept
{
    if (this != &other)
    {
        v = std::move(other.v);
        vv = std::move(other.vv);
        vm = std::move(other.vm);
        if (other.vo.has_value()) {
            vo.emplace(std::move(other.vo.value()));
            other.vo.reset();
        }
    }
    return *this;
}

std::string Line::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Line::swap([[maybe_unused]] Line& other) noexcept
{
    using std::swap;
    swap(v, other.v);
    swap(vv, other.vv);
    swap(vm, other.vm);
    swap(vo, other.vo);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Line& value)
{
    stream << "Line(";
    stream << "v="; stream << value.v;
    {
        bool first = true;
        stream << ",vv=[" << value.vv.size() << "][";
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
            stream << std::string(first ? "" : ",") << "\"" << it.first << "\"";
            stream << "->";
            stream << it.second;
            first = false;
        }
        stream << "}]";
    }
    stream << ",vo="; if (value.vo) stream << *value.vo; else stream << "null";
    stream << ")";
    return stream;
}

Line2::Line2()
    : vm()
{}

Line2::Line2(std::unordered_map<::enums::EnumInt8, ::variants::V> arg_vm)
    : vm(std::move(arg_vm))
{}

Line2::Line2([[maybe_unused]] Line2&& other) noexcept
    : vm(std::move(other.vm))
{}

Line2::~Line2()
{
}

bool Line2::operator==([[maybe_unused]] const Line2& other) const noexcept
{
    return (
        true
        );
}

bool Line2::operator<([[maybe_unused]] const Line2& other) const noexcept
{
    return false;
}

Line2& Line2::operator=(Line2&& other) noexcept
{
    if (this != &other)
    {
        vm = std::move(other.vm);
    }
    return *this;
}

std::string Line2::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Line2::swap([[maybe_unused]] Line2& other) noexcept
{
    using std::swap;
    swap(vm, other.vm);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Line2& value)
{
    stream << "Line2(";
    {
        bool first = true;
        stream << "vm=[" << value.vm.size()<< "][{";
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

Line3::Line3()
    : value()
{}

Line3::Line3(::variants::Value&& arg_value)
    : value(std::move(arg_value))
{}

Line3::Line3([[maybe_unused]] Line3&& other) noexcept
    : value(std::move(other.value))
{}

Line3::~Line3()
{
}

bool Line3::operator==([[maybe_unused]] const Line3& other) const noexcept
{
    return (
        true
        );
}

bool Line3::operator<([[maybe_unused]] const Line3& other) const noexcept
{
    return false;
}

Line3& Line3::operator=(Line3&& other) noexcept
{
    if (this != &other)
    {
        value = std::move(other.value);
    }
    return *this;
}

std::string Line3::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Line3::swap([[maybe_unused]] Line3& other) noexcept
{
    using std::swap;
    swap(value, other.value);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Line3& value)
{
    stream << "Line3(";
    stream << "value="; stream << value.value;
    stream << ")";
    return stream;
}

} // namespace template_variant