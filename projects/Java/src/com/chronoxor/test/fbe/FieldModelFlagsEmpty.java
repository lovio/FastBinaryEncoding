// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

package com.chronoxor.test.fbe;

// Fast Binary Encoding FlagsEmpty field model
public final class FieldModelFlagsEmpty extends com.chronoxor.fbe.FieldModel
{
    public FieldModelFlagsEmpty(com.chronoxor.fbe.Buffer buffer, long offset) { super(buffer, offset); }

    // Get the field size
    @Override
    public long fbeSize() { return 4; }

    // Get the value
    public com.chronoxor.test.FlagsEmpty get() { return get(new com.chronoxor.test.FlagsEmpty()); }
    public com.chronoxor.test.FlagsEmpty get(com.chronoxor.test.FlagsEmpty defaults)
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return defaults;

        return new com.chronoxor.test.FlagsEmpty(readInt32(fbeOffset()));
    }

    // Set the value
    public void set(com.chronoxor.test.FlagsEmpty value)
    {
        assert ((_buffer.getOffset() + fbeOffset() + fbeSize()) <= _buffer.getSize()) : "Model is broken!";
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return;

        write(fbeOffset(), value.getRaw());
    }
}
