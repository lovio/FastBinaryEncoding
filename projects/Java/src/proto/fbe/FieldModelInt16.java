// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding

package fbe;

import java.io.*;
import java.lang.*;
import java.lang.reflect.*;
import java.math.*;
import java.nio.charset.*;
import java.time.*;
import java.util.*;
import javafx.util.*;

// Fast Binary Encoding short field model class
public final class FieldModelInt16 extends FieldModel
{
    public FieldModelInt16(@NotNull Buffer buffer, long offset) { super(buffer, offset); }

    // Get the field size
    @Override
    public long FBESize() { return 2; }

    // Get the value
    public short get() { return get((short)0); }
    public short get(short defaults)
    {
        if ((_buffer.getOffset() + FBEOffset() + FBESize()) > _buffer.getSize())
            return defaults;

        return readInt16(FBEOffset());
    }

    // Set the value
    public void set(short value)
    {
        assert ((_buffer.getOffset() + FBEOffset() + FBESize()) <= _buffer.getSize()) : "Model is broken!";
        if ((_buffer.getOffset() + FBEOffset() + FBESize()) > _buffer.getSize())
            return;

        write(FBEOffset(), value);
    }
}
