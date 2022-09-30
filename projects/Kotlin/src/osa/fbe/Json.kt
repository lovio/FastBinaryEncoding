//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package osa.fbe

// Fast Binary Encoding osa JSON engine
object Json
{
    // Get the JSON engine
    val engine: com.google.gson.Gson = register(com.google.gson.GsonBuilder()).create()

    @Suppress("MemberVisibilityCanBePrivate")
    fun register(builder: com.google.gson.GsonBuilder): com.google.gson.GsonBuilder
    {
        fbe.Json.register(builder)
        builder.registerTypeAdapter(osa.Sex::class.java, SexJson())
        builder.registerTypeAdapter(osa.MyFLags::class.java, MyFLagsJson())
        return builder
    }
}
