// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: enums.fbe
// Version: 1.4.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.enums.fbe

// Fast Binary Encoding EnumWChar final model
class FinalModelEnumWChar(buffer: com.chronoxor.fbe.Buffer, offset: Long) : com.chronoxor.fbe.FinalModel(buffer, offset)
{
    // Get the allocation size
    @Suppress("UNUSED_PARAMETER")
    fun fbeAllocationSize(value: com.chronoxor.enums.EnumWChar): Long = fbeSize

    // Final size
    override val fbeSize: Long = 4

    // Check if the value is valid
    override fun verify(): Long
    {
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return Long.MAX_VALUE

        return fbeSize
    }

    // Get the value
    fun get(size: com.chronoxor.fbe.Size): com.chronoxor.enums.EnumWChar
    {
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return com.chronoxor.enums.EnumWChar()

        size.value = fbeSize
        return com.chronoxor.enums.EnumWChar(readInt32(fbeOffset))
    }

    // Set the value
    fun set(value: com.chronoxor.enums.EnumWChar): Long
    {
        assert((_buffer.offset + fbeOffset + fbeSize) <= _buffer.size) { "Model is broken!" }
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return 0

        write(fbeOffset, value.raw)
        return fbeSize
    }
}
