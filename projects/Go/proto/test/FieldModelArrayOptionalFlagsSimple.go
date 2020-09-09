// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// Version: 1.4.0.0

package test

import "errors"
import "../fbe"
import "../proto"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version
var _ = proto.Version

// Fast Binary Encoding OptionalFlagsSimple array field model
type FieldModelArrayOptionalFlagsSimple struct {
    // Field model buffer
    buffer *fbe.Buffer
    // Field model buffer offset
    offset int

    // Array item field model
    model *FieldModelOptionalFlagsSimple
    // Array size
    size int
}

// Create a new OptionalFlagsSimple array field model
func NewFieldModelArrayOptionalFlagsSimple(buffer *fbe.Buffer, offset int, size int) *FieldModelArrayOptionalFlagsSimple {
    fbeResult := FieldModelArrayOptionalFlagsSimple{buffer: buffer, offset: offset}
    fbeResult.model = NewFieldModelOptionalFlagsSimple(buffer, offset)
    fbeResult.size = size
    return &fbeResult
}

// Get the field size
func (fm *FieldModelArrayOptionalFlagsSimple) FBESize() int { return fm.size * fm.model.FBESize() }

// Get the field extra size
func (fm *FieldModelArrayOptionalFlagsSimple) FBEExtra() int { return 0 }

// Get the field offset
func (fm *FieldModelArrayOptionalFlagsSimple) FBEOffset() int { return fm.offset }
// Set the field offset
func (fm *FieldModelArrayOptionalFlagsSimple) SetFBEOffset(value int) { fm.offset = value }

// Shift the current field offset
func (fm *FieldModelArrayOptionalFlagsSimple) FBEShift(size int) { fm.offset += size }
// Unshift the current field offset
func (fm *FieldModelArrayOptionalFlagsSimple) FBEUnshift(size int) { fm.offset -= size }

// Get the array offset
func (fm *FieldModelArrayOptionalFlagsSimple) Offset() int { return 0 }
// Get the array size
func (fm *FieldModelArrayOptionalFlagsSimple) Size() int { return fm.size }

// Array index operator
func (fm *FieldModelArrayOptionalFlagsSimple) GetItem(index int) (*FieldModelOptionalFlagsSimple, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return nil, errors.New("model is broken")
    }
    if index >= fm.size {
        return nil, errors.New("index is out of bounds")
    }

    fm.model.SetFBEOffset(fm.FBEOffset())
    fm.model.FBEShift(index * fm.model.FBESize())
    return fm.model, nil
}

// Check if the array is valid
func (fm *FieldModelArrayOptionalFlagsSimple) Verify() bool {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return false
    }

    fm.model.SetFBEOffset(fm.FBEOffset())
    for i := 0; i < fm.size; i++ {
        if !fm.model.Verify() {
            return false
        }
        fm.model.FBEShift(fm.model.FBESize())
    }

    return true
}

// Get the array
func (fm *FieldModelArrayOptionalFlagsSimple) Get() ([]*FlagsSimple, error) {
    values := make([]*FlagsSimple, 0, fm.size)

    fbeModel, err := fm.GetItem(0)
    if err != nil {
        return values, err
    }

    for i := 0; i < fm.size; i++ {
        value, err := fbeModel.Get()
        if err != nil {
            return values, err
        }
        values = append(values, value)
        fbeModel.FBEShift(fbeModel.FBESize())
    }

    return values, nil
}

// Set the array
func (fm *FieldModelArrayOptionalFlagsSimple) Set(values []*FlagsSimple) error {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return errors.New("model is broken")
    }

    fbeModel, err := fm.GetItem(0)
    if err != nil {
        return err
    }

    size := len(values)
    if size > fm.size {
        size = fm.size
    }

    for i := 0; i < size; i++ {
        err := fbeModel.Set(values[i])
        if err != nil {
            return err
        }
        fbeModel.FBEShift(fbeModel.FBESize())
    }

    return nil
}
