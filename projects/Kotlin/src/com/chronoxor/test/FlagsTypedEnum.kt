// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.test

@Suppress("EnumEntryName", "MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods")
enum class FlagsTypedEnum
{
    FLAG_VALUE_0(0x00uL)
    , FLAG_VALUE_1(0x01uL)
    , FLAG_VALUE_2(0x02uL)
    , FLAG_VALUE_3(0x04uL)
    , FLAG_VALUE_4(0x08uL)
    , FLAG_VALUE_5(0x10uL)
    , FLAG_VALUE_6(0x20uL)
    , FLAG_VALUE_7(0x40uL)
    , FLAG_VALUE_8(FLAG_VALUE_7.raw.toULong())
    , FLAG_VALUE_9(FLAG_VALUE_2.raw.toULong() or FLAG_VALUE_4.raw.toULong() or FLAG_VALUE_6.raw.toULong())
    ;

    var raw: ULong = 0uL
        private set

    constructor(value: UByte) { this.raw = value.toULong() }
    constructor(value: UShort) { this.raw = value.toULong() }
    constructor(value: UInt) { this.raw = value.toULong() }
    constructor(value: ULong) { this.raw = value.toULong() }
    constructor(value: FlagsTypedEnum) { this.raw = value.raw }

    fun hasFlags(flags: ULong): Boolean = ((raw.toULong() and flags.toULong()) != 0uL) && ((raw.toULong() and flags.toULong()) == flags.toULong())
    fun hasFlags(flags: FlagsTypedEnum): Boolean = hasFlags(flags.raw)

    val allSet: java.util.EnumSet<FlagsTypedEnum> get() = java.util.EnumSet.allOf(FlagsTypedEnum::class.java)
    val noneSet: java.util.EnumSet<FlagsTypedEnum> get() = java.util.EnumSet.noneOf(FlagsTypedEnum::class.java)
    val currentSet: java.util.EnumSet<FlagsTypedEnum> get()
    {
        val result = java.util.EnumSet.noneOf(FlagsTypedEnum::class.java)
        if ((raw.toULong() and FLAG_VALUE_0.raw.toULong()) != 0uL)
        {
            result.add(FLAG_VALUE_0)
        }
        if ((raw.toULong() and FLAG_VALUE_1.raw.toULong()) != 0uL)
        {
            result.add(FLAG_VALUE_1)
        }
        if ((raw.toULong() and FLAG_VALUE_2.raw.toULong()) != 0uL)
        {
            result.add(FLAG_VALUE_2)
        }
        if ((raw.toULong() and FLAG_VALUE_3.raw.toULong()) != 0uL)
        {
            result.add(FLAG_VALUE_3)
        }
        if ((raw.toULong() and FLAG_VALUE_4.raw.toULong()) != 0uL)
        {
            result.add(FLAG_VALUE_4)
        }
        if ((raw.toULong() and FLAG_VALUE_5.raw.toULong()) != 0uL)
        {
            result.add(FLAG_VALUE_5)
        }
        if ((raw.toULong() and FLAG_VALUE_6.raw.toULong()) != 0uL)
        {
            result.add(FLAG_VALUE_6)
        }
        if ((raw.toULong() and FLAG_VALUE_7.raw.toULong()) != 0uL)
        {
            result.add(FLAG_VALUE_7)
        }
        if ((raw.toULong() and FLAG_VALUE_8.raw.toULong()) != 0uL)
        {
            result.add(FLAG_VALUE_8)
        }
        if ((raw.toULong() and FLAG_VALUE_9.raw.toULong()) != 0uL)
        {
            result.add(FLAG_VALUE_9)
        }
        return result
    }

    override fun toString(): String
    {
        val sb = StringBuilder()
        var first = true
        if (hasFlags(FLAG_VALUE_0))
        {
            sb.append(if (first) "" else "|").append("FLAG_VALUE_0")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(FLAG_VALUE_1))
        {
            sb.append(if (first) "" else "|").append("FLAG_VALUE_1")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(FLAG_VALUE_2))
        {
            sb.append(if (first) "" else "|").append("FLAG_VALUE_2")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(FLAG_VALUE_3))
        {
            sb.append(if (first) "" else "|").append("FLAG_VALUE_3")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(FLAG_VALUE_4))
        {
            sb.append(if (first) "" else "|").append("FLAG_VALUE_4")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(FLAG_VALUE_5))
        {
            sb.append(if (first) "" else "|").append("FLAG_VALUE_5")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(FLAG_VALUE_6))
        {
            sb.append(if (first) "" else "|").append("FLAG_VALUE_6")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(FLAG_VALUE_7))
        {
            sb.append(if (first) "" else "|").append("FLAG_VALUE_7")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(FLAG_VALUE_8))
        {
            sb.append(if (first) "" else "|").append("FLAG_VALUE_8")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(FLAG_VALUE_9))
        {
            sb.append(if (first) "" else "|").append("FLAG_VALUE_9")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        return sb.toString()
    }

    companion object
    {
        private val mapping = java.util.HashMap<ULong, FlagsTypedEnum>()

        init
        {
            for (value in FlagsTypedEnum.values())
                mapping[value.raw] = value
        }

        fun mapValue(value: ULong): FlagsTypedEnum? { return mapping[value] }
    }
}
