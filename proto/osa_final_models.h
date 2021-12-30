// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
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

#include "fbe_final_models.h"

#include "osa.h"

namespace FBE {

// Fast Binary Encoding ::osa::Sex final model
template <>
class FinalModel<::osa::Sex> : public FinalModelBase<::osa::Sex, int32_t>
{
public:
    using FinalModelBase<::osa::Sex, int32_t>::FinalModelBase;
};

// Fast Binary Encoding ::osa::MyFLags final model
template <>
class FinalModel<::osa::MyFLags> : public FinalModelBase<::osa::MyFLags, int32_t>
{
public:
    using FinalModelBase<::osa::MyFLags, int32_t>::FinalModelBase;
};

// Fast Binary Encoding ::osa::Extra final model
template <>
class FinalModel<::osa::Extra>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::osa::Extra& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 1; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::osa::Extra& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::osa::Extra& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::osa::Extra& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::osa::Extra& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<std::string> name;
    FinalModel<std::string> detail;
    FinalModel<::osa::Sex> sex;
    FinalModel<::osa::MyFLags> flag;
};

namespace osa {

// Fast Binary Encoding Extra final model
class ExtraFinalModel : public FBE::Model
{
public:
    ExtraFinalModel() : _model(this->buffer(), 8) {}
    ExtraFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::osa::Extra>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::osa::Extra& value);
    // Deserialize the struct value
    size_t deserialize(::osa::Extra& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::osa::Extra> _model;
};

} // namespace osa

// Fast Binary Encoding ::osa::Simple final model
template <>
class FinalModel<::osa::Simple>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::osa::Simple& fbe_value) const noexcept;
    // Get the final offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Set the final offset
    size_t fbe_offset(size_t offset) const noexcept { return _offset = offset; }
    // Get the final type
    static constexpr size_t fbe_type() noexcept { return 2; }

    // Shift the current final offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current final offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    size_t verify() const noexcept;
    // Check if the struct fields are valid
    size_t verify_fields() const noexcept;

    // Get the struct value
    size_t get(::osa::Simple& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::osa::Simple& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::osa::Simple& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::osa::Simple& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<std::string> name;
    FinalModel<int32_t> depth;
    FinalModelArray<::osa::Extra, 1> sa;
    FinalModel<::osa::Sex> sex;
};

namespace osa {

// Fast Binary Encoding Simple final model
class SimpleFinalModel : public FBE::Model
{
public:
    SimpleFinalModel() : _model(this->buffer(), 8) {}
    SimpleFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::osa::Simple>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::osa::Simple& value);
    // Deserialize the struct value
    size_t deserialize(::osa::Simple& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::osa::Simple> _model;
};

} // namespace osa

} // namespace FBE
