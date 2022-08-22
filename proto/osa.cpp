//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

#include "osa.h"

namespace osa {

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] Sex value)
{
    if (value == Sex::male) return stream << "male";
    if (value == Sex::female) return stream << "female";
    return stream << "<unknown>";
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] MyFLags value)
{
    if (value == MyFLags::flag0) return stream << "flag0";
    if (value == MyFLags::flag1) return stream << "flag1";
    if (value == MyFLags::flag2) return stream << "flag2";
    return stream << "<unknown>";
}

Extra::Extra()
    : name()
    , detail()
    , sex()
    , flag()
{}

Extra::Extra(const std::string& arg_name, const std::string& arg_detail, const ::osa::Sex& arg_sex, const ::osa::MyFLags& arg_flag)
    : name(arg_name)
    , detail(arg_detail)
    , sex(arg_sex)
    , flag(arg_flag)
{}

bool Extra::operator==([[maybe_unused]] const Extra& other) const noexcept
{
    return (
        true
        );
}

bool Extra::operator<([[maybe_unused]] const Extra& other) const noexcept
{
    return false;
}

std::string Extra::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Extra::swap([[maybe_unused]] Extra& other) noexcept
{
    using std::swap;
    swap(name, other.name);
    swap(detail, other.detail);
    swap(sex, other.sex);
    swap(flag, other.flag);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Extra& value)
{
    stream << "Extra(";
    stream << "name="; stream << "\"" << value.name << "\"";
    stream << ",detail="; stream << "\"" << value.detail << "\"";
    stream << ",sex="; stream << value.sex;
    stream << ",flag="; stream << value.flag;
    stream << ")";
    return stream;
}

Simple::Simple()
    : name()
    , depth((int32_t)0ll)
    , sa()
    , sex()
{}

Simple::Simple(const std::string& arg_name, int32_t arg_depth, const std::array<::osa::Extra, 1>& arg_sa, const ::osa::Sex& arg_sex)
    : name(arg_name)
    , depth(arg_depth)
    , sa(arg_sa)
    , sex(arg_sex)
{}

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

std::string Simple::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Simple::swap([[maybe_unused]] Simple& other) noexcept
{
    using std::swap;
    swap(name, other.name);
    swap(depth, other.depth);
    swap(sa, other.sa);
    swap(sex, other.sex);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Simple& value)
{
    stream << "Simple(";
    stream << "name="; stream << "\"" << value.name << "\"";
    stream << ",depth="; stream << value.depth;
    {
        bool first = true;
        stream << ",sa=[1][";
        for (size_t i = 0; i < 1; ++i)
        {
            stream << std::string(first ? "" : ",") << value.sa[i];
            first = false;
        }
        stream << "]";
    }
    stream << ",sex="; stream << value.sex;
    stream << ")";
    return stream;
}

} // namespace osa
