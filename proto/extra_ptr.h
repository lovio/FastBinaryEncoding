// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: extra.fbe
// Version: 1.7.0.0

#pragma once

#ifdef isset
#undef isset
#endif

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe.h"

namespace extra {
using namespace FBE;
} // namespace extra

namespace FBE {
using namespace ::extra;
} // namespace FBE

#include "fbe_ptr.h"

namespace extra {

struct Extra;

struct Info : FBE::Base
{
    std::string info;
    ::extra::Extra* extra;
    std::vector<::extra::Extra*> extras;
    std::vector<::extra::Extra*> extras1;

    size_t fbe_type() const noexcept { return 1; }

    Info();
    Info(const std::string& arg_info, std::unique_ptr<::extra::Extra> arg_extra, std::vector<std::unique_ptr<::extra::Extra>> arg_extras, std::vector<std::unique_ptr<::extra::Extra>> arg_extras1);
    Info(const Info& other) = delete;
    Info(Info&& other);
    ~Info();

    Info& operator=(const Info& other) = delete;
    Info& operator=(Info&& other);

    bool operator==(const Info& other) const noexcept;
    bool operator!=(const Info& other) const noexcept { return !operator==(other); }
    bool operator<(const Info& other) const noexcept;
    bool operator<=(const Info& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Info& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Info& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const Info& value);

    void swap(Info& other) noexcept;
    friend void swap(Info& value1, Info& value2) noexcept { value1.swap(value2); }
};

} // namespace extra

template<>
struct std::hash<extra::Info>
{
    typedef extra::Info argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace extra {

struct Info;

struct Extra : FBE::Base
{
    int64_t num;
    std::string data;
    ::extra::Info* info;
    ::extra::Info* info2;
    ::extra::Info info3;
    std::vector<::extra::Info> infov;
    std::vector<::extra::Info*> infopv;
    std::list<::extra::Info> infol;
    std::list<::extra::Info*> infopl;

    size_t fbe_type() const noexcept { return 2; }

    Extra();
    Extra(int64_t arg_num, const std::string& arg_data, std::unique_ptr<::extra::Info> arg_info, std::unique_ptr<::extra::Info> arg_info2, ::extra::Info&& arg_info3, std::vector<::extra::Info> arg_infov, std::vector<std::unique_ptr<::extra::Info>> arg_infopv, std::list<::extra::Info> arg_infol, std::list<std::unique_ptr<::extra::Info>> arg_infopl);
    Extra(const Extra& other) = delete;
    Extra(Extra&& other);
    ~Extra();

    Extra& operator=(const Extra& other) = delete;
    Extra& operator=(Extra&& other);

    bool operator==(const Extra& other) const noexcept;
    bool operator!=(const Extra& other) const noexcept { return !operator==(other); }
    bool operator<(const Extra& other) const noexcept;
    bool operator<=(const Extra& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Extra& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Extra& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const Extra& value);

    void swap(Extra& other) noexcept;
    friend void swap(Extra& value1, Extra& value2) noexcept { value1.swap(value2); }
};

} // namespace extra

template<>
struct std::hash<extra::Extra>
{
    typedef extra::Extra argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace extra {

} // namespace extra
