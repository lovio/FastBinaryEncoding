// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.test.fbe

// Fast Binary Encoding com.chronoxor.test sender
@Suppress("MemberVisibilityCanBePrivate", "PropertyName")
open class Sender : com.chronoxor.fbe.Sender, ISenderListener
{
    // Imported senders
    val protoSender: com.chronoxor.proto.fbe.Sender

    // Sender models accessors

    constructor() : super(false)
    {
        protoSender = com.chronoxor.proto.fbe.Sender(buffer)
    }

    constructor(buffer: com.chronoxor.fbe.Buffer) : super(buffer, false)
    {
        protoSender = com.chronoxor.proto.fbe.Sender(buffer)
    }

    fun send(obj: Any): Long
    {
        return sendListener(this, obj)
    }

    @Suppress("JoinDeclarationAndAssignment", "UNUSED_PARAMETER")
    fun sendListener(listener: ISenderListener, obj: Any): Long
    {

        // Try to send using imported senders
        @Suppress("CanBeVal")
        var result: Long
        result = protoSender.sendListener(listener, obj)
        if (result > 0)
            return result

        return 0
    }

}
