// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// Version: 1.6.0.0

package proto

import "errors"
import "../fbe"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version

// Fast Binary Encoding AccountMessage final model
type FinalModelAccountMessage struct {
    buffer *fbe.Buffer  // Final model buffer
    offset int          // Final model buffer offset

    Body *FinalModelAccount
}

// Create a new AccountMessage final model
func NewFinalModelAccountMessage(buffer *fbe.Buffer, offset int) *FinalModelAccountMessage {
    fbeResult := FinalModelAccountMessage{buffer: buffer, offset: offset}
    fbeResult.Body = NewFinalModelAccount(buffer, 0)
    return &fbeResult
}

// Get the allocation size
func (fm *FinalModelAccountMessage) FBEAllocationSize(fbeValue *AccountMessage) int {
    fbeResult := 0 +
        fm.Body.FBEAllocationSize(&fbeValue.Body) +
        0
    return fbeResult
}

// Get the final size
func (fm *FinalModelAccountMessage) FBESize() int { return 0 }

// Get the final extra size
func (fm *FinalModelAccountMessage) FBEExtra() int { return 0 }

// Get the final type
func (fm *FinalModelAccountMessage) FBEType() int { return 3 }

// Get the final offset
func (fm *FinalModelAccountMessage) FBEOffset() int { return fm.offset }
// Set the final offset
func (fm *FinalModelAccountMessage) SetFBEOffset(value int) { fm.offset = value }

// Shift the current final offset
func (fm *FinalModelAccountMessage) FBEShift(size int) { fm.offset += size }
// Unshift the current final offset
func (fm *FinalModelAccountMessage) FBEUnshift(size int) { fm.offset -= size }

// Check if the struct value is valid
func (fm *FinalModelAccountMessage) Verify() int {
    fm.buffer.Shift(fm.FBEOffset())
    fbeResult := fm.VerifyFields()
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeResult
}

// Check if the struct fields are valid
func (fm *FinalModelAccountMessage) VerifyFields() int {
    fbeCurrentOffset := 0
    fbeFieldSize := 0


    fm.Body.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.Body.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    return fbeCurrentOffset
}

// Get the struct value
func (fm *FinalModelAccountMessage) Get() (*AccountMessage, int, error) {
    fbeResult := NewAccountMessage()
    fbeSize, err := fm.GetValue(fbeResult)
    return fbeResult, fbeSize, err
}

// Get the struct value by the given pointer
func (fm *FinalModelAccountMessage) GetValue(fbeValue *AccountMessage) (int, error) {
    fm.buffer.Shift(fm.FBEOffset())
    fbeSize, err := fm.GetFields(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeSize, err
}

// Get the struct fields values
func (fm *FinalModelAccountMessage) GetFields(fbeValue *AccountMessage) (int, error) {
    var err error = nil
    fbeCurrentSize := 0
    fbeCurrentOffset := 0
    fbeFieldSize := 0

    fm.Body.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.Body.GetValue(&fbeValue.Body); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    return fbeCurrentSize, err
}

// Set the struct value
func (fm *FinalModelAccountMessage) Set(fbeValue *AccountMessage) (int, error) {
    fm.buffer.Shift(fm.FBEOffset())
    fbeResult, err := fm.SetFields(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeResult, err
}

// Set the struct fields values
func (fm *FinalModelAccountMessage) SetFields(fbeValue *AccountMessage) (int, error) {
    var err error = nil
    fbeCurrentSize := 0
    fbeCurrentOffset := 0
    fbeFieldSize := 0

    fm.Body.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.Body.Set(&fbeValue.Body); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    return fbeCurrentSize, err
}