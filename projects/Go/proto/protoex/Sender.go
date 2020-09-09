// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// Version: 1.4.0.0

package protoex

import "errors"
import "../fbe"
import "../proto"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version
var _ = proto.Version

// Fast Binary Encoding protoex sender
type Sender struct {
    *fbe.Sender
    protoSender *proto.Sender
    orderMessageModel *OrderMessageModel
    balanceMessageModel *BalanceMessageModel
    accountMessageModel *AccountMessageModel
}

// Create a new protoex sender with an empty buffer
func NewSender() *Sender {
    return NewSenderWithBuffer(fbe.NewEmptyBuffer())
}

// Create a new protoex sender with the given buffer
func NewSenderWithBuffer(buffer *fbe.Buffer) *Sender {
    return &Sender{
        fbe.NewSender(buffer, false),
        proto.NewSenderWithBuffer(buffer),
        NewOrderMessageModel(buffer),
        NewBalanceMessageModel(buffer),
        NewAccountMessageModel(buffer),
    }
}

// Imported senders

func (s *Sender) ProtoSender() *proto.Sender { return s.protoSender }

// Sender models accessors

func (s *Sender) OrderMessageModel() *OrderMessageModel { return s.orderMessageModel }
func (s *Sender) BalanceMessageModel() *BalanceMessageModel { return s.balanceMessageModel }
func (s *Sender) AccountMessageModel() *AccountMessageModel { return s.accountMessageModel }

// Send methods

func (s *Sender) Send(value interface{}) (int, error) {
    switch value := value.(type) {
    case *OrderMessage:
        if value.FBEType() == s.orderMessageModel.FBEType() {
            return s.SendOrderMessage(value)
        }
    case *BalanceMessage:
        if value.FBEType() == s.balanceMessageModel.FBEType() {
            return s.SendBalanceMessage(value)
        }
    case *AccountMessage:
        if value.FBEType() == s.accountMessageModel.FBEType() {
            return s.SendAccountMessage(value)
        }
    default:
        _ = value
        break
    }
    if result, err := s.protoSender.Send(value); (result > 0) || (err != nil) {
        return result, err
    }
    return 0, nil
}

func (s *Sender) SendOrderMessage(value *OrderMessage) (int, error) {
    // Serialize the value into the FBE stream
    serialized, err := s.orderMessageModel.Serialize(value)
    if serialized <= 0 {
        return 0, errors.New("protoex.OrderMessage serialization failed")
    }
    if err != nil {
        return 0, err
    }
    if !s.orderMessageModel.Verify() {
        return 0, errors.New("protoex.OrderMessage validation failed")
    }

    // Log the value
    if s.Logging() {
        message := value.String()
        s.HandlerOnSendLog.OnSendLog(message)
    }

    // Send the serialized value
    return s.SendSerialized(serialized)
}

func (s *Sender) SendBalanceMessage(value *BalanceMessage) (int, error) {
    // Serialize the value into the FBE stream
    serialized, err := s.balanceMessageModel.Serialize(value)
    if serialized <= 0 {
        return 0, errors.New("protoex.BalanceMessage serialization failed")
    }
    if err != nil {
        return 0, err
    }
    if !s.balanceMessageModel.Verify() {
        return 0, errors.New("protoex.BalanceMessage validation failed")
    }

    // Log the value
    if s.Logging() {
        message := value.String()
        s.HandlerOnSendLog.OnSendLog(message)
    }

    // Send the serialized value
    return s.SendSerialized(serialized)
}

func (s *Sender) SendAccountMessage(value *AccountMessage) (int, error) {
    // Serialize the value into the FBE stream
    serialized, err := s.accountMessageModel.Serialize(value)
    if serialized <= 0 {
        return 0, errors.New("protoex.AccountMessage serialization failed")
    }
    if err != nil {
        return 0, err
    }
    if !s.accountMessageModel.Verify() {
        return 0, errors.New("protoex.AccountMessage validation failed")
    }

    // Log the value
    if s.Logging() {
        message := value.String()
        s.HandlerOnSendLog.OnSendLog(message)
    }

    // Send the serialized value
    return s.SendSerialized(serialized)
}
