//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package variants

@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods")
open class Simple : Comparable<Any?>
{
    var name: String

    @Transient open var fbeType: Long = 1

    constructor(name: String = "")
    {
        this.name = name
    }

    @Suppress("UNUSED_PARAMETER")
    constructor(other: Simple)
    {
        this.name = other.name
    }

    open fun clone(): Simple
    {
        // Serialize the struct to the FBE stream
        val writer = variants.fbe.SimpleModel()
        writer.serialize(this)

        // Deserialize the struct from the FBE stream
        val reader = variants.fbe.SimpleModel()
        reader.attach(writer.buffer)
        return reader.deserialize()
    }

    override fun compareTo(other: Any?): Int
    {
        if (other == null)
            return -1

        if (!Simple::class.java.isAssignableFrom(other.javaClass))
            return -1

        @Suppress("UNUSED_VARIABLE")
        val obj = other as Simple? ?: return -1

        @Suppress("VARIABLE_WITH_REDUNDANT_INITIALIZER", "CanBeVal", "UnnecessaryVariable")
        var result = 0
        return result
    }

    override fun equals(other: Any?): Boolean
    {
        if (other == null)
            return false

        if (!Simple::class.java.isAssignableFrom(other.javaClass))
            return false

        @Suppress("UNUSED_VARIABLE")
        val obj = other as Simple? ?: return false

        return true
    }

    override fun hashCode(): Int
    {
        @Suppress("CanBeVal", "UnnecessaryVariable")
        var hash = 17
        return hash
    }

    override fun toString(): String
    {
        val sb = StringBuilder()
        sb.append("Simple(")
        sb.append("name="); sb.append("\"").append(name).append("\"")
        sb.append(")")
        return sb.toString()
    }

    open fun toJson(): String = variants.fbe.Json.engine.toJson(this)

    companion object
    {
        const val fbeTypeConst: Long = 1
        fun fromJson(json: String): Simple = variants.fbe.Json.engine.fromJson(json, Simple::class.java)
    }
}