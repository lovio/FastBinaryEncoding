// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// Version: 1.6.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.protoex.fbe

// Fast Binary Encoding com.chronoxor.protoex proxy listener interface
interface IProxyListener : com.chronoxor.proto.fbe.IProxyListener

{
    fun onProxy(model: OrderMessageModel, type: Long, buffer: ByteArray, offset: Long, size: Long) {}
    fun onProxy(model: BalanceMessageModel, type: Long, buffer: ByteArray, offset: Long, size: Long) {}
    fun onProxy(model: AccountMessageModel, type: Long, buffer: ByteArray, offset: Long, size: Long) {}
}