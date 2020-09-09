// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// Version: 1.4.0.0

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.proto.fbe

// Fast Binary Encoding com.chronoxor.proto final client
@Suppress("MemberVisibilityCanBePrivate", "PropertyName")
open class FinalClient : com.chronoxor.fbe.Client, IFinalClientListener
{
    // Client sender models accessors
    val OrderMessageSenderModel: OrderMessageFinalModel
    val BalanceMessageSenderModel: BalanceMessageFinalModel
    val AccountMessageSenderModel: AccountMessageFinalModel

    // Client receiver values accessors
    private val OrderMessageReceiverValue: com.chronoxor.proto.OrderMessage
    private val BalanceMessageReceiverValue: com.chronoxor.proto.BalanceMessage
    private val AccountMessageReceiverValue: com.chronoxor.proto.AccountMessage

    // Client receiver models accessors
    private val OrderMessageReceiverModel: OrderMessageFinalModel
    private val BalanceMessageReceiverModel: BalanceMessageFinalModel
    private val AccountMessageReceiverModel: AccountMessageFinalModel

    constructor() : super(true)
    {
        OrderMessageSenderModel = OrderMessageFinalModel(sendBuffer)
        OrderMessageReceiverValue = com.chronoxor.proto.OrderMessage()
        OrderMessageReceiverModel = OrderMessageFinalModel()
        BalanceMessageSenderModel = BalanceMessageFinalModel(sendBuffer)
        BalanceMessageReceiverValue = com.chronoxor.proto.BalanceMessage()
        BalanceMessageReceiverModel = BalanceMessageFinalModel()
        AccountMessageSenderModel = AccountMessageFinalModel(sendBuffer)
        AccountMessageReceiverValue = com.chronoxor.proto.AccountMessage()
        AccountMessageReceiverModel = AccountMessageFinalModel()
    }

    constructor(sendBuffer: com.chronoxor.fbe.Buffer, receiveBuffer: com.chronoxor.fbe.Buffer) : super(sendBuffer, receiveBuffer, true)
    {
        OrderMessageSenderModel = OrderMessageFinalModel(sendBuffer)
        OrderMessageReceiverValue = com.chronoxor.proto.OrderMessage()
        OrderMessageReceiverModel = OrderMessageFinalModel()
        BalanceMessageSenderModel = BalanceMessageFinalModel(sendBuffer)
        BalanceMessageReceiverValue = com.chronoxor.proto.BalanceMessage()
        BalanceMessageReceiverModel = BalanceMessageFinalModel()
        AccountMessageSenderModel = AccountMessageFinalModel(sendBuffer)
        AccountMessageReceiverValue = com.chronoxor.proto.AccountMessage()
        AccountMessageReceiverModel = AccountMessageFinalModel()
    }

    fun send(obj: Any): Long
    {
        return sendListener(this, obj)
    }

    @Suppress("JoinDeclarationAndAssignment", "UNUSED_PARAMETER")
    fun sendListener(listener: IFinalClientListener, obj: Any): Long
    {
        when (obj)
        {
            is com.chronoxor.proto.OrderMessage -> if (obj.fbeType == OrderMessageSenderModel.fbeType) return sendListener(listener, obj)
            is com.chronoxor.proto.BalanceMessage -> if (obj.fbeType == BalanceMessageSenderModel.fbeType) return sendListener(listener, obj)
            is com.chronoxor.proto.AccountMessage -> if (obj.fbeType == AccountMessageSenderModel.fbeType) return sendListener(listener, obj)
        }

        return 0
    }

    fun send(value: com.chronoxor.proto.OrderMessage): Long
    {
        return sendListener(this, value)
    }

    fun sendListener(listener: IFinalClientListener, value: com.chronoxor.proto.OrderMessage): Long
    {
        // Serialize the value into the FBE stream
        val serialized = OrderMessageSenderModel.serialize(value)
        assert(serialized > 0) { "com.chronoxor.proto.OrderMessage serialization failed!" }
        assert(OrderMessageSenderModel.verify()) { "com.chronoxor.proto.OrderMessage validation failed!" }

        // Log the value
        if (logging)
        {
            val message = value.toString()
            listener.onSendLog(message)
        }

        // Send the serialized value
        return sendSerialized(listener, serialized)
    }
    fun send(value: com.chronoxor.proto.BalanceMessage): Long
    {
        return sendListener(this, value)
    }

    fun sendListener(listener: IFinalClientListener, value: com.chronoxor.proto.BalanceMessage): Long
    {
        // Serialize the value into the FBE stream
        val serialized = BalanceMessageSenderModel.serialize(value)
        assert(serialized > 0) { "com.chronoxor.proto.BalanceMessage serialization failed!" }
        assert(BalanceMessageSenderModel.verify()) { "com.chronoxor.proto.BalanceMessage validation failed!" }

        // Log the value
        if (logging)
        {
            val message = value.toString()
            listener.onSendLog(message)
        }

        // Send the serialized value
        return sendSerialized(listener, serialized)
    }
    fun send(value: com.chronoxor.proto.AccountMessage): Long
    {
        return sendListener(this, value)
    }

    fun sendListener(listener: IFinalClientListener, value: com.chronoxor.proto.AccountMessage): Long
    {
        // Serialize the value into the FBE stream
        val serialized = AccountMessageSenderModel.serialize(value)
        assert(serialized > 0) { "com.chronoxor.proto.AccountMessage serialization failed!" }
        assert(AccountMessageSenderModel.verify()) { "com.chronoxor.proto.AccountMessage validation failed!" }

        // Log the value
        if (logging)
        {
            val message = value.toString()
            listener.onSendLog(message)
        }

        // Send the serialized value
        return sendSerialized(listener, serialized)
    }

    override fun onReceive(type: Long, buffer: ByteArray, offset: Long, size: Long): Boolean
    {
        return onReceiveListener(this, type, buffer, offset, size)
    }

    open fun onReceiveListener(listener: IFinalClientListener, type: Long, buffer: ByteArray, offset: Long, size: Long): Boolean
    {
        when (type)
        {
            com.chronoxor.proto.fbe.OrderMessageFinalModel.fbeTypeConst ->
            {
                // Deserialize the value from the FBE stream
                OrderMessageReceiverModel.attach(buffer, offset)
                assert(OrderMessageReceiverModel.verify()) { "com.chronoxor.proto.OrderMessage validation failed!" }
                val deserialized = OrderMessageReceiverModel.deserialize(OrderMessageReceiverValue)
                assert(deserialized > 0) { "com.chronoxor.proto.OrderMessage deserialization failed!" }

                // Log the value
                if (logging)
                {
                    val message = OrderMessageReceiverValue.toString()
                    onReceiveLog(message)
                }

                // Call receive handler with deserialized value
                listener.onReceive(OrderMessageReceiverValue)
                return true
            }
            com.chronoxor.proto.fbe.BalanceMessageFinalModel.fbeTypeConst ->
            {
                // Deserialize the value from the FBE stream
                BalanceMessageReceiverModel.attach(buffer, offset)
                assert(BalanceMessageReceiverModel.verify()) { "com.chronoxor.proto.BalanceMessage validation failed!" }
                val deserialized = BalanceMessageReceiverModel.deserialize(BalanceMessageReceiverValue)
                assert(deserialized > 0) { "com.chronoxor.proto.BalanceMessage deserialization failed!" }

                // Log the value
                if (logging)
                {
                    val message = BalanceMessageReceiverValue.toString()
                    onReceiveLog(message)
                }

                // Call receive handler with deserialized value
                listener.onReceive(BalanceMessageReceiverValue)
                return true
            }
            com.chronoxor.proto.fbe.AccountMessageFinalModel.fbeTypeConst ->
            {
                // Deserialize the value from the FBE stream
                AccountMessageReceiverModel.attach(buffer, offset)
                assert(AccountMessageReceiverModel.verify()) { "com.chronoxor.proto.AccountMessage validation failed!" }
                val deserialized = AccountMessageReceiverModel.deserialize(AccountMessageReceiverValue)
                assert(deserialized > 0) { "com.chronoxor.proto.AccountMessage deserialization failed!" }

                // Log the value
                if (logging)
                {
                    val message = AccountMessageReceiverValue.toString()
                    onReceiveLog(message)
                }

                // Call receive handler with deserialized value
                listener.onReceive(AccountMessageReceiverValue)
                return true
            }
        }

        return false
    }
}
