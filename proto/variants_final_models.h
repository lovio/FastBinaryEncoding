// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
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

#include "variants.h"

namespace FBE {

// Fast Binary Encoding ::variants::Simple final model
template <>
class FinalModel<::variants::Simple>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::variants::Simple& fbe_value) const noexcept;
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
    size_t get(::variants::Simple& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::variants::Simple& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::variants::Simple& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::variants::Simple& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<std::string> name;
};

namespace variants {

// Fast Binary Encoding Simple final model
class SimpleFinalModel : public FBE::Model
{
public:
    SimpleFinalModel() : _model(this->buffer(), 8) {}
    SimpleFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::variants::Simple>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::variants::Simple& value);
    // Deserialize the struct value
    size_t deserialize(::variants::Simple& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::variants::Simple> _model;
};

} // namespace variants

// Fast Binary Encoding ::variants::Value final model
template <>
class FinalModel<::variants::Value>
{
public:
    FinalModel(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the allocation size
    size_t fbe_allocation_size(const ::variants::Value& fbe_value) const noexcept;
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
    size_t get(::variants::Value& fbe_value) const noexcept;
    // Get the struct fields values
    size_t get_fields(::variants::Value& fbe_value) const noexcept;

    // Set the struct value
    size_t set(const ::variants::Value& fbe_value) noexcept;
    // Set the struct fields values
    size_t set_fields(const ::variants::Value& fbe_value) noexcept;

private:
    FBEBuffer& _buffer;
    mutable size_t _offset;

public:
    FinalModel<::variants::V> v;
};

namespace variants {

// Fast Binary Encoding Value final model
class ValueFinalModel : public FBE::Model
{
public:
    ValueFinalModel() : _model(this->buffer(), 8) {}
    ValueFinalModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), _model(this->buffer(), 8) {}

    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FinalModel<::variants::Value>::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Serialize the struct value
    size_t serialize(const ::variants::Value& value);
    // Deserialize the struct value
    size_t deserialize(::variants::Value& value) const noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { _model.fbe_shift(prev); }

private:
    FinalModel<::variants::Value> _model;
};

} // namespace variants

} // namespace FBE