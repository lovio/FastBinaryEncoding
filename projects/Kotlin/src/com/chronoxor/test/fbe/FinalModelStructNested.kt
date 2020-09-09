// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.test.fbe

// Fast Binary Encoding StructNested final model
@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods", "ReplaceGetOrSet")
class FinalModelStructNested(buffer: com.chronoxor.fbe.Buffer, offset: Long) : com.chronoxor.fbe.FinalModel(buffer, offset)
{
    val parent: FinalModelStructOptional = FinalModelStructOptional(buffer, 0)
    val f1000: FinalModelEnumSimple = FinalModelEnumSimple(buffer, 0)
    val f1001: FinalModelOptionalEnumSimple = FinalModelOptionalEnumSimple(buffer, 0)
    val f1002: FinalModelEnumTyped = FinalModelEnumTyped(buffer, 0)
    val f1003: FinalModelOptionalEnumTyped = FinalModelOptionalEnumTyped(buffer, 0)
    val f1004: FinalModelFlagsSimple = FinalModelFlagsSimple(buffer, 0)
    val f1005: FinalModelOptionalFlagsSimple = FinalModelOptionalFlagsSimple(buffer, 0)
    val f1006: FinalModelFlagsTyped = FinalModelFlagsTyped(buffer, 0)
    val f1007: FinalModelOptionalFlagsTyped = FinalModelOptionalFlagsTyped(buffer, 0)
    val f1008: FinalModelStructSimple = FinalModelStructSimple(buffer, 0)
    val f1009: FinalModelOptionalStructSimple = FinalModelOptionalStructSimple(buffer, 0)
    val f1010: FinalModelStructOptional = FinalModelStructOptional(buffer, 0)
    val f1011: FinalModelOptionalStructOptional = FinalModelOptionalStructOptional(buffer, 0)

    // Get the allocation size
    @Suppress("UNUSED_PARAMETER")
    fun fbeAllocationSize(fbeValue: com.chronoxor.test.StructNested): Long = (0
        + parent.fbeAllocationSize(fbeValue)
        + f1000.fbeAllocationSize(fbeValue.f1000)
        + f1001.fbeAllocationSize(fbeValue.f1001)
        + f1002.fbeAllocationSize(fbeValue.f1002)
        + f1003.fbeAllocationSize(fbeValue.f1003)
        + f1004.fbeAllocationSize(fbeValue.f1004)
        + f1005.fbeAllocationSize(fbeValue.f1005)
        + f1006.fbeAllocationSize(fbeValue.f1006)
        + f1007.fbeAllocationSize(fbeValue.f1007)
        + f1008.fbeAllocationSize(fbeValue.f1008)
        + f1009.fbeAllocationSize(fbeValue.f1009)
        + f1010.fbeAllocationSize(fbeValue.f1010)
        + f1011.fbeAllocationSize(fbeValue.f1011)
        )

    // Field type
    var fbeType: Long = fbeTypeConst

    companion object
    {
        const val fbeTypeConst: Long = 112
    }

    // Check if the struct value is valid
    override fun verify(): Long
    {
        _buffer.shift(fbeOffset)
        val fbeResult = verifyFields()
        _buffer.unshift(fbeOffset)
        return fbeResult
    }

    // Check if the struct fields are valid
    fun verifyFields(): Long
    {
        var fbeCurrentOffset = 0L
        @Suppress("VARIABLE_WITH_REDUNDANT_INITIALIZER")
        var fbeFieldSize = 0L

        parent.fbeOffset = fbeCurrentOffset
        fbeFieldSize = parent.verifyFields()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1000.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1000.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1001.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1001.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1002.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1002.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1003.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1003.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1004.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1004.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1005.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1005.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1006.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1006.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1007.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1007.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1008.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1008.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1009.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1009.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1010.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1010.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        f1011.fbeOffset = fbeCurrentOffset
        fbeFieldSize = f1011.verify()
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE
        fbeCurrentOffset += fbeFieldSize

        return fbeCurrentOffset
    }

    // Get the struct value
    fun get(fbeSize: com.chronoxor.fbe.Size, fbeValue: com.chronoxor.test.StructNested = com.chronoxor.test.StructNested()): com.chronoxor.test.StructNested
    {
        _buffer.shift(fbeOffset)
        fbeSize.value = getFields(fbeValue)
        _buffer.unshift(fbeOffset)
        return fbeValue
    }

    // Get the struct fields values
    @Suppress("UNUSED_PARAMETER")
    fun getFields(fbeValue: com.chronoxor.test.StructNested): Long
    {
        var fbeCurrentOffset = 0L
        var fbeCurrentSize = 0L
        val fbeFieldSize = com.chronoxor.fbe.Size()

        parent.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = parent.getFields(fbeValue)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1000.fbeOffset = fbeCurrentOffset
        fbeValue.f1000 = f1000.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1001.fbeOffset = fbeCurrentOffset
        fbeValue.f1001 = f1001.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1002.fbeOffset = fbeCurrentOffset
        fbeValue.f1002 = f1002.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1003.fbeOffset = fbeCurrentOffset
        fbeValue.f1003 = f1003.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1004.fbeOffset = fbeCurrentOffset
        fbeValue.f1004 = f1004.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1005.fbeOffset = fbeCurrentOffset
        fbeValue.f1005 = f1005.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1006.fbeOffset = fbeCurrentOffset
        fbeValue.f1006 = f1006.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1007.fbeOffset = fbeCurrentOffset
        fbeValue.f1007 = f1007.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1008.fbeOffset = fbeCurrentOffset
        fbeValue.f1008 = f1008.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1009.fbeOffset = fbeCurrentOffset
        fbeValue.f1009 = f1009.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1010.fbeOffset = fbeCurrentOffset
        fbeValue.f1010 = f1010.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1011.fbeOffset = fbeCurrentOffset
        fbeValue.f1011 = f1011.get(fbeFieldSize)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        return fbeCurrentSize
    }

    // Set the struct value
    fun set(fbeValue: com.chronoxor.test.StructNested): Long
    {
        _buffer.shift(fbeOffset)
        val fbeSize = setFields(fbeValue)
        _buffer.unshift(fbeOffset)
        return fbeSize
    }

    // Set the struct fields values
    @Suppress("UNUSED_PARAMETER")
    fun setFields(fbeValue: com.chronoxor.test.StructNested): Long
    {
        var fbeCurrentOffset = 0L
        var fbeCurrentSize = 0L
        val fbeFieldSize = com.chronoxor.fbe.Size()

        parent.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = parent.setFields(fbeValue)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1000.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1000.set(fbeValue.f1000)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1001.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1001.set(fbeValue.f1001)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1002.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1002.set(fbeValue.f1002)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1003.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1003.set(fbeValue.f1003)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1004.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1004.set(fbeValue.f1004)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1005.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1005.set(fbeValue.f1005)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1006.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1006.set(fbeValue.f1006)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1007.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1007.set(fbeValue.f1007)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1008.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1008.set(fbeValue.f1008)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1009.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1009.set(fbeValue.f1009)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1010.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1010.set(fbeValue.f1010)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        f1011.fbeOffset = fbeCurrentOffset
        fbeFieldSize.value = f1011.set(fbeValue.f1011)
        fbeCurrentOffset += fbeFieldSize.value
        fbeCurrentSize += fbeFieldSize.value

        return fbeCurrentSize
    }
}
