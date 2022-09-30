//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package osa

@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods")
open class Extra : Comparable<Any?>
{
    var name: String
    var detail: String
    var sex: Sex
    var flag: MyFLags

    @Transient open var fbeType: Long = 1

    constructor(name: String = "", detail: String = "", sex: Sex = Sex(), flag: MyFLags = MyFLags())
    {
        this.name = name
        this.detail = detail
        this.sex = sex
        this.flag = flag
    }

    @Suppress("UNUSED_PARAMETER")
    constructor(other: Extra)
    {
        this.name = other.name
        this.detail = other.detail
        this.sex = other.sex
        this.flag = other.flag
    }

    open fun clone(): Extra
    {
        // Serialize the struct to the FBE stream
        val writer = osa.fbe.ExtraModel()
        writer.serialize(this)

        // Deserialize the struct from the FBE stream
        val reader = osa.fbe.ExtraModel()
        reader.attach(writer.buffer)
        return reader.deserialize()
    }

    override fun compareTo(other: Any?): Int
    {
        if (other == null)
            return -1

        if (!Extra::class.java.isAssignableFrom(other.javaClass))
            return -1

        @Suppress("UNUSED_VARIABLE")
        val obj = other as Extra? ?: return -1

        @Suppress("VARIABLE_WITH_REDUNDANT_INITIALIZER", "CanBeVal", "UnnecessaryVariable")
        var result = 0
        return result
    }

    override fun equals(other: Any?): Boolean
    {
        if (other == null)
            return false

        if (!Extra::class.java.isAssignableFrom(other.javaClass))
            return false

        @Suppress("UNUSED_VARIABLE")
        val obj = other as Extra? ?: return false

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
        sb.append("Extra(")
        sb.append("name="); sb.append("\"").append(name).append("\"")
        sb.append(",detail="); sb.append("\"").append(detail).append("\"")
        sb.append(",sex="); sb.append(sex)
        sb.append(",flag="); sb.append(flag)
        sb.append(")")
        return sb.toString()
    }

    open fun toJson(): String = osa.fbe.Json.engine.toJson(this)

    companion object
    {
        const val fbeTypeConst: Long = 1
        fun fromJson(json: String): Extra = osa.fbe.Json.engine.fromJson(json, Extra::class.java)
    }
}
