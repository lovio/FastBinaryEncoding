// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

package com.chronoxor.test.fbe;

// Fast Binary Encoding Int32->OptionalFlagsSimple map field model
public final class FieldModelMapInt32OptionalFlagsSimple extends com.chronoxor.fbe.FieldModel
{
    private final com.chronoxor.fbe.FieldModelInt32 _modelKey;
    private final FieldModelOptionalFlagsSimple _modelValue;

    public FieldModelMapInt32OptionalFlagsSimple(com.chronoxor.fbe.Buffer buffer, long offset)
    {
        super(buffer, offset);
        _modelKey = new com.chronoxor.fbe.FieldModelInt32(buffer, offset);
        _modelValue = new FieldModelOptionalFlagsSimple(buffer, offset);
    }

    // Get the field size
    @Override
    public long fbeSize() { return 4; }
    // Get the field extra size
    @Override
    public long fbeExtra()
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return 0;

        int fbeMapOffset = readInt32(fbeOffset());
        if ((fbeMapOffset == 0) || ((_buffer.getOffset() + fbeMapOffset + 4) > _buffer.getSize()))
            return 0;

        int fbeMapSize = readInt32(fbeMapOffset);

        long fbeResult = 4;
        _modelKey.fbeOffset(fbeMapOffset + 4);
        _modelValue.fbeOffset(fbeMapOffset + 4 + _modelKey.fbeSize());
        for (int i = fbeMapSize; i-- > 0;)
        {
            fbeResult += _modelKey.fbeSize() + _modelKey.fbeExtra();
            _modelKey.fbeShift(_modelKey.fbeSize() + _modelValue.fbeSize());

            fbeResult += _modelValue.fbeSize() + _modelValue.fbeExtra();
            _modelValue.fbeShift(_modelKey.fbeSize() + _modelValue.fbeSize());
        }
        return fbeResult;
    }

    // Get the map offset
    public long getOffset()
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return 0;

        int fbeMapOffset = readInt32(fbeOffset());
        return fbeMapOffset;
    }

    // Get the map size
    public long getSize()
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return 0;

        int fbeMapOffset = readInt32(fbeOffset());
        if ((fbeMapOffset == 0) || ((_buffer.getOffset() + fbeMapOffset + 4) > _buffer.getSize()))
            return 0;

        int fbeMapSize = readInt32(fbeMapOffset);
        return fbeMapSize;
    }

    // Map index operator
    public com.chronoxor.fbe.Pair<com.chronoxor.fbe.FieldModelInt32, FieldModelOptionalFlagsSimple> getItem(long index)
    {
        assert ((_buffer.getOffset() + fbeOffset() + fbeSize()) <= _buffer.getSize()) : "Model is broken!";

        int fbeMapOffset = readInt32(fbeOffset());
        assert ((fbeMapOffset > 0) && ((_buffer.getOffset() + fbeMapOffset + 4) <= _buffer.getSize())) : "Model is broken!";

        int fbeMapSize = readInt32(fbeMapOffset);
        assert (index < fbeMapSize) : "Index is out of bounds!";

        _modelKey.fbeOffset(fbeMapOffset + 4);
        _modelValue.fbeOffset(fbeMapOffset + 4 + _modelKey.fbeSize());
        _modelKey.fbeShift(index * (_modelKey.fbeSize() + _modelValue.fbeSize()));
        _modelValue.fbeShift(index * (_modelKey.fbeSize() + _modelValue.fbeSize()));
        return com.chronoxor.fbe.Pair.create(_modelKey, _modelValue);
    }

    // Resize the map and get its first model
    public com.chronoxor.fbe.Pair<com.chronoxor.fbe.FieldModelInt32, FieldModelOptionalFlagsSimple> resize(long size)
    {
        int fbeMapSize = (int)(size * (_modelKey.fbeSize() + _modelValue.fbeSize()));
        int fbeMapOffset = (int)(_buffer.allocate(4 + fbeMapSize) - _buffer.getOffset());
        assert ((fbeMapOffset > 0) && ((_buffer.getOffset() + fbeMapOffset + 4) <= _buffer.getSize())) : "Model is broken!";

        write(fbeOffset(), fbeMapOffset);
        write(fbeMapOffset, (int)size);
        write(fbeMapOffset + 4, (byte)0, fbeMapSize);

        _modelKey.fbeOffset(fbeMapOffset + 4);
        _modelValue.fbeOffset(fbeMapOffset + 4 + _modelKey.fbeSize());
        return com.chronoxor.fbe.Pair.create(_modelKey, _modelValue);
    }

    // Check if the map is valid
    @Override
    public boolean verify()
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return true;

        int fbeMapOffset = readInt32(fbeOffset());
        if (fbeMapOffset == 0)
            return true;

        if ((_buffer.getOffset() + fbeMapOffset + 4) > _buffer.getSize())
            return false;

        int fbeMapSize = readInt32(fbeMapOffset);

        _modelKey.fbeOffset(fbeMapOffset + 4);
        _modelValue.fbeOffset(fbeMapOffset + 4 + _modelKey.fbeSize());
        for (int i = fbeMapSize; i-- > 0;)
        {
            if (!_modelKey.verify())
                return false;
            _modelKey.fbeShift(_modelKey.fbeSize() + _modelValue.fbeSize());
            if (!_modelValue.verify())
                return false;
            _modelValue.fbeShift(_modelKey.fbeSize() + _modelValue.fbeSize());
        }

        return true;
    }

    // Get the map as java.util.TreeMap
    public void get(java.util.TreeMap<Integer, com.chronoxor.test.FlagsSimple> values)
    {
        assert (values != null) : "Invalid values parameter!";
        if (values == null)
            throw new IllegalArgumentException("Invalid values parameter!");

        values.clear();

        long fbeMapSize = getSize();
        if (fbeMapSize == 0)
            return;

        var fbeModel = getItem(0);
        for (long i = fbeMapSize; i-- > 0;)
        {
            Integer key = fbeModel.getKey().get();
            com.chronoxor.test.FlagsSimple value = fbeModel.getValue().get();
            values.put(key, value);
            fbeModel.getKey().fbeShift(fbeModel.getKey().fbeSize() + fbeModel.getValue().fbeSize());
            fbeModel.getValue().fbeShift(fbeModel.getKey().fbeSize() + fbeModel.getValue().fbeSize());
        }
    }

    // Get the map as java.util.HashMap
    public void get(java.util.HashMap<Integer, com.chronoxor.test.FlagsSimple> values)
    {
        assert (values != null) : "Invalid values parameter!";
        if (values == null)
            throw new IllegalArgumentException("Invalid values parameter!");

        values.clear();

        long fbeMapSize = getSize();
        if (fbeMapSize == 0)
            return;

        var fbeModel = getItem(0);
        for (long i = fbeMapSize; i-- > 0;)
        {
            Integer key = fbeModel.getKey().get();
            com.chronoxor.test.FlagsSimple value = fbeModel.getValue().get();
            values.put(key, value);
            fbeModel.getKey().fbeShift(fbeModel.getKey().fbeSize() + fbeModel.getValue().fbeSize());
            fbeModel.getValue().fbeShift(fbeModel.getKey().fbeSize() + fbeModel.getValue().fbeSize());
        }
    }

    // Set the map as java.util.TreeMap
    public void set(java.util.TreeMap<Integer, com.chronoxor.test.FlagsSimple> values)
    {
        assert (values != null) : "Invalid values parameter!";
        if (values == null)
            throw new IllegalArgumentException("Invalid values parameter!");

        assert ((_buffer.getOffset() + fbeOffset() + fbeSize()) <= _buffer.getSize()) : "Model is broken!";
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return;

        var fbeModel = resize(values.size());
        for (var value : values.entrySet())
        {
            fbeModel.getKey().set(value.getKey());
            fbeModel.getKey().fbeShift(fbeModel.getKey().fbeSize() + fbeModel.getValue().fbeSize());
            fbeModel.getValue().set(value.getValue());
            fbeModel.getValue().fbeShift(fbeModel.getKey().fbeSize() + fbeModel.getValue().fbeSize());
        }
    }

    // Set the map as java.util.HashMap
    public void set(java.util.HashMap<Integer, com.chronoxor.test.FlagsSimple> values)
    {
        assert (values != null) : "Invalid values parameter!";
        if (values == null)
            throw new IllegalArgumentException("Invalid values parameter!");

        assert ((_buffer.getOffset() + fbeOffset() + fbeSize()) <= _buffer.getSize()) : "Model is broken!";
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return;

        var fbeModel = resize(values.size());
        for (var value : values.entrySet())
        {
            fbeModel.getKey().set(value.getKey());
            fbeModel.getKey().fbeShift(fbeModel.getKey().fbeSize() + fbeModel.getValue().fbeSize());
            fbeModel.getValue().set(value.getValue());
            fbeModel.getValue().fbeShift(fbeModel.getKey().fbeSize() + fbeModel.getValue().fbeSize());
        }
    }
}
