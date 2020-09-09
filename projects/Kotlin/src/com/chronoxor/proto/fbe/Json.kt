// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// Version: 1.4.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.proto.fbe

// Fast Binary Encoding proto JSON engine
object Json
{
    // Get the JSON engine
    val engine: com.google.gson.Gson = register(com.google.gson.GsonBuilder()).create()

    @Suppress("MemberVisibilityCanBePrivate")
    fun register(builder: com.google.gson.GsonBuilder): com.google.gson.GsonBuilder
    {
        com.chronoxor.fbe.Json.register(builder)
        builder.registerTypeAdapter(com.chronoxor.proto.OrderSide::class.java, OrderSideJson())
        builder.registerTypeAdapter(com.chronoxor.proto.OrderType::class.java, OrderTypeJson())
        builder.registerTypeAdapter(com.chronoxor.proto.State::class.java, StateJson())
        return builder
    }
}
