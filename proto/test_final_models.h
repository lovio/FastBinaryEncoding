// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

#pragma once

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe_final_models.h"

#include "test.h"

#include "proto_final_models.h"

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065) // C4065: switch statement contains 'default' but no 'case' labels
#pragma warning(disable:4702) // C4702: unreachable code
#endif

namespace FBE {

// Fast Binary Encoding ::test::EnumSimple final model
template <>
class FinalModel<::test::EnumSimple> : public FinalModelBase<::test::EnumSimple, int32_t>
{
public:
    using FinalModelBase<::test::EnumSimple, int32_t>::FinalModelBase;
};

// Fast Binary Encoding ::test::EnumTyped final model
template <>
class FinalModel<::test::EnumTyped> : public FinalModelBase<::test::EnumTyped, uint8_t>
{
public:
    using FinalModelBase<::test::EnumTyped, uint8_t>::FinalModelBase;
};

// Fast Binary Encoding ::test::EnumEmpty final model
template <>
class FinalModel<::test::EnumEmpty> : public FinalModelBase<::test::EnumEmpty, int32_t>
{
public:
    using FinalModelBase<::test::EnumEmpty, int32_t>::FinalModelBase;
};

// Fast Binary Encoding ::test::FlagsSimple final model
template <>
class FinalModel<::test::FlagsSimple> : public FinalModelBase<::test::FlagsSimple, int32_t>
{
public:
    using FinalModelBase<::test::FlagsSimple, int32_t>::FinalModelBase;
};

// Fast Binary Encoding ::test::FlagsTyped final model
template <>
class FinalModel<::test::FlagsTyped> : public FinalModelBase<::test::FlagsTyped, uint64_t>
{
public:
    using FinalModelBase<::test::FlagsTyped, uint64_t>::FinalModelBase;
};

// Fast Binary Encoding ::test::FlagsEmpty final model
template <>
class FinalModel<::test::FlagsEmpty> : public FinalModelBase<::test::FlagsEmpty, int32_t>
{
public:
    using FinalModelBase<::test::FlagsEmpty, int32_t>::FinalModelBase;
};

// Fast Binary Encoding ::test::StructSimple final model
template <>
class FinalModel<::test::StructSimple>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructSimple& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 110; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructSimple& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructSimple& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructSimple& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructSimple& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<int32_t> id;
    FinalModel<bool> f1;
    FinalModel<bool> f2;
    FinalModel<uint8_t> f3;
    FinalModel<uint8_t> f4;
    FinalModel<char> f5;
    FinalModel<char> f6;
    FinalModel<wchar_t> f7;
    FinalModel<wchar_t> f8;
    FinalModel<int8_t> f9;
    FinalModel<int8_t> f10;
    FinalModel<uint8_t> f11;
    FinalModel<uint8_t> f12;
    FinalModel<int16_t> f13;
    FinalModel<int16_t> f14;
    FinalModel<uint16_t> f15;
    FinalModel<uint16_t> f16;
    FinalModel<int32_t> f17;
    FinalModel<int32_t> f18;
    FinalModel<uint32_t> f19;
    FinalModel<uint32_t> f20;
    FinalModel<int64_t> f21;
    FinalModel<int64_t> f22;
    FinalModel<uint64_t> f23;
    FinalModel<uint64_t> f24;
    FinalModel<float> f25;
    FinalModel<float> f26;
    FinalModel<double> f27;
    FinalModel<double> f28;
    FinalModel<FBE::decimal_t> f29;
    FinalModel<FBE::decimal_t> f30;
    FinalModel<std::string> f31;
    FinalModel<std::string> f32;
    FinalModel<uint64_t> f33;
    FinalModel<uint64_t> f34;
    FinalModel<uint64_t> f35;
    FinalModel<FBE::uuid_t> f36;
    FinalModel<FBE::uuid_t> f37;
    FinalModel<FBE::uuid_t> f38;
    FinalModel<::proto::OrderSide> f39;
    FinalModel<::proto::OrderType> f40;
    FinalModel<::proto::Order> f41;
    FinalModel<::proto::Balance> f42;
    FinalModel<::proto::State> f43;
    FinalModel<::proto::Account> f44;
};

namespace test {

// Fast Binary Encoding StructSimple final model
class StructSimpleFinalModel : public FBE::Model
{
public:
    StructSimpleFinalModel() : _model(this->buffer(), 8) {}
    StructSimpleFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructSimple>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructSimple& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructSimple& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructSimple> _model;
};

} // namespace test

// Fast Binary Encoding ::test::StructOptional final model
template <>
class FinalModel<::test::StructOptional>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructOptional& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 111; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructOptional& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructOptional& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructOptional& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructOptional& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<::test::StructSimple> parent;
    FinalModel<std::optional<bool>> f100;
    FinalModel<std::optional<bool>> f101;
    FinalModel<std::optional<bool>> f102;
    FinalModel<std::optional<uint8_t>> f103;
    FinalModel<std::optional<uint8_t>> f104;
    FinalModel<std::optional<uint8_t>> f105;
    FinalModel<std::optional<char>> f106;
    FinalModel<std::optional<char>> f107;
    FinalModel<std::optional<char>> f108;
    FinalModel<std::optional<wchar_t>> f109;
    FinalModel<std::optional<wchar_t>> f110;
    FinalModel<std::optional<wchar_t>> f111;
    FinalModel<std::optional<int8_t>> f112;
    FinalModel<std::optional<int8_t>> f113;
    FinalModel<std::optional<int8_t>> f114;
    FinalModel<std::optional<uint8_t>> f115;
    FinalModel<std::optional<uint8_t>> f116;
    FinalModel<std::optional<uint8_t>> f117;
    FinalModel<std::optional<int16_t>> f118;
    FinalModel<std::optional<int16_t>> f119;
    FinalModel<std::optional<int16_t>> f120;
    FinalModel<std::optional<uint16_t>> f121;
    FinalModel<std::optional<uint16_t>> f122;
    FinalModel<std::optional<uint16_t>> f123;
    FinalModel<std::optional<int32_t>> f124;
    FinalModel<std::optional<int32_t>> f125;
    FinalModel<std::optional<int32_t>> f126;
    FinalModel<std::optional<uint32_t>> f127;
    FinalModel<std::optional<uint32_t>> f128;
    FinalModel<std::optional<uint32_t>> f129;
    FinalModel<std::optional<int64_t>> f130;
    FinalModel<std::optional<int64_t>> f131;
    FinalModel<std::optional<int64_t>> f132;
    FinalModel<std::optional<uint64_t>> f133;
    FinalModel<std::optional<uint64_t>> f134;
    FinalModel<std::optional<uint64_t>> f135;
    FinalModel<std::optional<float>> f136;
    FinalModel<std::optional<float>> f137;
    FinalModel<std::optional<float>> f138;
    FinalModel<std::optional<double>> f139;
    FinalModel<std::optional<double>> f140;
    FinalModel<std::optional<double>> f141;
    FinalModel<std::optional<FBE::decimal_t>> f142;
    FinalModel<std::optional<FBE::decimal_t>> f143;
    FinalModel<std::optional<FBE::decimal_t>> f144;
    FinalModel<std::optional<std::string>> f145;
    FinalModel<std::optional<std::string>> f146;
    FinalModel<std::optional<std::string>> f147;
    FinalModel<std::optional<uint64_t>> f148;
    FinalModel<std::optional<uint64_t>> f149;
    FinalModel<std::optional<uint64_t>> f150;
    FinalModel<std::optional<FBE::uuid_t>> f151;
    FinalModel<std::optional<FBE::uuid_t>> f152;
    FinalModel<std::optional<FBE::uuid_t>> f153;
    FinalModel<std::optional<::proto::OrderSide>> f154;
    FinalModel<std::optional<::proto::OrderSide>> f155;
    FinalModel<std::optional<::proto::OrderType>> f156;
    FinalModel<std::optional<::proto::OrderType>> f157;
    FinalModel<std::optional<::proto::Order>> f158;
    FinalModel<std::optional<::proto::Order>> f159;
    FinalModel<std::optional<::proto::Balance>> f160;
    FinalModel<std::optional<::proto::Balance>> f161;
    FinalModel<std::optional<::proto::State>> f162;
    FinalModel<std::optional<::proto::State>> f163;
    FinalModel<std::optional<::proto::Account>> f164;
    FinalModel<std::optional<::proto::Account>> f165;
};

namespace test {

// Fast Binary Encoding StructOptional final model
class StructOptionalFinalModel : public FBE::Model
{
public:
    StructOptionalFinalModel() : _model(this->buffer(), 8) {}
    StructOptionalFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructOptional>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructOptional& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructOptional& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructOptional> _model;
};

} // namespace test

// Fast Binary Encoding ::test::StructNested final model
template <>
class FinalModel<::test::StructNested>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructNested& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 112; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructNested& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructNested& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructNested& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructNested& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<::test::StructOptional> parent;
    FinalModel<::test::EnumSimple> f1000;
    FinalModel<std::optional<::test::EnumSimple>> f1001;
    FinalModel<::test::EnumTyped> f1002;
    FinalModel<std::optional<::test::EnumTyped>> f1003;
    FinalModel<::test::FlagsSimple> f1004;
    FinalModel<std::optional<::test::FlagsSimple>> f1005;
    FinalModel<::test::FlagsTyped> f1006;
    FinalModel<std::optional<::test::FlagsTyped>> f1007;
    FinalModel<::test::StructSimple> f1008;
    FinalModel<std::optional<::test::StructSimple>> f1009;
    FinalModel<::test::StructOptional> f1010;
    FinalModel<std::optional<::test::StructOptional>> f1011;
};

namespace test {

// Fast Binary Encoding StructNested final model
class StructNestedFinalModel : public FBE::Model
{
public:
    StructNestedFinalModel() : _model(this->buffer(), 8) {}
    StructNestedFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructNested>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructNested& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructNested& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructNested> _model;
};

} // namespace test

// Fast Binary Encoding ::test::StructBytes final model
template <>
class FinalModel<::test::StructBytes>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructBytes& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 120; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructBytes& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructBytes& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructBytes& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructBytes& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<FBE::buffer_t> f1;
    FinalModel<std::optional<FBE::buffer_t>> f2;
    FinalModel<std::optional<FBE::buffer_t>> f3;
};

namespace test {

// Fast Binary Encoding StructBytes final model
class StructBytesFinalModel : public FBE::Model
{
public:
    StructBytesFinalModel() : _model(this->buffer(), 8) {}
    StructBytesFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructBytes>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructBytes& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructBytes& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructBytes> _model;
};

} // namespace test

// Fast Binary Encoding ::test::StructArray final model
template <>
class FinalModel<::test::StructArray>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructArray& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 125; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructArray& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructArray& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructArray& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructArray& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModelArray<uint8_t, 2> f1;
    FinalModelArray<std::optional<uint8_t>, 2> f2;
    FinalModelArray<FBE::buffer_t, 2> f3;
    FinalModelArray<std::optional<FBE::buffer_t>, 2> f4;
    FinalModelArray<::test::EnumSimple, 2> f5;
    FinalModelArray<std::optional<::test::EnumSimple>, 2> f6;
    FinalModelArray<::test::FlagsSimple, 2> f7;
    FinalModelArray<std::optional<::test::FlagsSimple>, 2> f8;
    FinalModelArray<::test::StructSimple, 2> f9;
    FinalModelArray<std::optional<::test::StructSimple>, 2> f10;
};

namespace test {

// Fast Binary Encoding StructArray final model
class StructArrayFinalModel : public FBE::Model
{
public:
    StructArrayFinalModel() : _model(this->buffer(), 8) {}
    StructArrayFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructArray>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructArray& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructArray& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructArray> _model;
};

} // namespace test

// Fast Binary Encoding ::test::StructVector final model
template <>
class FinalModel<::test::StructVector>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructVector& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 130; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructVector& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructVector& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructVector& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructVector& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModelVector<uint8_t> f1;
    FinalModelVector<std::optional<uint8_t>> f2;
    FinalModelVector<FBE::buffer_t> f3;
    FinalModelVector<std::optional<FBE::buffer_t>> f4;
    FinalModelVector<::test::EnumSimple> f5;
    FinalModelVector<std::optional<::test::EnumSimple>> f6;
    FinalModelVector<::test::FlagsSimple> f7;
    FinalModelVector<std::optional<::test::FlagsSimple>> f8;
    FinalModelVector<::test::StructSimple> f9;
    FinalModelVector<std::optional<::test::StructSimple>> f10;
};

namespace test {

// Fast Binary Encoding StructVector final model
class StructVectorFinalModel : public FBE::Model
{
public:
    StructVectorFinalModel() : _model(this->buffer(), 8) {}
    StructVectorFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructVector>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructVector& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructVector& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructVector> _model;
};

} // namespace test

// Fast Binary Encoding ::test::StructList final model
template <>
class FinalModel<::test::StructList>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructList& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 131; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructList& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructList& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructList& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructList& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModelVector<uint8_t> f1;
    FinalModelVector<std::optional<uint8_t>> f2;
    FinalModelVector<FBE::buffer_t> f3;
    FinalModelVector<std::optional<FBE::buffer_t>> f4;
    FinalModelVector<::test::EnumSimple> f5;
    FinalModelVector<std::optional<::test::EnumSimple>> f6;
    FinalModelVector<::test::FlagsSimple> f7;
    FinalModelVector<std::optional<::test::FlagsSimple>> f8;
    FinalModelVector<::test::StructSimple> f9;
    FinalModelVector<std::optional<::test::StructSimple>> f10;
};

namespace test {

// Fast Binary Encoding StructList final model
class StructListFinalModel : public FBE::Model
{
public:
    StructListFinalModel() : _model(this->buffer(), 8) {}
    StructListFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructList>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructList& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructList& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructList> _model;
};

} // namespace test

// Fast Binary Encoding ::test::StructSet final model
template <>
class FinalModel<::test::StructSet>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructSet& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 132; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructSet& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructSet& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructSet& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructSet& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModelVector<uint8_t> f1;
    FinalModelVector<::test::EnumSimple> f2;
    FinalModelVector<::test::FlagsSimple> f3;
    FinalModelVector<::test::StructSimple> f4;
};

namespace test {

// Fast Binary Encoding StructSet final model
class StructSetFinalModel : public FBE::Model
{
public:
    StructSetFinalModel() : _model(this->buffer(), 8) {}
    StructSetFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructSet>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructSet& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructSet& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructSet> _model;
};

} // namespace test

// Fast Binary Encoding ::test::StructMap final model
template <>
class FinalModel<::test::StructMap>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructMap& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 140; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructMap& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructMap& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructMap& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructMap& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModelMap<int32_t, uint8_t> f1;
    FinalModelMap<int32_t, std::optional<uint8_t>> f2;
    FinalModelMap<int32_t, FBE::buffer_t> f3;
    FinalModelMap<int32_t, std::optional<FBE::buffer_t>> f4;
    FinalModelMap<int32_t, ::test::EnumSimple> f5;
    FinalModelMap<int32_t, std::optional<::test::EnumSimple>> f6;
    FinalModelMap<int32_t, ::test::FlagsSimple> f7;
    FinalModelMap<int32_t, std::optional<::test::FlagsSimple>> f8;
    FinalModelMap<int32_t, ::test::StructSimple> f9;
    FinalModelMap<int32_t, std::optional<::test::StructSimple>> f10;
};

namespace test {

// Fast Binary Encoding StructMap final model
class StructMapFinalModel : public FBE::Model
{
public:
    StructMapFinalModel() : _model(this->buffer(), 8) {}
    StructMapFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructMap>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructMap& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructMap& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructMap> _model;
};

} // namespace test

// Fast Binary Encoding ::test::StructHash final model
template <>
class FinalModel<::test::StructHash>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructHash& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 141; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructHash& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructHash& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructHash& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructHash& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModelMap<std::string, uint8_t> f1;
    FinalModelMap<std::string, std::optional<uint8_t>> f2;
    FinalModelMap<std::string, FBE::buffer_t> f3;
    FinalModelMap<std::string, std::optional<FBE::buffer_t>> f4;
    FinalModelMap<std::string, ::test::EnumSimple> f5;
    FinalModelMap<std::string, std::optional<::test::EnumSimple>> f6;
    FinalModelMap<std::string, ::test::FlagsSimple> f7;
    FinalModelMap<std::string, std::optional<::test::FlagsSimple>> f8;
    FinalModelMap<std::string, ::test::StructSimple> f9;
    FinalModelMap<std::string, std::optional<::test::StructSimple>> f10;
};

namespace test {

// Fast Binary Encoding StructHash final model
class StructHashFinalModel : public FBE::Model
{
public:
    StructHashFinalModel() : _model(this->buffer(), 8) {}
    StructHashFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructHash>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructHash& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructHash& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructHash> _model;
};

} // namespace test

// Fast Binary Encoding ::test::StructHashEx final model
template <>
class FinalModel<::test::StructHashEx>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructHashEx& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 142; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructHashEx& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructHashEx& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructHashEx& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructHashEx& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModelMap<::test::StructSimple, ::test::StructNested> f1;
    FinalModelMap<::test::StructSimple, std::optional<::test::StructNested>> f2;
};

namespace test {

// Fast Binary Encoding StructHashEx final model
class StructHashExFinalModel : public FBE::Model
{
public:
    StructHashExFinalModel() : _model(this->buffer(), 8) {}
    StructHashExFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructHashEx>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructHashEx& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructHashEx& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructHashEx> _model;
};

} // namespace test

// Fast Binary Encoding ::test::StructEmpty final model
template <>
class FinalModel<::test::StructEmpty>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::test::StructEmpty& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 143; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::test::StructEmpty& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::test::StructEmpty& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::test::StructEmpty& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::test::StructEmpty& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
};

namespace test {

// Fast Binary Encoding StructEmpty final model
class StructEmptyFinalModel : public FBE::Model
{
public:
    StructEmptyFinalModel() : _model(this->buffer(), 8) {}
    StructEmptyFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::test::StructEmpty>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::test::StructEmpty& value);
    // Deserialize the struct value
    size_t deserialize(::test::StructEmpty& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::test::StructEmpty> _model;
};

} // namespace test

} // namespace FBE

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
