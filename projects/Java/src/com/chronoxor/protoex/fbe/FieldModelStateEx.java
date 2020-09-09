// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// Version: 1.4.0.0

package com.chronoxor.protoex.fbe;

// Fast Binary Encoding StateEx field model
public final class FieldModelStateEx extends com.chronoxor.fbe.FieldModel
{
    public FieldModelStateEx(com.chronoxor.fbe.Buffer buffer, long offset) { super(buffer, offset); }

    // Get the field size
    @Override
    public long fbeSize() { return 1; }

    // Get the value
    public com.chronoxor.protoex.StateEx get() { return get(new com.chronoxor.protoex.StateEx()); }
    public com.chronoxor.protoex.StateEx get(com.chronoxor.protoex.StateEx defaults)
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return defaults;

        return new com.chronoxor.protoex.StateEx(readByte(fbeOffset()));
    }

    // Set the value
    public void set(com.chronoxor.protoex.StateEx value)
    {
        assert ((_buffer.getOffset() + fbeOffset() + fbeSize()) <= _buffer.getSize()) : "Model is broken!";
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return;

        write(fbeOffset(), value.getRaw());
    }
}
