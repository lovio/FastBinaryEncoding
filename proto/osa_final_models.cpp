//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

#include "osa_final_models.h"

namespace FBE {

FinalModel<::osa::Extra>::FinalModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , name(buffer, 0)
    , detail(buffer, 0)
    , sex(buffer, 0)
    , flag(buffer, 0)
{}

size_t FinalModel<::osa::Extra>::fbe_allocation_size(const ::osa::Extra& fbe_value) const noexcept
{
    size_t fbe_result = 0
        + name.fbe_allocation_size(fbe_value.name)
        + detail.fbe_allocation_size(fbe_value.detail)
        + sex.fbe_allocation_size(fbe_value.sex)
        + flag.fbe_allocation_size(fbe_value.flag)
        ;
    return fbe_result;
}

size_t FinalModel<::osa::Extra>::verify() const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = verify_fields();
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::osa::Extra>::verify_fields() const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_field_size;

    name.fbe_offset(fbe_current_offset);
    fbe_field_size = name.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    detail.fbe_offset(fbe_current_offset);
    fbe_field_size = detail.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    sex.fbe_offset(fbe_current_offset);
    fbe_field_size = sex.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    flag.fbe_offset(fbe_current_offset);
    fbe_field_size = flag.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    return fbe_current_offset;
}

size_t FinalModel<::osa::Extra>::get(::osa::Extra& fbe_value) const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = get_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::osa::Extra>::get_fields([[maybe_unused]] ::osa::Extra& fbe_value) const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    name.fbe_offset(fbe_current_offset);
    fbe_field_size = name.get(fbe_value.name);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    detail.fbe_offset(fbe_current_offset);
    fbe_field_size = detail.get(fbe_value.detail);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    sex.fbe_offset(fbe_current_offset);
    fbe_field_size = sex.get(fbe_value.sex);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    flag.fbe_offset(fbe_current_offset);
    fbe_field_size = flag.get(fbe_value.flag);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

size_t FinalModel<::osa::Extra>::set(const ::osa::Extra& fbe_value) noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = set_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::osa::Extra>::set_fields([[maybe_unused]] const ::osa::Extra& fbe_value) noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    name.fbe_offset(fbe_current_offset);
    fbe_field_size = name.set(fbe_value.name);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    detail.fbe_offset(fbe_current_offset);
    fbe_field_size = detail.set(fbe_value.detail);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    sex.fbe_offset(fbe_current_offset);
    fbe_field_size = sex.set(fbe_value.sex);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    flag.fbe_offset(fbe_current_offset);
    fbe_field_size = flag.set(fbe_value.flag);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

namespace osa {

bool ExtraFinalModel::verify()
{
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return false;

    size_t fbe_struct_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8);
    size_t fbe_struct_type = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4);
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return false;

    return ((8 + _model.verify()) == fbe_struct_size);
}

size_t ExtraFinalModel::serialize(const ::osa::Extra& value)
{
    size_t fbe_initial_size = this->buffer().size();

    uint32_t fbe_struct_type = (uint32_t)fbe_type();
    uint32_t fbe_struct_size = (uint32_t)(8 + _model.fbe_allocation_size(value));
    uint32_t fbe_struct_offset = (uint32_t)(this->buffer().allocate(fbe_struct_size) - this->buffer().offset());
    assert(((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) > this->buffer().size())
        return 0;

    fbe_struct_size = (uint32_t)(8 + _model.set(value));
    this->buffer().resize(fbe_initial_size + fbe_struct_size);

    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8)) = fbe_struct_size;
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4)) = fbe_struct_type;

    return fbe_struct_size;
}

size_t ExtraFinalModel::deserialize(::osa::Extra& value) const noexcept
{
    assert(((this->buffer().offset() + _model.fbe_offset()) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return 0;

    size_t fbe_struct_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8);
    size_t fbe_struct_type = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4);
    assert(((fbe_struct_size > 0) && (fbe_struct_type == fbe_type())) && "Model is broken!");
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return 8;

    return 8 + _model.get(value);
}

} // namespace osa

FinalModel<::osa::Simple>::FinalModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , name(buffer, 0)
    , depth(buffer, 0)
    , sa(buffer, 0)
    , sex(buffer, 0)
{}

size_t FinalModel<::osa::Simple>::fbe_allocation_size(const ::osa::Simple& fbe_value) const noexcept
{
    size_t fbe_result = 0
        + name.fbe_allocation_size(fbe_value.name)
        + depth.fbe_allocation_size(fbe_value.depth)
        + sa.fbe_allocation_size(fbe_value.sa)
        + sex.fbe_allocation_size(fbe_value.sex)
        ;
    return fbe_result;
}

size_t FinalModel<::osa::Simple>::verify() const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = verify_fields();
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::osa::Simple>::verify_fields() const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_field_size;

    name.fbe_offset(fbe_current_offset);
    fbe_field_size = name.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    depth.fbe_offset(fbe_current_offset);
    fbe_field_size = depth.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    sa.fbe_offset(fbe_current_offset);
    fbe_field_size = sa.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    sex.fbe_offset(fbe_current_offset);
    fbe_field_size = sex.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    return fbe_current_offset;
}

size_t FinalModel<::osa::Simple>::get(::osa::Simple& fbe_value) const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = get_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::osa::Simple>::get_fields([[maybe_unused]] ::osa::Simple& fbe_value) const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    name.fbe_offset(fbe_current_offset);
    fbe_field_size = name.get(fbe_value.name);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    depth.fbe_offset(fbe_current_offset);
    fbe_field_size = depth.get(fbe_value.depth);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    sa.fbe_offset(fbe_current_offset);
    fbe_field_size = sa.get(fbe_value.sa);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    sex.fbe_offset(fbe_current_offset);
    fbe_field_size = sex.get(fbe_value.sex);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

size_t FinalModel<::osa::Simple>::set(const ::osa::Simple& fbe_value) noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = set_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::osa::Simple>::set_fields([[maybe_unused]] const ::osa::Simple& fbe_value) noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    name.fbe_offset(fbe_current_offset);
    fbe_field_size = name.set(fbe_value.name);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    depth.fbe_offset(fbe_current_offset);
    fbe_field_size = depth.set(fbe_value.depth);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    sa.fbe_offset(fbe_current_offset);
    fbe_field_size = sa.set(fbe_value.sa);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    sex.fbe_offset(fbe_current_offset);
    fbe_field_size = sex.set(fbe_value.sex);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

namespace osa {

bool SimpleFinalModel::verify()
{
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return false;

    size_t fbe_struct_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8);
    size_t fbe_struct_type = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4);
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return false;

    return ((8 + _model.verify()) == fbe_struct_size);
}

size_t SimpleFinalModel::serialize(const ::osa::Simple& value)
{
    size_t fbe_initial_size = this->buffer().size();

    uint32_t fbe_struct_type = (uint32_t)fbe_type();
    uint32_t fbe_struct_size = (uint32_t)(8 + _model.fbe_allocation_size(value));
    uint32_t fbe_struct_offset = (uint32_t)(this->buffer().allocate(fbe_struct_size) - this->buffer().offset());
    assert(((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) > this->buffer().size())
        return 0;

    fbe_struct_size = (uint32_t)(8 + _model.set(value));
    this->buffer().resize(fbe_initial_size + fbe_struct_size);

    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8)) = fbe_struct_size;
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4)) = fbe_struct_type;

    return fbe_struct_size;
}

size_t SimpleFinalModel::deserialize(::osa::Simple& value) const noexcept
{
    assert(((this->buffer().offset() + _model.fbe_offset()) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return 0;

    size_t fbe_struct_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8);
    size_t fbe_struct_type = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4);
    assert(((fbe_struct_size > 0) && (fbe_struct_type == fbe_type())) && "Model is broken!");
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return 8;

    return 8 + _model.get(value);
}

} // namespace osa

} // namespace FBE
