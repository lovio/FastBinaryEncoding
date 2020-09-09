// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// Version: 1.4.0.0

package proto

import "errors"
import "../fbe"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version

// Fast Binary Encoding BalanceMessage final model
type FinalModelBalanceMessage struct {
    buffer *fbe.Buffer  // Final model buffer
    offset int          // Final model buffer offset

    Body *FinalModelBalance
}

// Create a new BalanceMessage final model
func NewFinalModelBalanceMessage(buffer *fbe.Buffer, offset int) *FinalModelBalanceMessage {
    fbeResult := FinalModelBalanceMessage{buffer: buffer, offset: offset}
    fbeResult.Body = NewFinalModelBalance(buffer, 0)
    return &fbeResult
}

// Get the allocation size
func (fm *FinalModelBalanceMessage) FBEAllocationSize(fbeValue *BalanceMessage) int {
    fbeResult := 0 +
        fm.Body.FBEAllocationSize(&fbeValue.Body) +
        0
    return fbeResult
}

// Get the final size
func (fm *FinalModelBalanceMessage) FBESize() int { return 0 }

// Get the final extra size
func (fm *FinalModelBalanceMessage) FBEExtra() int { return 0 }

// Get the final type
func (fm *FinalModelBalanceMessage) FBEType() int { return 2 }

// Get the final offset
func (fm *FinalModelBalanceMessage) FBEOffset() int { return fm.offset }
// Set the final offset
func (fm *FinalModelBalanceMessage) SetFBEOffset(value int) { fm.offset = value }

// Shift the current final offset
func (fm *FinalModelBalanceMessage) FBEShift(size int) { fm.offset += size }
// Unshift the current final offset
func (fm *FinalModelBalanceMessage) FBEUnshift(size int) { fm.offset -= size }

// Check if the struct value is valid
func (fm *FinalModelBalanceMessage) Verify() int {
    fm.buffer.Shift(fm.FBEOffset())
    fbeResult := fm.VerifyFields()
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeResult
}

// Check if the struct fields are valid
func (fm *FinalModelBalanceMessage) VerifyFields() int {
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
func (fm *FinalModelBalanceMessage) Get() (*BalanceMessage, int, error) {
    fbeResult := NewBalanceMessage()
    fbeSize, err := fm.GetValue(fbeResult)
    return fbeResult, fbeSize, err
}

// Get the struct value by the given pointer
func (fm *FinalModelBalanceMessage) GetValue(fbeValue *BalanceMessage) (int, error) {
    fm.buffer.Shift(fm.FBEOffset())
    fbeSize, err := fm.GetFields(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeSize, err
}

// Get the struct fields values
func (fm *FinalModelBalanceMessage) GetFields(fbeValue *BalanceMessage) (int, error) {
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
func (fm *FinalModelBalanceMessage) Set(fbeValue *BalanceMessage) (int, error) {
    fm.buffer.Shift(fm.FBEOffset())
    fbeResult, err := fm.SetFields(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeResult, err
}

// Set the struct fields values
func (fm *FinalModelBalanceMessage) SetFields(fbeValue *BalanceMessage) (int, error) {
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
