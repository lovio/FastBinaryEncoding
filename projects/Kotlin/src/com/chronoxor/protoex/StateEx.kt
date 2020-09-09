// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// Version: 1.4.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.protoex

@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods")
class StateEx : Comparable<StateEx>
{
    companion object
    {
        val unknown = StateEx(StateExEnum.unknown)
        val invalid = StateEx(StateExEnum.invalid)
        val initialized = StateEx(StateExEnum.initialized)
        val calculated = StateEx(StateExEnum.calculated)
        val broken = StateEx(StateExEnum.broken)
        val happy = StateEx(StateExEnum.happy)
        val sad = StateEx(StateExEnum.sad)
        val good = StateEx(StateExEnum.good)
        val bad = StateEx(StateExEnum.bad)

        fun fromSet(set: java.util.EnumSet<StateExEnum>): StateEx
        {
            @Suppress("CanBeVal")
            var result = 0
            if (set.contains(unknown.value!!))
            {
                result = result.toInt() or unknown.raw.toInt()
            }
            if (set.contains(invalid.value!!))
            {
                result = result.toInt() or invalid.raw.toInt()
            }
            if (set.contains(initialized.value!!))
            {
                result = result.toInt() or initialized.raw.toInt()
            }
            if (set.contains(calculated.value!!))
            {
                result = result.toInt() or calculated.raw.toInt()
            }
            if (set.contains(broken.value!!))
            {
                result = result.toInt() or broken.raw.toInt()
            }
            if (set.contains(happy.value!!))
            {
                result = result.toInt() or happy.raw.toInt()
            }
            if (set.contains(sad.value!!))
            {
                result = result.toInt() or sad.raw.toInt()
            }
            if (set.contains(good.value!!))
            {
                result = result.toInt() or good.raw.toInt()
            }
            if (set.contains(bad.value!!))
            {
                result = result.toInt() or bad.raw.toInt()
            }
            return StateEx(result.toByte())
        }
    }

    var value: StateExEnum? = StateExEnum.values()[0]
        private set

    var raw: Byte = value!!.raw
        private set

    constructor()
    constructor(value: Byte) { setEnum(value) }
    constructor(value: StateExEnum) { setEnum(value) }
    constructor(value: java.util.EnumSet<StateExEnum>) { setEnum(value) }
    constructor(value: StateEx) { setEnum(value) }

    fun setDefault() { setEnum(0.toByte()) }

    fun setEnum(value: Byte) { this.raw = value; this.value = StateExEnum.mapValue(value) }
    fun setEnum(value: StateExEnum) { this.value = value; this.raw = value.raw; }
    fun setEnum(value: java.util.EnumSet<StateExEnum>) { setEnum(StateEx.fromSet(value)) }
    fun setEnum(value: StateEx) { this.value = value.value; this.raw = value.raw }

    fun hasFlags(flags: Byte): Boolean = ((raw.toInt() and flags.toInt()) != 0) && ((raw.toInt() and flags.toInt()) == flags.toInt())
    fun hasFlags(flags: StateExEnum): Boolean = hasFlags(flags.raw)
    fun hasFlags(flags: StateEx): Boolean = hasFlags(flags.raw)

    fun setFlags(flags: Byte): StateEx { setEnum((raw.toInt() or flags.toInt()).toByte()); return this }
    fun setFlags(flags: StateExEnum): StateEx { setFlags(flags.raw); return this }
    fun setFlags(flags: StateEx): StateEx { setFlags(flags.raw); return this }

    fun removeFlags(flags: Byte): StateEx { setEnum((raw.toInt() and flags.toInt().inv()).toByte()); return this }
    fun removeFlags(flags: StateExEnum): StateEx { removeFlags(flags.raw); return this }
    fun removeFlags(flags: StateEx): StateEx { removeFlags(flags.raw); return this }

    val allSet: java.util.EnumSet<StateExEnum> get() = value!!.allSet
    val noneSet: java.util.EnumSet<StateExEnum> get() = value!!.noneSet
    val currentSet: java.util.EnumSet<StateExEnum> get() = value!!.currentSet

    override fun compareTo(other: StateEx): Int
    {
        return (raw - other.raw).toInt()
    }

    override fun equals(other: Any?): Boolean
    {
        if (other == null)
            return false

        if (!StateEx::class.java.isAssignableFrom(other.javaClass))
            return false

        val flg = other as StateEx? ?: return false

        if (raw != flg.raw)
            return false
        return true
    }

    override fun hashCode(): Int
    {
        var hash = 17
        hash = hash * 31 + raw.toInt()
        return hash.toInt()
    }

    override fun toString(): String
    {
        val sb = StringBuilder()
        var first = true
        if (hasFlags(unknown.raw))
        {
            sb.append(if (first) "" else "|").append("unknown")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(invalid.raw))
        {
            sb.append(if (first) "" else "|").append("invalid")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(initialized.raw))
        {
            sb.append(if (first) "" else "|").append("initialized")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(calculated.raw))
        {
            sb.append(if (first) "" else "|").append("calculated")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(broken.raw))
        {
            sb.append(if (first) "" else "|").append("broken")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(happy.raw))
        {
            sb.append(if (first) "" else "|").append("happy")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(sad.raw))
        {
            sb.append(if (first) "" else "|").append("sad")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(good.raw))
        {
            sb.append(if (first) "" else "|").append("good")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        if (hasFlags(bad.raw))
        {
            sb.append(if (first) "" else "|").append("bad")
            @Suppress("UNUSED_VALUE")
            first = false
        }
        return sb.toString()
    }
}
