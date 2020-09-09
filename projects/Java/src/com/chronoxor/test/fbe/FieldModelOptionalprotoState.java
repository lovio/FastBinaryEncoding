// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

package com.chronoxor.test.fbe;

// Fast Binary Encoding optional protoState field model
public final class FieldModelOptionalprotoState extends com.chronoxor.fbe.FieldModel
{
    public FieldModelOptionalprotoState(com.chronoxor.fbe.Buffer buffer, long offset)
    {
        super(buffer, offset);
        value = new com.chronoxor.proto.fbe.FieldModelState(buffer, 0);
    }

    // Get the field size
    @Override
    public long fbeSize() { return 1 + 4; }
    // Get the field extra size
    @Override
    public long fbeExtra()
    {
        if (!hasValue())
            return 0;

        int fbeOptionalOffset = readInt32(fbeOffset() + 1);
        if ((fbeOptionalOffset == 0) || ((_buffer.getOffset() + fbeOptionalOffset + 4) > _buffer.getSize()))
            return 0;

        _buffer.shift(fbeOptionalOffset);
        long fbeResult = value.fbeSize() + value.fbeExtra();
        _buffer.unshift(fbeOptionalOffset);
        return fbeResult;
    }

    // Checks if the object contains a value
    public boolean hasValue()
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return false;

        byte fbeHasValue = readInt8(fbeOffset());
        return (fbeHasValue != 0);
    }

    // Base field model value
    public final com.chronoxor.proto.fbe.FieldModelState value;

    // Check if the optional value is valid
    @Override
    public boolean verify()
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return true;

        byte fbeHasValue = readInt8(fbeOffset());
        if (fbeHasValue == 0)
            return true;

        int fbeOptionalOffset = readInt32(fbeOffset() + 1);
        if (fbeOptionalOffset == 0)
            return false;

        _buffer.shift(fbeOptionalOffset);
        boolean fbeResult = value.verify();
        _buffer.unshift(fbeOptionalOffset);
        return fbeResult;
    }

    // Get the optional value (being phase)
    public long getBegin()
    {
        if (!hasValue())
            return 0;

        int fbeOptionalOffset = readInt32(fbeOffset() + 1);
        assert (fbeOptionalOffset > 0) : "Model is broken!";
        if (fbeOptionalOffset <= 0)
            return 0;

        _buffer.shift(fbeOptionalOffset);
        return fbeOptionalOffset;
    }

    // Get the optional value (end phase)
    public void getEnd(long fbeBegin)
    {
        _buffer.unshift(fbeBegin);
    }

    // Get the optional value
    public com.chronoxor.proto.State get() { return get(null); }
    public com.chronoxor.proto.State get(com.chronoxor.proto.State defaults)
    {
        long fbeBegin = getBegin();
        if (fbeBegin == 0)
            return defaults;

        com.chronoxor.proto.State optional = value.get();
        getEnd(fbeBegin);
        return optional;
    }

    // Set the optional value (begin phase)
    public long setBegin(boolean hasValue)
    {
        assert ((_buffer.getOffset() + fbeOffset() + fbeSize()) <= _buffer.getSize()) : "Model is broken!";
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return 0;

        byte fbeHasValue = (byte)(hasValue ? 1 : 0);
        write(fbeOffset(), fbeHasValue);
        if (fbeHasValue == 0)
            return 0;

        int fbeOptionalSize = (int)value.fbeSize();
        int fbeOptionalOffset = (int)(_buffer.allocate(fbeOptionalSize) - _buffer.getOffset());
        assert ((fbeOptionalOffset > 0) && ((_buffer.getOffset() + fbeOptionalOffset + fbeOptionalSize) <= _buffer.getSize())) : "Model is broken!";
        if ((fbeOptionalOffset <= 0) || ((_buffer.getOffset() + fbeOptionalOffset + fbeOptionalSize) > _buffer.getSize()))
            return 0;

        write(fbeOffset() + 1, fbeOptionalOffset);

        _buffer.shift(fbeOptionalOffset);
        return fbeOptionalOffset;
    }

    // Set the optional value (end phase)
    public void setEnd(long fbeBegin)
    {
        _buffer.unshift(fbeBegin);
    }

    // Set the optional value
    public void set(com.chronoxor.proto.State optional)
    {
        long fbeBegin = setBegin(optional != null);
        if (fbeBegin == 0)
            return;

        value.set(optional);
        setEnd(fbeBegin);
    }
}
