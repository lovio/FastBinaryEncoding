// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// Version: 1.4.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.proto

@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods")
open class Balance : Comparable<Any?>
{
    var currency: String
    var amount: Double

    @Transient open var fbeType: Long = 2

    constructor(currency: String = "", amount: Double = 0.0)
    {
        this.currency = currency
        this.amount = amount
    }

    @Suppress("UNUSED_PARAMETER")
    constructor(other: Balance)
    {
        this.currency = other.currency
        this.amount = other.amount
    }

    open fun clone(): Balance
    {
        // Serialize the struct to the FBE stream
        val writer = com.chronoxor.proto.fbe.BalanceModel()
        writer.serialize(this)

        // Deserialize the struct from the FBE stream
        val reader = com.chronoxor.proto.fbe.BalanceModel()
        reader.attach(writer.buffer)
        return reader.deserialize()
    }

    override fun compareTo(other: Any?): Int
    {
        if (other == null)
            return -1

        if (!Balance::class.java.isAssignableFrom(other.javaClass))
            return -1

        @Suppress("UNUSED_VARIABLE")
        val obj = other as Balance? ?: return -1

        @Suppress("VARIABLE_WITH_REDUNDANT_INITIALIZER", "CanBeVal", "UnnecessaryVariable")
        var result = 0
        result = currency.compareTo(obj.currency)
        if (result != 0)
            return result
        return result
    }

    override fun equals(other: Any?): Boolean
    {
        if (other == null)
            return false

        if (!Balance::class.java.isAssignableFrom(other.javaClass))
            return false

        @Suppress("UNUSED_VARIABLE")
        val obj = other as Balance? ?: return false

        if (currency != obj.currency)
            return false
        return true
    }

    override fun hashCode(): Int
    {
        @Suppress("CanBeVal", "UnnecessaryVariable")
        var hash = 17
        hash = hash * 31 + currency.hashCode()
        return hash
    }

    override fun toString(): String
    {
        val sb = StringBuilder()
        sb.append("Balance(")
        sb.append("currency="); sb.append("\"").append(currency).append("\"")
        sb.append(",amount="); sb.append(amount)
        sb.append(")")
        return sb.toString()
    }

    open fun toJson(): String = com.chronoxor.proto.fbe.Json.engine.toJson(this)

    companion object
    {
        const val fbeTypeConst: Long = 2
        fun fromJson(json: String): Balance = com.chronoxor.proto.fbe.Json.engine.fromJson(json, Balance::class.java)
    }
}
