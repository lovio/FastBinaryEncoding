//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: pkg.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

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

#include "osa.h"

namespace pkg {
using namespace FBE;
using namespace ::osa;
} // namespace pkg

namespace FBE {
using namespace ::pkg;
} // namespace FBE

#include "fbe_ptr.h"

namespace pkg {

struct Info : FBE::Base
{
    stdb::memory::string info;
    ::osa::Sex sex;
    ::osa::MyFLags flag;
    ::osa::Extra extra;

    size_t fbe_type() const noexcept { return 1; }

    Info();
    Info(const stdb::memory::string& arg_info, ::osa::Sex&& arg_sex, ::osa::MyFLags&& arg_flag, ::osa::Extra&& arg_extra);
    Info(const Info& other) = default;
    Info(Info&& other) noexcept;
    ~Info() override;

    Info& operator=(const Info& other) = default;
    Info& operator=(Info&& other) noexcept;

    bool operator==(const Info& other) const noexcept;
    bool operator!=(const Info& other) const noexcept { return !operator==(other); }
    bool operator<(const Info& other) const noexcept;
    bool operator<=(const Info& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Info& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Info& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, const Info& value);

    void swap(Info& other) noexcept;
    friend void swap(Info& value1, Info& value2) noexcept { value1.swap(value2); }
};

} // namespace pkg

template<>
struct std::hash<pkg::Info>
{
    typedef pkg::Info argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace pkg {

struct Detail : FBE::Base
{
    std::vector<::osa::Extra> extrav;
    std::map<int32_t, ::osa::Extra> extram;

    size_t fbe_type() const noexcept { return 2; }

    Detail();
    Detail(std::vector<::osa::Extra> arg_extrav, std::map<int32_t, ::osa::Extra> arg_extram);
    Detail(const Detail& other) = default;
    Detail(Detail&& other) noexcept;
    ~Detail() override;

    Detail& operator=(const Detail& other) = default;
    Detail& operator=(Detail&& other) noexcept;

    bool operator==(const Detail& other) const noexcept;
    bool operator!=(const Detail& other) const noexcept { return !operator==(other); }
    bool operator<(const Detail& other) const noexcept;
    bool operator<=(const Detail& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Detail& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Detail& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, const Detail& value);

    void swap(Detail& other) noexcept;
    friend void swap(Detail& value1, Detail& value2) noexcept { value1.swap(value2); }
};

} // namespace pkg

template<>
struct std::hash<pkg::Detail>
{
    typedef pkg::Detail argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace pkg {

} // namespace pkg
