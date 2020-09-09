// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: enums.fbe
// Version: 1.4.0.0

package enums

import "errors"
import "../fbe"

// Fast Binary Encoding EnumUInt16 field model
type FieldModelEnumUInt16 struct {
    // Field model buffer
    buffer *fbe.Buffer
    // Field model buffer offset
    offset int
}

// Create a new EnumUInt16 field model
func NewFieldModelEnumUInt16(buffer *fbe.Buffer, offset int) *FieldModelEnumUInt16 {
    return &FieldModelEnumUInt16{buffer: buffer, offset: offset}
}

// Get the field size
func (fm *FieldModelEnumUInt16) FBESize() int { return 2 }
// Get the field extra size
func (fm *FieldModelEnumUInt16) FBEExtra() int { return 0 }

// Get the field offset
func (fm *FieldModelEnumUInt16) FBEOffset() int { return fm.offset }
// Set the field offset
func (fm *FieldModelEnumUInt16) SetFBEOffset(value int) { fm.offset = value }

// Shift the current field offset
func (fm *FieldModelEnumUInt16) FBEShift(size int) { fm.offset += size }
// Unshift the current field offset
func (fm *FieldModelEnumUInt16) FBEUnshift(size int) { fm.offset -= size }

// Check if the value is valid
func (fm *FieldModelEnumUInt16) Verify() bool { return true }

// Get the value
func (fm *FieldModelEnumUInt16) Get() (*EnumUInt16, error) {
    var value EnumUInt16
    return &value, fm.GetValueDefault(&value, EnumUInt16(0))
}

// Get the value with provided default value
func (fm *FieldModelEnumUInt16) GetDefault(defaults EnumUInt16) (*EnumUInt16, error) {
    var value EnumUInt16
    err := fm.GetValueDefault(&value, defaults)
    return &value, err
}

// Get the value by the given pointer
func (fm *FieldModelEnumUInt16) GetValue(value *EnumUInt16) error {
    return fm.GetValueDefault(value, EnumUInt16(0))
}

// Get the value by the given pointer with provided default value
func (fm *FieldModelEnumUInt16) GetValueDefault(value *EnumUInt16, defaults EnumUInt16) error {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        *value = defaults
        return nil
    }

    *value = EnumUInt16(fbe.ReadUInt16(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    return nil
}

// Set the value by the given pointer
func (fm *FieldModelEnumUInt16) Set(value *EnumUInt16) error {
    return fm.SetValue(*value)
}

// Set the value
func (fm *FieldModelEnumUInt16) SetValue(value EnumUInt16) error {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return errors.New("model is broken")
    }

    fbe.WriteUInt16(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset(), uint16(value))
    return nil
}
