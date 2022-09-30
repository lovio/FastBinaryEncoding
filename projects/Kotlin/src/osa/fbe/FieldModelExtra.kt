//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package osa.fbe

// Fast Binary Encoding Extra field model
@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods", "ReplaceGetOrSet")
class FieldModelExtra(buffer: fbe.Buffer, offset: Long) : fbe.FieldModel(buffer, offset)
{
    val name: fbe.FieldModelString = fbe.FieldModelString(buffer, 4 + 4)
    val detail: fbe.FieldModelString = fbe.FieldModelString(buffer, name.fbeOffset + name.fbeSize)
    val sex: FieldModelSex = FieldModelSex(buffer, detail.fbeOffset + detail.fbeSize)
    val flag: FieldModelMyFLags = FieldModelMyFLags(buffer, sex.fbeOffset + sex.fbeSize)

    // Field size
    override val fbeSize: Long = 4

    // Field body size
    val fbeBody: Long = (4 + 4
        + name.fbeSize
        + detail.fbeSize
        + sex.fbeSize
        + flag.fbeSize
        )

    // Field extra size
    override val fbeExtra: Long get()
    {
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return 0

        val fbeStructOffset = readUInt32(fbeOffset).toLong()
        if ((fbeStructOffset == 0L) || ((_buffer.offset + fbeStructOffset + 4) > _buffer.size))
            return 0

        _buffer.shift(fbeStructOffset)

        val fbeResult = (fbeBody
            + name.fbeExtra
            + detail.fbeExtra
            + sex.fbeExtra
            + flag.fbeExtra
            )

        _buffer.unshift(fbeStructOffset)

        return fbeResult
    }

    // Field type
    var fbeType: Long = fbeTypeConst

    companion object
    {
        const val fbeTypeConst: Long = 1
    }

    // Check if the struct value is valid
    fun verify(fbeVerifyType: Boolean = true): Boolean
    {
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return true

        val fbeStructOffset = readUInt32(fbeOffset).toLong()
        if ((fbeStructOffset == 0L) || ((_buffer.offset + fbeStructOffset + 4 + 4) > _buffer.size))
            return false

        val fbeStructSize = readUInt32(fbeStructOffset).toLong()
        if (fbeStructSize < (4 + 4))
            return false

        val fbeStructType = readUInt32(fbeStructOffset + 4).toLong()
        if (fbeVerifyType && (fbeStructType != fbeType))
            return false

        _buffer.shift(fbeStructOffset)
        val fbeResult = verifyFields(fbeStructSize)
        _buffer.unshift(fbeStructOffset)
        return fbeResult
    }

    // Check if the struct fields are valid
    @Suppress("UNUSED_PARAMETER")
    fun verifyFields(fbeStructSize: Long): Boolean
    {
        var fbeCurrentSize = 4L + 4L

        if ((fbeCurrentSize + name.fbeSize) > fbeStructSize)
            return true
        if (!name.verify())
            return false
        fbeCurrentSize += name.fbeSize

        if ((fbeCurrentSize + detail.fbeSize) > fbeStructSize)
            return true
        if (!detail.verify())
            return false
        fbeCurrentSize += detail.fbeSize

        if ((fbeCurrentSize + sex.fbeSize) > fbeStructSize)
            return true
        if (!sex.verify())
            return false
        fbeCurrentSize += sex.fbeSize

        if ((fbeCurrentSize + flag.fbeSize) > fbeStructSize)
            return true
        if (!flag.verify())
            return false
        fbeCurrentSize += flag.fbeSize

        return true
    }

    // Get the struct value (begin phase)
    fun getBegin(): Long
    {
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return 0

        val fbeStructOffset = readUInt32(fbeOffset).toLong()
        assert((fbeStructOffset > 0) && ((_buffer.offset + fbeStructOffset + 4 + 4) <= _buffer.size)) { "Model is broken!" }
        if ((fbeStructOffset == 0L) || ((_buffer.offset + fbeStructOffset + 4 + 4) > _buffer.size))
            return 0

        val fbeStructSize = readUInt32(fbeStructOffset).toLong()
        assert(fbeStructSize >= (4 + 4)) { "Model is broken!" }
        if (fbeStructSize < (4 + 4))
            return 0

        _buffer.shift(fbeStructOffset)
        return fbeStructOffset
    }

    // Get the struct value (end phase)
    fun getEnd(fbeBegin: Long)
    {
        _buffer.unshift(fbeBegin)
    }

    // Get the struct value
    fun get(fbeValue: osa.Extra = osa.Extra()): osa.Extra
    {
        val fbeBegin = getBegin()
        if (fbeBegin == 0L)
            return fbeValue

        val fbeStructSize = readUInt32(0).toLong()
        getFields(fbeValue, fbeStructSize)
        getEnd(fbeBegin)
        return fbeValue
    }

    // Get the struct fields values
    @Suppress("UNUSED_PARAMETER")
    fun getFields(fbeValue: osa.Extra, fbeStructSize: Long)
    {
        var fbeCurrentSize = 4L + 4L

        if ((fbeCurrentSize + name.fbeSize) <= fbeStructSize)
            fbeValue.name = name.get()
        else
            fbeValue.name = ""
        fbeCurrentSize += name.fbeSize

        if ((fbeCurrentSize + detail.fbeSize) <= fbeStructSize)
            fbeValue.detail = detail.get()
        else
            fbeValue.detail = ""
        fbeCurrentSize += detail.fbeSize

        if ((fbeCurrentSize + sex.fbeSize) <= fbeStructSize)
            fbeValue.sex = sex.get()
        else
            fbeValue.sex = osa.Sex()
        fbeCurrentSize += sex.fbeSize

        if ((fbeCurrentSize + flag.fbeSize) <= fbeStructSize)
            fbeValue.flag = flag.get()
        else
            fbeValue.flag = osa.MyFLags()
        fbeCurrentSize += flag.fbeSize
    }

    // Set the struct value (begin phase)
    fun setBegin(): Long
    {
        assert((_buffer.offset + fbeOffset + fbeSize) <= _buffer.size) { "Model is broken!" }
        if ((_buffer.offset + fbeOffset + fbeSize) > _buffer.size)
            return 0

        val fbeStructSize = fbeBody
        val fbeStructOffset = _buffer.allocate(fbeStructSize) - _buffer.offset
        assert((fbeStructOffset > 0) && ((_buffer.offset + fbeStructOffset + fbeStructSize) <= _buffer.size)) { "Model is broken!" }
        if ((fbeStructOffset <= 0) || ((_buffer.offset + fbeStructOffset + fbeStructSize) > _buffer.size))
            return 0

        write(fbeOffset, fbeStructOffset.toUInt())
        write(fbeStructOffset, fbeStructSize.toUInt())
        write(fbeStructOffset + 4, fbeType.toUInt())

        _buffer.shift(fbeStructOffset)
        return fbeStructOffset
    }

    // Set the struct value (end phase)
    fun setEnd(fbeBegin: Long)
    {
        _buffer.unshift(fbeBegin)
    }

    // Set the struct value
    fun set(fbeValue: osa.Extra)
    {
        val fbeBegin = setBegin()
        if (fbeBegin == 0L)
            return

        setFields(fbeValue)
        setEnd(fbeBegin)
    }

    // Set the struct fields values
    @Suppress("UNUSED_PARAMETER")
    fun setFields(fbeValue: osa.Extra)
    {
        name.set(fbeValue.name)
        detail.set(fbeValue.detail)
        sex.set(fbeValue.sex)
        flag.set(fbeValue.flag)
    }
}
