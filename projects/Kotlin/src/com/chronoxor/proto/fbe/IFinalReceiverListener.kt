// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// Version: 1.4.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.proto.fbe

// Fast Binary Encoding com.chronoxor.proto final receiver listener interface
interface IFinalReceiverListener : com.chronoxor.fbe.IReceiverListener
{
    fun onReceive(value: com.chronoxor.proto.OrderMessage) {}
    fun onReceive(value: com.chronoxor.proto.BalanceMessage) {}
    fun onReceive(value: com.chronoxor.proto.AccountMessage) {}
}
