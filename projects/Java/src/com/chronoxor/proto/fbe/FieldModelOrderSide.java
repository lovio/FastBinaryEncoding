// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// Version: 1.4.0.0

package com.chronoxor.proto.fbe;

// Fast Binary Encoding OrderSide field model
public final class FieldModelOrderSide extends com.chronoxor.fbe.FieldModel
{
    public FieldModelOrderSide(com.chronoxor.fbe.Buffer buffer, long offset) { super(buffer, offset); }

    // Get the field size
    @Override
    public long fbeSize() { return 1; }

    // Get the value
    public com.chronoxor.proto.OrderSide get() { return get(new com.chronoxor.proto.OrderSide()); }
    public com.chronoxor.proto.OrderSide get(com.chronoxor.proto.OrderSide defaults)
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return defaults;

        return new com.chronoxor.proto.OrderSide(readByte(fbeOffset()));
    }

    // Set the value
    public void set(com.chronoxor.proto.OrderSide value)
    {
        assert ((_buffer.getOffset() + fbeOffset() + fbeSize()) <= _buffer.getSize()) : "Model is broken!";
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return;

        write(fbeOffset(), value.getRaw());
    }
}
