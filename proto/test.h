//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
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

#include "proto.h"

namespace test {
using namespace FBE;
using namespace ::proto;
} // namespace test

namespace FBE {
using namespace ::test;
} // namespace FBE

namespace test {

enum class EnumSimple
{
    ENUM_VALUE_0,
    ENUM_VALUE_1 = (int32_t)1ll,
    ENUM_VALUE_2,
    ENUM_VALUE_3 = (int32_t)3ll,
    ENUM_VALUE_4 = (int32_t)0x4ll,
    ENUM_VALUE_5 = ENUM_VALUE_3,
};

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] EnumSimple value);

#if defined(FMT_VERSION)
} template <> struct fmt::formatter<test::EnumSimple> : formatter<string_view> {}; namespace test {
#endif

#if defined(LOGGING_PROTOCOL)
CppLogging::Record& operator<<(CppLogging::Record& record, EnumSimple value);
#endif

enum class EnumTyped : uint8_t
{
    ENUM_VALUE_0,
    ENUM_VALUE_1 = (char)'1',
    ENUM_VALUE_2,
    ENUM_VALUE_3 = (char)'3',
    ENUM_VALUE_4,
    ENUM_VALUE_5 = ENUM_VALUE_3,
};

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] EnumTyped value);

#if defined(FMT_VERSION)
} template <> struct fmt::formatter<test::EnumTyped> : formatter<string_view> {}; namespace test {
#endif

#if defined(LOGGING_PROTOCOL)
CppLogging::Record& operator<<(CppLogging::Record& record, EnumTyped value);
#endif

enum class EnumEmpty
{
};

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] EnumEmpty value);

#if defined(FMT_VERSION)
} template <> struct fmt::formatter<test::EnumEmpty> : formatter<string_view> {}; namespace test {
#endif

#if defined(LOGGING_PROTOCOL)
CppLogging::Record& operator<<(CppLogging::Record& record, EnumEmpty value);
#endif

enum class FlagsSimple
{
    FLAG_VALUE_0 = (int32_t)0x0ll,
    FLAG_VALUE_1 = (int32_t)0x1ll,
    FLAG_VALUE_2 = (int32_t)0x2ll,
    FLAG_VALUE_3 = (int32_t)0x4ll,
    FLAG_VALUE_4 = FLAG_VALUE_3,
    FLAG_VALUE_5 = FLAG_VALUE_1  |  FLAG_VALUE_3,
};

FBE_ENUM_FLAGS(FlagsSimple)

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] FlagsSimple value);

#if defined(FMT_VERSION)
} template <> struct fmt::formatter<test::FlagsSimple> : formatter<string_view> {}; namespace test {
#endif

#if defined(LOGGING_PROTOCOL)
CppLogging::Record& operator<<(CppLogging::Record& record, FlagsSimple value);
#endif

enum class FlagsTyped : uint64_t
{
    FLAG_VALUE_0 = (uint64_t)0x00ull,
    FLAG_VALUE_1 = (uint64_t)0x01ull,
    FLAG_VALUE_2 = (uint64_t)0x02ull,
    FLAG_VALUE_3 = (uint64_t)0x04ull,
    FLAG_VALUE_4 = (uint64_t)0x08ull,
    FLAG_VALUE_5 = (uint64_t)0x10ull,
    FLAG_VALUE_6 = (uint64_t)0x20ull,
    FLAG_VALUE_7 = (uint64_t)0x40ull,
    FLAG_VALUE_8 = FLAG_VALUE_7,
    FLAG_VALUE_9 = FLAG_VALUE_2  |  FLAG_VALUE_4  |  FLAG_VALUE_6,
};

FBE_ENUM_FLAGS(FlagsTyped)

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] FlagsTyped value);

#if defined(FMT_VERSION)
} template <> struct fmt::formatter<test::FlagsTyped> : formatter<string_view> {}; namespace test {
#endif

#if defined(LOGGING_PROTOCOL)
CppLogging::Record& operator<<(CppLogging::Record& record, FlagsTyped value);
#endif

enum class FlagsEmpty
{
};

FBE_ENUM_FLAGS(FlagsEmpty)

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] FlagsEmpty value);

#if defined(FMT_VERSION)
} template <> struct fmt::formatter<test::FlagsEmpty> : formatter<string_view> {}; namespace test {
#endif

#if defined(LOGGING_PROTOCOL)
CppLogging::Record& operator<<(CppLogging::Record& record, FlagsEmpty value);
#endif

struct StructSimple
{
    int32_t id;
    bool f1;
    bool f2;
    uint8_t f3;
    uint8_t f4;
    char f5;
    char f6;
    wchar_t f7;
    wchar_t f8;
    int8_t f9;
    int8_t f10;
    uint8_t f11;
    uint8_t f12;
    int16_t f13;
    int16_t f14;
    uint16_t f15;
    uint16_t f16;
    int32_t f17;
    int32_t f18;
    uint32_t f19;
    uint32_t f20;
    int64_t f21;
    int64_t f22;
    uint64_t f23;
    uint64_t f24;
    float f25;
    float f26;
    double f27;
    double f28;
    FBE::decimal_t f29;
    FBE::decimal_t f30;
    std::string f31;
    std::string f32;
    uint64_t f33;
    uint64_t f34;
    uint64_t f35;
    FBE::uuid_t f36;
    FBE::uuid_t f37;
    FBE::uuid_t f38;
    ::proto::OrderSide f39;
    ::proto::OrderType f40;
    ::proto::Order f41;
    ::proto::Balance f42;
    ::proto::State f43;
    ::proto::Account f44;

    size_t fbe_type() const noexcept { return 110; }

    StructSimple();
    StructSimple(int32_t arg_id, bool arg_f1, bool arg_f2, uint8_t arg_f3, uint8_t arg_f4, char arg_f5, char arg_f6, wchar_t arg_f7, wchar_t arg_f8, int8_t arg_f9, int8_t arg_f10, uint8_t arg_f11, uint8_t arg_f12, int16_t arg_f13, int16_t arg_f14, uint16_t arg_f15, uint16_t arg_f16, int32_t arg_f17, int32_t arg_f18, uint32_t arg_f19, uint32_t arg_f20, int64_t arg_f21, int64_t arg_f22, uint64_t arg_f23, uint64_t arg_f24, float arg_f25, float arg_f26, double arg_f27, double arg_f28, const FBE::decimal_t& arg_f29, const FBE::decimal_t& arg_f30, const std::string& arg_f31, const std::string& arg_f32, uint64_t arg_f33, uint64_t arg_f34, uint64_t arg_f35, const FBE::uuid_t& arg_f36, const FBE::uuid_t& arg_f37, const FBE::uuid_t& arg_f38, const ::proto::OrderSide& arg_f39, const ::proto::OrderType& arg_f40, const ::proto::Order& arg_f41, const ::proto::Balance& arg_f42, const ::proto::State& arg_f43, const ::proto::Account& arg_f44);
    StructSimple(const StructSimple& other) = default;
    StructSimple(StructSimple&& other) = default;
    ~StructSimple() = default;

    StructSimple& operator=(const StructSimple& other) = default;
    StructSimple& operator=(StructSimple&& other) = default;

    bool operator==(const StructSimple& other) const noexcept;
    bool operator!=(const StructSimple& other) const noexcept { return !operator==(other); }
    bool operator<(const StructSimple& other) const noexcept;
    bool operator<=(const StructSimple& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructSimple& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructSimple& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructSimple& value);

    void swap(StructSimple& other) noexcept;
    friend void swap(StructSimple& value1, StructSimple& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructSimple> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructSimple>
{
    typedef test::StructSimple argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<decltype(value.id)>()(value.id);
        return result;
    }
};

namespace test {

struct StructOptional : public ::test::StructSimple
{
    std::optional<bool> f100;
    std::optional<bool> f101;
    std::optional<bool> f102;
    std::optional<uint8_t> f103;
    std::optional<uint8_t> f104;
    std::optional<uint8_t> f105;
    std::optional<char> f106;
    std::optional<char> f107;
    std::optional<char> f108;
    std::optional<wchar_t> f109;
    std::optional<wchar_t> f110;
    std::optional<wchar_t> f111;
    std::optional<int8_t> f112;
    std::optional<int8_t> f113;
    std::optional<int8_t> f114;
    std::optional<uint8_t> f115;
    std::optional<uint8_t> f116;
    std::optional<uint8_t> f117;
    std::optional<int16_t> f118;
    std::optional<int16_t> f119;
    std::optional<int16_t> f120;
    std::optional<uint16_t> f121;
    std::optional<uint16_t> f122;
    std::optional<uint16_t> f123;
    std::optional<int32_t> f124;
    std::optional<int32_t> f125;
    std::optional<int32_t> f126;
    std::optional<uint32_t> f127;
    std::optional<uint32_t> f128;
    std::optional<uint32_t> f129;
    std::optional<int64_t> f130;
    std::optional<int64_t> f131;
    std::optional<int64_t> f132;
    std::optional<uint64_t> f133;
    std::optional<uint64_t> f134;
    std::optional<uint64_t> f135;
    std::optional<float> f136;
    std::optional<float> f137;
    std::optional<float> f138;
    std::optional<double> f139;
    std::optional<double> f140;
    std::optional<double> f141;
    std::optional<FBE::decimal_t> f142;
    std::optional<FBE::decimal_t> f143;
    std::optional<FBE::decimal_t> f144;
    std::optional<std::string> f145;
    std::optional<std::string> f146;
    std::optional<std::string> f147;
    std::optional<uint64_t> f148;
    std::optional<uint64_t> f149;
    std::optional<uint64_t> f150;
    std::optional<FBE::uuid_t> f151;
    std::optional<FBE::uuid_t> f152;
    std::optional<FBE::uuid_t> f153;
    std::optional<::proto::OrderSide> f154;
    std::optional<::proto::OrderSide> f155;
    std::optional<::proto::OrderType> f156;
    std::optional<::proto::OrderType> f157;
    std::optional<::proto::Order> f158;
    std::optional<::proto::Order> f159;
    std::optional<::proto::Balance> f160;
    std::optional<::proto::Balance> f161;
    std::optional<::proto::State> f162;
    std::optional<::proto::State> f163;
    std::optional<::proto::Account> f164;
    std::optional<::proto::Account> f165;

    size_t fbe_type() const noexcept { return 111; }

    StructOptional();
    StructOptional(const ::test::StructSimple& base, const std::optional<bool>& arg_f100, const std::optional<bool>& arg_f101, const std::optional<bool>& arg_f102, const std::optional<uint8_t>& arg_f103, const std::optional<uint8_t>& arg_f104, const std::optional<uint8_t>& arg_f105, const std::optional<char>& arg_f106, const std::optional<char>& arg_f107, const std::optional<char>& arg_f108, const std::optional<wchar_t>& arg_f109, const std::optional<wchar_t>& arg_f110, const std::optional<wchar_t>& arg_f111, const std::optional<int8_t>& arg_f112, const std::optional<int8_t>& arg_f113, const std::optional<int8_t>& arg_f114, const std::optional<uint8_t>& arg_f115, const std::optional<uint8_t>& arg_f116, const std::optional<uint8_t>& arg_f117, const std::optional<int16_t>& arg_f118, const std::optional<int16_t>& arg_f119, const std::optional<int16_t>& arg_f120, const std::optional<uint16_t>& arg_f121, const std::optional<uint16_t>& arg_f122, const std::optional<uint16_t>& arg_f123, const std::optional<int32_t>& arg_f124, const std::optional<int32_t>& arg_f125, const std::optional<int32_t>& arg_f126, const std::optional<uint32_t>& arg_f127, const std::optional<uint32_t>& arg_f128, const std::optional<uint32_t>& arg_f129, const std::optional<int64_t>& arg_f130, const std::optional<int64_t>& arg_f131, const std::optional<int64_t>& arg_f132, const std::optional<uint64_t>& arg_f133, const std::optional<uint64_t>& arg_f134, const std::optional<uint64_t>& arg_f135, const std::optional<float>& arg_f136, const std::optional<float>& arg_f137, const std::optional<float>& arg_f138, const std::optional<double>& arg_f139, const std::optional<double>& arg_f140, const std::optional<double>& arg_f141, const std::optional<FBE::decimal_t>& arg_f142, const std::optional<FBE::decimal_t>& arg_f143, const std::optional<FBE::decimal_t>& arg_f144, const std::optional<std::string>& arg_f145, const std::optional<std::string>& arg_f146, const std::optional<std::string>& arg_f147, const std::optional<uint64_t>& arg_f148, const std::optional<uint64_t>& arg_f149, const std::optional<uint64_t>& arg_f150, const std::optional<FBE::uuid_t>& arg_f151, const std::optional<FBE::uuid_t>& arg_f152, const std::optional<FBE::uuid_t>& arg_f153, const std::optional<::proto::OrderSide>& arg_f154, const std::optional<::proto::OrderSide>& arg_f155, const std::optional<::proto::OrderType>& arg_f156, const std::optional<::proto::OrderType>& arg_f157, const std::optional<::proto::Order>& arg_f158, const std::optional<::proto::Order>& arg_f159, const std::optional<::proto::Balance>& arg_f160, const std::optional<::proto::Balance>& arg_f161, const std::optional<::proto::State>& arg_f162, const std::optional<::proto::State>& arg_f163, const std::optional<::proto::Account>& arg_f164, const std::optional<::proto::Account>& arg_f165);
    StructOptional(const StructOptional& other) = default;
    StructOptional(StructOptional&& other) = default;
    ~StructOptional() = default;

    StructOptional& operator=(const StructOptional& other) = default;
    StructOptional& operator=(StructOptional&& other) = default;

    bool operator==(const StructOptional& other) const noexcept;
    bool operator!=(const StructOptional& other) const noexcept { return !operator==(other); }
    bool operator<(const StructOptional& other) const noexcept;
    bool operator<=(const StructOptional& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructOptional& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructOptional& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructOptional& value);

    void swap(StructOptional& other) noexcept;
    friend void swap(StructOptional& value1, StructOptional& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructOptional> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructOptional>
{
    typedef test::StructOptional argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<::test::StructSimple>()(value);
        return result;
    }
};

namespace test {

struct StructNested : public ::test::StructOptional
{
    ::test::EnumSimple f1000;
    std::optional<::test::EnumSimple> f1001;
    ::test::EnumTyped f1002;
    std::optional<::test::EnumTyped> f1003;
    ::test::FlagsSimple f1004;
    std::optional<::test::FlagsSimple> f1005;
    ::test::FlagsTyped f1006;
    std::optional<::test::FlagsTyped> f1007;
    ::test::StructSimple f1008;
    std::optional<::test::StructSimple> f1009;
    ::test::StructOptional f1010;
    std::optional<::test::StructOptional> f1011;

    size_t fbe_type() const noexcept { return 112; }

    StructNested();
    StructNested(const ::test::StructOptional& base, const ::test::EnumSimple& arg_f1000, const std::optional<::test::EnumSimple>& arg_f1001, const ::test::EnumTyped& arg_f1002, const std::optional<::test::EnumTyped>& arg_f1003, const ::test::FlagsSimple& arg_f1004, const std::optional<::test::FlagsSimple>& arg_f1005, const ::test::FlagsTyped& arg_f1006, const std::optional<::test::FlagsTyped>& arg_f1007, const ::test::StructSimple& arg_f1008, const std::optional<::test::StructSimple>& arg_f1009, const ::test::StructOptional& arg_f1010, const std::optional<::test::StructOptional>& arg_f1011);
    StructNested(const StructNested& other) = default;
    StructNested(StructNested&& other) = default;
    ~StructNested() = default;

    StructNested& operator=(const StructNested& other) = default;
    StructNested& operator=(StructNested&& other) = default;

    bool operator==(const StructNested& other) const noexcept;
    bool operator!=(const StructNested& other) const noexcept { return !operator==(other); }
    bool operator<(const StructNested& other) const noexcept;
    bool operator<=(const StructNested& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructNested& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructNested& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructNested& value);

    void swap(StructNested& other) noexcept;
    friend void swap(StructNested& value1, StructNested& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructNested> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructNested>
{
    typedef test::StructNested argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<::test::StructOptional>()(value);
        return result;
    }
};

namespace test {

struct StructBytes
{
    FBE::buffer_t f1;
    std::optional<FBE::buffer_t> f2;
    std::optional<FBE::buffer_t> f3;

    size_t fbe_type() const noexcept { return 120; }

    StructBytes();
    StructBytes(const FBE::buffer_t& arg_f1, const std::optional<FBE::buffer_t>& arg_f2, const std::optional<FBE::buffer_t>& arg_f3);
    StructBytes(const StructBytes& other) = default;
    StructBytes(StructBytes&& other) = default;
    ~StructBytes() = default;

    StructBytes& operator=(const StructBytes& other) = default;
    StructBytes& operator=(StructBytes&& other) = default;

    bool operator==(const StructBytes& other) const noexcept;
    bool operator!=(const StructBytes& other) const noexcept { return !operator==(other); }
    bool operator<(const StructBytes& other) const noexcept;
    bool operator<=(const StructBytes& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructBytes& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructBytes& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructBytes& value);

    void swap(StructBytes& other) noexcept;
    friend void swap(StructBytes& value1, StructBytes& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructBytes> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructBytes>
{
    typedef test::StructBytes argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace test {

struct StructArray
{
    std::array<uint8_t, 2> f1;
    std::array<std::optional<uint8_t>, 2> f2;
    std::array<FBE::buffer_t, 2> f3;
    std::array<std::optional<FBE::buffer_t>, 2> f4;
    std::array<::test::EnumSimple, 2> f5;
    std::array<std::optional<::test::EnumSimple>, 2> f6;
    std::array<::test::FlagsSimple, 2> f7;
    std::array<std::optional<::test::FlagsSimple>, 2> f8;
    std::array<::test::StructSimple, 2> f9;
    std::array<std::optional<::test::StructSimple>, 2> f10;

    size_t fbe_type() const noexcept { return 125; }

    StructArray();
    StructArray(const std::array<uint8_t, 2>& arg_f1, const std::array<std::optional<uint8_t>, 2>& arg_f2, const std::array<FBE::buffer_t, 2>& arg_f3, const std::array<std::optional<FBE::buffer_t>, 2>& arg_f4, const std::array<::test::EnumSimple, 2>& arg_f5, const std::array<std::optional<::test::EnumSimple>, 2>& arg_f6, const std::array<::test::FlagsSimple, 2>& arg_f7, const std::array<std::optional<::test::FlagsSimple>, 2>& arg_f8, const std::array<::test::StructSimple, 2>& arg_f9, const std::array<std::optional<::test::StructSimple>, 2>& arg_f10);
    StructArray(const StructArray& other) = default;
    StructArray(StructArray&& other) = default;
    ~StructArray() = default;

    StructArray& operator=(const StructArray& other) = default;
    StructArray& operator=(StructArray&& other) = default;

    bool operator==(const StructArray& other) const noexcept;
    bool operator!=(const StructArray& other) const noexcept { return !operator==(other); }
    bool operator<(const StructArray& other) const noexcept;
    bool operator<=(const StructArray& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructArray& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructArray& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructArray& value);

    void swap(StructArray& other) noexcept;
    friend void swap(StructArray& value1, StructArray& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructArray> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructArray>
{
    typedef test::StructArray argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace test {

struct StructVector
{
    std::vector<uint8_t> f1;
    std::vector<std::optional<uint8_t>> f2;
    std::vector<FBE::buffer_t> f3;
    std::vector<std::optional<FBE::buffer_t>> f4;
    std::vector<::test::EnumSimple> f5;
    std::vector<std::optional<::test::EnumSimple>> f6;
    std::vector<::test::FlagsSimple> f7;
    std::vector<std::optional<::test::FlagsSimple>> f8;
    std::vector<::test::StructSimple> f9;
    std::vector<std::optional<::test::StructSimple>> f10;

    size_t fbe_type() const noexcept { return 130; }

    StructVector();
    StructVector(const std::vector<uint8_t>& arg_f1, const std::vector<std::optional<uint8_t>>& arg_f2, const std::vector<FBE::buffer_t>& arg_f3, const std::vector<std::optional<FBE::buffer_t>>& arg_f4, const std::vector<::test::EnumSimple>& arg_f5, const std::vector<std::optional<::test::EnumSimple>>& arg_f6, const std::vector<::test::FlagsSimple>& arg_f7, const std::vector<std::optional<::test::FlagsSimple>>& arg_f8, const std::vector<::test::StructSimple>& arg_f9, const std::vector<std::optional<::test::StructSimple>>& arg_f10);
    StructVector(const StructVector& other) = default;
    StructVector(StructVector&& other) = default;
    ~StructVector() = default;

    StructVector& operator=(const StructVector& other) = default;
    StructVector& operator=(StructVector&& other) = default;

    bool operator==(const StructVector& other) const noexcept;
    bool operator!=(const StructVector& other) const noexcept { return !operator==(other); }
    bool operator<(const StructVector& other) const noexcept;
    bool operator<=(const StructVector& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructVector& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructVector& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructVector& value);

    void swap(StructVector& other) noexcept;
    friend void swap(StructVector& value1, StructVector& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructVector> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructVector>
{
    typedef test::StructVector argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace test {

struct StructList
{
    std::list<uint8_t> f1;
    std::list<std::optional<uint8_t>> f2;
    std::list<FBE::buffer_t> f3;
    std::list<std::optional<FBE::buffer_t>> f4;
    std::list<::test::EnumSimple> f5;
    std::list<std::optional<::test::EnumSimple>> f6;
    std::list<::test::FlagsSimple> f7;
    std::list<std::optional<::test::FlagsSimple>> f8;
    std::list<::test::StructSimple> f9;
    std::list<std::optional<::test::StructSimple>> f10;

    size_t fbe_type() const noexcept { return 131; }

    StructList();
    StructList(const std::list<uint8_t>& arg_f1, const std::list<std::optional<uint8_t>>& arg_f2, const std::list<FBE::buffer_t>& arg_f3, const std::list<std::optional<FBE::buffer_t>>& arg_f4, const std::list<::test::EnumSimple>& arg_f5, const std::list<std::optional<::test::EnumSimple>>& arg_f6, const std::list<::test::FlagsSimple>& arg_f7, const std::list<std::optional<::test::FlagsSimple>>& arg_f8, const std::list<::test::StructSimple>& arg_f9, const std::list<std::optional<::test::StructSimple>>& arg_f10);
    StructList(const StructList& other) = default;
    StructList(StructList&& other) = default;
    ~StructList() = default;

    StructList& operator=(const StructList& other) = default;
    StructList& operator=(StructList&& other) = default;

    bool operator==(const StructList& other) const noexcept;
    bool operator!=(const StructList& other) const noexcept { return !operator==(other); }
    bool operator<(const StructList& other) const noexcept;
    bool operator<=(const StructList& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructList& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructList& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructList& value);

    void swap(StructList& other) noexcept;
    friend void swap(StructList& value1, StructList& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructList> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructList>
{
    typedef test::StructList argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace test {

struct StructSet
{
    std::set<uint8_t> f1;
    std::set<::test::EnumSimple> f2;
    std::set<::test::FlagsSimple> f3;
    std::set<::test::StructSimple> f4;

    size_t fbe_type() const noexcept { return 132; }

    StructSet();
    StructSet(const std::set<uint8_t>& arg_f1, const std::set<::test::EnumSimple>& arg_f2, const std::set<::test::FlagsSimple>& arg_f3, const std::set<::test::StructSimple>& arg_f4);
    StructSet(const StructSet& other) = default;
    StructSet(StructSet&& other) = default;
    ~StructSet() = default;

    StructSet& operator=(const StructSet& other) = default;
    StructSet& operator=(StructSet&& other) = default;

    bool operator==(const StructSet& other) const noexcept;
    bool operator!=(const StructSet& other) const noexcept { return !operator==(other); }
    bool operator<(const StructSet& other) const noexcept;
    bool operator<=(const StructSet& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructSet& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructSet& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructSet& value);

    void swap(StructSet& other) noexcept;
    friend void swap(StructSet& value1, StructSet& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructSet> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructSet>
{
    typedef test::StructSet argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace test {

struct StructMap
{
    std::map<int32_t, uint8_t> f1;
    std::map<int32_t, std::optional<uint8_t>> f2;
    std::map<int32_t, FBE::buffer_t> f3;
    std::map<int32_t, std::optional<FBE::buffer_t>> f4;
    std::map<int32_t, ::test::EnumSimple> f5;
    std::map<int32_t, std::optional<::test::EnumSimple>> f6;
    std::map<int32_t, ::test::FlagsSimple> f7;
    std::map<int32_t, std::optional<::test::FlagsSimple>> f8;
    std::map<int32_t, ::test::StructSimple> f9;
    std::map<int32_t, std::optional<::test::StructSimple>> f10;

    size_t fbe_type() const noexcept { return 140; }

    StructMap();
    StructMap(const std::map<int32_t, uint8_t>& arg_f1, const std::map<int32_t, std::optional<uint8_t>>& arg_f2, const std::map<int32_t, FBE::buffer_t>& arg_f3, const std::map<int32_t, std::optional<FBE::buffer_t>>& arg_f4, const std::map<int32_t, ::test::EnumSimple>& arg_f5, const std::map<int32_t, std::optional<::test::EnumSimple>>& arg_f6, const std::map<int32_t, ::test::FlagsSimple>& arg_f7, const std::map<int32_t, std::optional<::test::FlagsSimple>>& arg_f8, const std::map<int32_t, ::test::StructSimple>& arg_f9, const std::map<int32_t, std::optional<::test::StructSimple>>& arg_f10);
    StructMap(const StructMap& other) = default;
    StructMap(StructMap&& other) = default;
    ~StructMap() = default;

    StructMap& operator=(const StructMap& other) = default;
    StructMap& operator=(StructMap&& other) = default;

    bool operator==(const StructMap& other) const noexcept;
    bool operator!=(const StructMap& other) const noexcept { return !operator==(other); }
    bool operator<(const StructMap& other) const noexcept;
    bool operator<=(const StructMap& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructMap& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructMap& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructMap& value);

    void swap(StructMap& other) noexcept;
    friend void swap(StructMap& value1, StructMap& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructMap> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructMap>
{
    typedef test::StructMap argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace test {

struct StructHash
{
    std::unordered_map<std::string, uint8_t> f1;
    std::unordered_map<std::string, std::optional<uint8_t>> f2;
    std::unordered_map<std::string, FBE::buffer_t> f3;
    std::unordered_map<std::string, std::optional<FBE::buffer_t>> f4;
    std::unordered_map<std::string, ::test::EnumSimple> f5;
    std::unordered_map<std::string, std::optional<::test::EnumSimple>> f6;
    std::unordered_map<std::string, ::test::FlagsSimple> f7;
    std::unordered_map<std::string, std::optional<::test::FlagsSimple>> f8;
    std::unordered_map<std::string, ::test::StructSimple> f9;
    std::unordered_map<std::string, std::optional<::test::StructSimple>> f10;

    size_t fbe_type() const noexcept { return 141; }

    StructHash();
    StructHash(const std::unordered_map<std::string, uint8_t>& arg_f1, const std::unordered_map<std::string, std::optional<uint8_t>>& arg_f2, const std::unordered_map<std::string, FBE::buffer_t>& arg_f3, const std::unordered_map<std::string, std::optional<FBE::buffer_t>>& arg_f4, const std::unordered_map<std::string, ::test::EnumSimple>& arg_f5, const std::unordered_map<std::string, std::optional<::test::EnumSimple>>& arg_f6, const std::unordered_map<std::string, ::test::FlagsSimple>& arg_f7, const std::unordered_map<std::string, std::optional<::test::FlagsSimple>>& arg_f8, const std::unordered_map<std::string, ::test::StructSimple>& arg_f9, const std::unordered_map<std::string, std::optional<::test::StructSimple>>& arg_f10);
    StructHash(const StructHash& other) = default;
    StructHash(StructHash&& other) = default;
    ~StructHash() = default;

    StructHash& operator=(const StructHash& other) = default;
    StructHash& operator=(StructHash&& other) = default;

    bool operator==(const StructHash& other) const noexcept;
    bool operator!=(const StructHash& other) const noexcept { return !operator==(other); }
    bool operator<(const StructHash& other) const noexcept;
    bool operator<=(const StructHash& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructHash& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructHash& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructHash& value);

    void swap(StructHash& other) noexcept;
    friend void swap(StructHash& value1, StructHash& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructHash> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructHash>
{
    typedef test::StructHash argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace test {

struct StructHashEx
{
    std::unordered_map<::test::StructSimple, ::test::StructNested> f1;
    std::unordered_map<::test::StructSimple, std::optional<::test::StructNested>> f2;

    size_t fbe_type() const noexcept { return 142; }

    StructHashEx();
    StructHashEx(const std::unordered_map<::test::StructSimple, ::test::StructNested>& arg_f1, const std::unordered_map<::test::StructSimple, std::optional<::test::StructNested>>& arg_f2);
    StructHashEx(const StructHashEx& other) = default;
    StructHashEx(StructHashEx&& other) = default;
    ~StructHashEx() = default;

    StructHashEx& operator=(const StructHashEx& other) = default;
    StructHashEx& operator=(StructHashEx&& other) = default;

    bool operator==(const StructHashEx& other) const noexcept;
    bool operator!=(const StructHashEx& other) const noexcept { return !operator==(other); }
    bool operator<(const StructHashEx& other) const noexcept;
    bool operator<=(const StructHashEx& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructHashEx& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructHashEx& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructHashEx& value);

    void swap(StructHashEx& other) noexcept;
    friend void swap(StructHashEx& value1, StructHashEx& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructHashEx> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructHashEx>
{
    typedef test::StructHashEx argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace test {

struct StructEmpty
{
    size_t fbe_type() const noexcept { return 143; }

    StructEmpty();
    StructEmpty(const StructEmpty& other) = default;
    StructEmpty(StructEmpty&& other) = default;
    ~StructEmpty() = default;

    StructEmpty& operator=(const StructEmpty& other) = default;
    StructEmpty& operator=(StructEmpty&& other) = default;

    bool operator==(const StructEmpty& other) const noexcept;
    bool operator!=(const StructEmpty& other) const noexcept { return !operator==(other); }
    bool operator<(const StructEmpty& other) const noexcept;
    bool operator<=(const StructEmpty& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const StructEmpty& other) const noexcept { return !operator<=(other); }
    bool operator>=(const StructEmpty& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const StructEmpty& value);

    void swap(StructEmpty& other) noexcept;
    friend void swap(StructEmpty& value1, StructEmpty& value2) noexcept { value1.swap(value2); }
};

} // namespace test

#if defined(FMT_VERSION)
template <> struct fmt::formatter<test::StructEmpty> : formatter<string_view> {};
#endif

template<>
struct std::hash<test::StructEmpty>
{
    typedef test::StructEmpty argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace test {

} // namespace test
