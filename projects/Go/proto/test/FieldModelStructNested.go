// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

package test

import "errors"
import "../fbe"
import "../proto"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version
var _ = proto.Version

// Fast Binary Encoding StructNested field model
type FieldModelStructNested struct {
    // Field model buffer
    buffer *fbe.Buffer
    // Field model buffer offset
    offset int

    *FieldModelStructOptional
    F1000 *FieldModelEnumSimple
    F1001 *FieldModelOptionalEnumSimple
    F1002 *FieldModelEnumTyped
    F1003 *FieldModelOptionalEnumTyped
    F1004 *FieldModelFlagsSimple
    F1005 *FieldModelOptionalFlagsSimple
    F1006 *FieldModelFlagsTyped
    F1007 *FieldModelOptionalFlagsTyped
    F1008 *FieldModelStructSimple
    F1009 *FieldModelOptionalStructSimple
    F1010 *FieldModelStructOptional
    F1011 *FieldModelOptionalStructOptional
}

// Create a new StructNested field model
func NewFieldModelStructNested(buffer *fbe.Buffer, offset int) *FieldModelStructNested {
    fbeResult := FieldModelStructNested{buffer: buffer, offset: offset}
    fbeResult.FieldModelStructOptional = NewFieldModelStructOptional(buffer, 4 + 4)
    fbeResult.F1000 = NewFieldModelEnumSimple(buffer, fbeResult.FieldModelStructOptional.FBEOffset() + fbeResult.FieldModelStructOptional.FBEBody() - 4 - 4)
    fbeResult.F1001 = NewFieldModelOptionalEnumSimple(buffer, fbeResult.F1000.FBEOffset() + fbeResult.F1000.FBESize())
    fbeResult.F1002 = NewFieldModelEnumTyped(buffer, fbeResult.F1001.FBEOffset() + fbeResult.F1001.FBESize())
    fbeResult.F1003 = NewFieldModelOptionalEnumTyped(buffer, fbeResult.F1002.FBEOffset() + fbeResult.F1002.FBESize())
    fbeResult.F1004 = NewFieldModelFlagsSimple(buffer, fbeResult.F1003.FBEOffset() + fbeResult.F1003.FBESize())
    fbeResult.F1005 = NewFieldModelOptionalFlagsSimple(buffer, fbeResult.F1004.FBEOffset() + fbeResult.F1004.FBESize())
    fbeResult.F1006 = NewFieldModelFlagsTyped(buffer, fbeResult.F1005.FBEOffset() + fbeResult.F1005.FBESize())
    fbeResult.F1007 = NewFieldModelOptionalFlagsTyped(buffer, fbeResult.F1006.FBEOffset() + fbeResult.F1006.FBESize())
    fbeResult.F1008 = NewFieldModelStructSimple(buffer, fbeResult.F1007.FBEOffset() + fbeResult.F1007.FBESize())
    fbeResult.F1009 = NewFieldModelOptionalStructSimple(buffer, fbeResult.F1008.FBEOffset() + fbeResult.F1008.FBESize())
    fbeResult.F1010 = NewFieldModelStructOptional(buffer, fbeResult.F1009.FBEOffset() + fbeResult.F1009.FBESize())
    fbeResult.F1011 = NewFieldModelOptionalStructOptional(buffer, fbeResult.F1010.FBEOffset() + fbeResult.F1010.FBESize())
    return &fbeResult
}

// Get the field size
func (fm *FieldModelStructNested) FBESize() int { return 4 }

// Get the field body size
func (fm *FieldModelStructNested) FBEBody() int {
    fbeResult := 4 + 4 +
        fm.FieldModelStructOptional.FBEBody() - 4 - 4 +
        fm.F1000.FBESize() +
        fm.F1001.FBESize() +
        fm.F1002.FBESize() +
        fm.F1003.FBESize() +
        fm.F1004.FBESize() +
        fm.F1005.FBESize() +
        fm.F1006.FBESize() +
        fm.F1007.FBESize() +
        fm.F1008.FBESize() +
        fm.F1009.FBESize() +
        fm.F1010.FBESize() +
        fm.F1011.FBESize() +
        0
    return fbeResult
}

// Get the field extra size
func (fm *FieldModelStructNested) FBEExtra() int {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0
    }

    fbeStructOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeStructOffset == 0) || ((fm.buffer.Offset() + fbeStructOffset + 4) > fm.buffer.Size()) {
        return 0
    }

    fm.buffer.Shift(fbeStructOffset)

    fbeResult := fm.FBEBody() +
        fm.FieldModelStructOptional.FBEExtra() + 
        fm.F1000.FBEExtra() +
        fm.F1001.FBEExtra() +
        fm.F1002.FBEExtra() +
        fm.F1003.FBEExtra() +
        fm.F1004.FBEExtra() +
        fm.F1005.FBEExtra() +
        fm.F1006.FBEExtra() +
        fm.F1007.FBEExtra() +
        fm.F1008.FBEExtra() +
        fm.F1009.FBEExtra() +
        fm.F1010.FBEExtra() +
        fm.F1011.FBEExtra() +
        0

    fm.buffer.Unshift(fbeStructOffset)

    return fbeResult
}

// Get the field type
func (fm *FieldModelStructNested) FBEType() int { return 112 }

// Get the field offset
func (fm *FieldModelStructNested) FBEOffset() int { return fm.offset }
// Set the field offset
func (fm *FieldModelStructNested) SetFBEOffset(value int) { fm.offset = value }

// Shift the current field offset
func (fm *FieldModelStructNested) FBEShift(size int) { fm.offset += size }
// Unshift the current field offset
func (fm *FieldModelStructNested) FBEUnshift(size int) { fm.offset -= size }

// Check if the struct value is valid
func (fm *FieldModelStructNested) Verify() bool { return fm.VerifyType(true) }

// Check if the struct value and its type are valid
func (fm *FieldModelStructNested) VerifyType(fbeVerifyType bool) bool {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return true
    }

    fbeStructOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeStructOffset == 0) || ((fm.buffer.Offset() + fbeStructOffset + 4 + 4) > fm.buffer.Size()) {
        return false
    }

    fbeStructSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeStructOffset))
    if fbeStructSize < (4 + 4) {
        return false
    }

    fbeStructType := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeStructOffset + 4))
    if fbeVerifyType && (fbeStructType != fm.FBEType()) {
        return false
    }

    fm.buffer.Shift(fbeStructOffset)
    fbeResult := fm.VerifyFields(fbeStructSize)
    fm.buffer.Unshift(fbeStructOffset)
    return fbeResult
}

// // Check if the struct value fields are valid
func (fm *FieldModelStructNested) VerifyFields(fbeStructSize int) bool {
    fbeCurrentSize := 4 + 4

    if (fbeCurrentSize + fm.FieldModelStructOptional.FBEBody() - 4 - 4) > fbeStructSize {
        return true
    }
    if !fm.FieldModelStructOptional.VerifyFields(fbeStructSize) {
        return false
    }
    fbeCurrentSize += fm.FieldModelStructOptional.FBEBody() - 4 - 4

    if (fbeCurrentSize + fm.F1000.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1000.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1000.FBESize()

    if (fbeCurrentSize + fm.F1001.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1001.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1001.FBESize()

    if (fbeCurrentSize + fm.F1002.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1002.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1002.FBESize()

    if (fbeCurrentSize + fm.F1003.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1003.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1003.FBESize()

    if (fbeCurrentSize + fm.F1004.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1004.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1004.FBESize()

    if (fbeCurrentSize + fm.F1005.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1005.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1005.FBESize()

    if (fbeCurrentSize + fm.F1006.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1006.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1006.FBESize()

    if (fbeCurrentSize + fm.F1007.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1007.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1007.FBESize()

    if (fbeCurrentSize + fm.F1008.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1008.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1008.FBESize()

    if (fbeCurrentSize + fm.F1009.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1009.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1009.FBESize()

    if (fbeCurrentSize + fm.F1010.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1010.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1010.FBESize()

    if (fbeCurrentSize + fm.F1011.FBESize()) > fbeStructSize {
        return true
    }
    if !fm.F1011.Verify() {
        return false
    }
    fbeCurrentSize += fm.F1011.FBESize()

    return true
}

// Get the struct value (begin phase)
func (fm *FieldModelStructNested) GetBegin() (int, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0, nil
    }

    fbeStructOffset := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()))
    if (fbeStructOffset == 0) || ((fm.buffer.Offset() + fbeStructOffset + 4 + 4) > fm.buffer.Size()) {
        return 0, errors.New("model is broken")
    }

    fbeStructSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeStructOffset))
    if fbeStructSize < (4 + 4) {
        return 0, errors.New("model is broken")
    }

    fm.buffer.Shift(fbeStructOffset)
    return fbeStructOffset, nil
}

// Get the struct value (end phase)
func (fm *FieldModelStructNested) GetEnd(fbeBegin int) {
    fm.buffer.Unshift(fbeBegin)
}

// Get the struct value
func (fm *FieldModelStructNested) Get() (*StructNested, error) {
    fbeResult := NewStructNested()
    return fbeResult, fm.GetValue(fbeResult)
}

// Get the struct value by the given pointer
func (fm *FieldModelStructNested) GetValue(fbeValue *StructNested) error {
    fbeBegin, err := fm.GetBegin()
    if fbeBegin == 0 {
        return err
    }

    fbeStructSize := int(fbe.ReadUInt32(fm.buffer.Data(), fm.buffer.Offset()))
    fm.GetFields(fbeValue, fbeStructSize)
    fm.GetEnd(fbeBegin)
    return nil
}

// Get the struct fields values
func (fm *FieldModelStructNested) GetFields(fbeValue *StructNested, fbeStructSize int) {
    fbeCurrentSize := 4 + 4

    if (fbeCurrentSize + fm.FieldModelStructOptional.FBEBody() - 4 - 4) <= fbeStructSize {
        fm.FieldModelStructOptional.GetFields(fbeValue.StructOptional, fbeStructSize)
    }
    fbeCurrentSize += fm.FieldModelStructOptional.FBEBody() - 4 - 4

    if (fbeCurrentSize + fm.F1000.FBESize()) <= fbeStructSize {
        _ = fm.F1000.GetValue(&fbeValue.F1000)
    } else {
        fbeValue.F1000 = *NewEnumSimple()
    }
    fbeCurrentSize += fm.F1000.FBESize()

    if (fbeCurrentSize + fm.F1001.FBESize()) <= fbeStructSize {
        fbeValue.F1001, _ = fm.F1001.Get()
    } else {
        fbeValue.F1001 = nil
    }
    fbeCurrentSize += fm.F1001.FBESize()

    if (fbeCurrentSize + fm.F1002.FBESize()) <= fbeStructSize {
        _ = fm.F1002.GetValueDefault(&fbeValue.F1002, EnumTyped_ENUM_VALUE_2)
    } else {
        fbeValue.F1002 = EnumTyped_ENUM_VALUE_2
    }
    fbeCurrentSize += fm.F1002.FBESize()

    if (fbeCurrentSize + fm.F1003.FBESize()) <= fbeStructSize {
        fbeValue.F1003, _ = fm.F1003.Get()
    } else {
        fbeValue.F1003 = nil
    }
    fbeCurrentSize += fm.F1003.FBESize()

    if (fbeCurrentSize + fm.F1004.FBESize()) <= fbeStructSize {
        _ = fm.F1004.GetValue(&fbeValue.F1004)
    } else {
        fbeValue.F1004 = *NewFlagsSimple()
    }
    fbeCurrentSize += fm.F1004.FBESize()

    if (fbeCurrentSize + fm.F1005.FBESize()) <= fbeStructSize {
        fbeValue.F1005, _ = fm.F1005.Get()
    } else {
        fbeValue.F1005 = nil
    }
    fbeCurrentSize += fm.F1005.FBESize()

    if (fbeCurrentSize + fm.F1006.FBESize()) <= fbeStructSize {
        _ = fm.F1006.GetValueDefault(&fbeValue.F1006, FlagsTyped_FLAG_VALUE_2 | FlagsTyped_FLAG_VALUE_4 | FlagsTyped_FLAG_VALUE_6)
    } else {
        fbeValue.F1006 = FlagsTyped_FLAG_VALUE_2 | FlagsTyped_FLAG_VALUE_4 | FlagsTyped_FLAG_VALUE_6
    }
    fbeCurrentSize += fm.F1006.FBESize()

    if (fbeCurrentSize + fm.F1007.FBESize()) <= fbeStructSize {
        fbeValue.F1007, _ = fm.F1007.Get()
    } else {
        fbeValue.F1007 = nil
    }
    fbeCurrentSize += fm.F1007.FBESize()

    if (fbeCurrentSize + fm.F1008.FBESize()) <= fbeStructSize {
        _ = fm.F1008.GetValue(&fbeValue.F1008)
    } else {
        fbeValue.F1008 = *NewStructSimple()
    }
    fbeCurrentSize += fm.F1008.FBESize()

    if (fbeCurrentSize + fm.F1009.FBESize()) <= fbeStructSize {
        fbeValue.F1009, _ = fm.F1009.Get()
    } else {
        fbeValue.F1009 = nil
    }
    fbeCurrentSize += fm.F1009.FBESize()

    if (fbeCurrentSize + fm.F1010.FBESize()) <= fbeStructSize {
        _ = fm.F1010.GetValue(&fbeValue.F1010)
    } else {
        fbeValue.F1010 = *NewStructOptional()
    }
    fbeCurrentSize += fm.F1010.FBESize()

    if (fbeCurrentSize + fm.F1011.FBESize()) <= fbeStructSize {
        fbeValue.F1011, _ = fm.F1011.Get()
    } else {
        fbeValue.F1011 = nil
    }
    fbeCurrentSize += fm.F1011.FBESize()
}

// Set the struct value (begin phase)
func (fm *FieldModelStructNested) SetBegin() (int, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0, errors.New("model is broken")
    }

    fbeStructSize := fm.FBEBody()
    fbeStructOffset := fm.buffer.Allocate(fbeStructSize) - fm.buffer.Offset()
    if (fbeStructOffset <= 0) || ((fm.buffer.Offset() + fbeStructOffset + fbeStructSize) > fm.buffer.Size()) {
        return 0, errors.New("model is broken")
    }

    fbe.WriteUInt32(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset(), uint32(fbeStructOffset))
    fbe.WriteUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeStructOffset, uint32(fbeStructSize))
    fbe.WriteUInt32(fm.buffer.Data(), fm.buffer.Offset() + fbeStructOffset + 4, uint32(fm.FBEType()))

    fm.buffer.Shift(fbeStructOffset)
    return fbeStructOffset, nil
}

// Set the struct value (end phase)
func (fm *FieldModelStructNested) SetEnd(fbeBegin int) {
    fm.buffer.Unshift(fbeBegin)
}

// Set the struct value
func (fm *FieldModelStructNested) Set(fbeValue *StructNested) error {
    fbeBegin, err := fm.SetBegin()
    if fbeBegin == 0 {
        return err
    }

    err = fm.SetFields(fbeValue)
    fm.SetEnd(fbeBegin)
    return err
}

// Set the struct fields values
func (fm *FieldModelStructNested) SetFields(fbeValue *StructNested) error {
    var err error = nil

    if err = fm.FieldModelStructOptional.SetFields(fbeValue.StructOptional); err != nil {
        return err
    }
    if err = fm.F1000.Set(&fbeValue.F1000); err != nil {
        return err
    }
    if err = fm.F1001.Set(fbeValue.F1001); err != nil {
        return err
    }
    if err = fm.F1002.Set(&fbeValue.F1002); err != nil {
        return err
    }
    if err = fm.F1003.Set(fbeValue.F1003); err != nil {
        return err
    }
    if err = fm.F1004.Set(&fbeValue.F1004); err != nil {
        return err
    }
    if err = fm.F1005.Set(fbeValue.F1005); err != nil {
        return err
    }
    if err = fm.F1006.Set(&fbeValue.F1006); err != nil {
        return err
    }
    if err = fm.F1007.Set(fbeValue.F1007); err != nil {
        return err
    }
    if err = fm.F1008.Set(&fbeValue.F1008); err != nil {
        return err
    }
    if err = fm.F1009.Set(fbeValue.F1009); err != nil {
        return err
    }
    if err = fm.F1010.Set(&fbeValue.F1010); err != nil {
        return err
    }
    if err = fm.F1011.Set(fbeValue.F1011); err != nil {
        return err
    }
    return err
}
