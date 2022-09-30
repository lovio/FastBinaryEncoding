//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

import Foundation
import Fbe

// Fast Binary Encoding Extra field model
public class FieldModelExtra: FieldModel {

    public var _buffer: Buffer
    public var _offset: Int

    let name: Fbe.FieldModelString
    let detail: Fbe.FieldModelString
    let sex: FieldModelSex
    let flag: FieldModelMyFLags

    // Field size
    public let fbeSize: Int = 4

    // Field body size
    public let fbeBody: Int

    // Set the struct value (end phase)
    public required init() {
        let buffer = Buffer()
        let offset = 0

        _buffer = buffer
        _offset = offset

        name = FieldModelString(buffer: buffer, offset: 4 + 4)
        detail = FieldModelString(buffer: buffer, offset: name.fbeOffset + name.fbeSize)
        sex = FieldModelSex(buffer: buffer, offset: detail.fbeOffset + detail.fbeSize)
        flag = FieldModelMyFLags(buffer: buffer, offset: sex.fbeOffset + sex.fbeSize)

        var fbeBody = (4 + 4)
            fbeBody += name.fbeSize
            fbeBody += detail.fbeSize
            fbeBody += sex.fbeSize
            fbeBody += flag.fbeSize
        self.fbeBody = fbeBody
    }

    // 
    public required init(buffer: Buffer = Buffer(), offset: Int = 0) {
        _buffer = buffer
        _offset = offset

        name = FieldModelString(buffer: buffer, offset: 4 + 4)
        detail = FieldModelString(buffer: buffer, offset: name.fbeOffset + name.fbeSize)
        sex = FieldModelSex(buffer: buffer, offset: detail.fbeOffset + detail.fbeSize)
        flag = FieldModelMyFLags(buffer: buffer, offset: sex.fbeOffset + sex.fbeSize)

        var fbeBody = (4 + 4)
            fbeBody += name.fbeSize
            fbeBody += detail.fbeSize
            fbeBody += sex.fbeSize
            fbeBody += flag.fbeSize
        self.fbeBody = fbeBody
    }

    // Field extra size
    public var fbeExtra: Int {
        if _buffer.offset + fbeOffset + fbeSize > _buffer.size {
            return 0
        }

        let fbeStructOffset = Int(readUInt32(offset: fbeOffset))
        if (fbeStructOffset == 0) || ((_buffer.offset + fbeStructOffset + 4) > _buffer.size) {
            return 0
        }

        _buffer.shift(offset: fbeStructOffset)

        var fbeResult = fbeBody
            fbeResult += name.fbeExtra
            fbeResult += detail.fbeExtra
            fbeResult += sex.fbeExtra
            fbeResult += flag.fbeExtra

        _buffer.unshift(offset: fbeStructOffset)

        return fbeResult
    }

    // Field type
    public var fbeType: Int = fbeTypeConst
    public static let fbeTypeConst: Int = 1

    // Check if the struct value is valid
    func verify(fbeVerifyType: Bool = true) -> Bool {
        if (_buffer.offset + fbeOffset + fbeSize) > _buffer.size {
            return true
        }

        let fbeStructOffset = Int(readUInt32(offset: fbeOffset))
        if (fbeStructOffset == 0) || ((_buffer.offset + fbeStructOffset + 4 + 4) > _buffer.size) {
            return false
        }

        let fbeStructSize = Int(readUInt32(offset: fbeStructOffset))
        if fbeStructSize < (4 + 4) {
            return false
        }

        let fbeStructType = Int(readUInt32(offset: fbeStructOffset + 4))
        if fbeVerifyType && (fbeStructType != fbeType) {
            return false
        }

        _buffer.shift(offset: fbeStructOffset)
        let fbeResult = verifyFields(fbeStructSize: fbeStructSize)
        _buffer.unshift(offset: fbeStructOffset)
        return fbeResult
    }

    // Check if the struct fields are valid
    public func verifyFields(fbeStructSize: Int) -> Bool {
        var fbeCurrentSize = 4 + 4

        if (fbeCurrentSize + name.fbeSize) > fbeStructSize {
            return true
        }
        if !name.verify() {
            return false
        }
        fbeCurrentSize += name.fbeSize

        if (fbeCurrentSize + detail.fbeSize) > fbeStructSize {
            return true
        }
        if !detail.verify() {
            return false
        }
        fbeCurrentSize += detail.fbeSize

        if (fbeCurrentSize + sex.fbeSize) > fbeStructSize {
            return true
        }
        if !sex.verify() {
            return false
        }
        fbeCurrentSize += sex.fbeSize

        if (fbeCurrentSize + flag.fbeSize) > fbeStructSize {
            return true
        }
        if !flag.verify() {
            return false
        }
        fbeCurrentSize += flag.fbeSize

        return true
    }

    // Get the struct value (begin phase)
    func getBegin() -> Int {
        if _buffer.offset + fbeOffset + fbeSize > _buffer.size {
            return 0
        }

        let fbeStructOffset = Int(readUInt32(offset: fbeOffset))
        if (fbeStructOffset == 0) || ((_buffer.offset + fbeStructOffset + 4 + 4) > _buffer.size) {
            assertionFailure("Model is broken!")
            return 0
        }

        let fbeStructSize = Int(readUInt32(offset: fbeStructOffset))
        if fbeStructSize < 4 + 4 {
            assertionFailure("Model is broken!")
            return 0
        }

        _buffer.shift(offset: fbeStructOffset)
        return fbeStructOffset
    }

    // Get the struct value (end phase)
    func getEnd(fbeBegin: Int) {
        _buffer.unshift(offset: fbeBegin)
    }

    // Get the struct value
    public func get() -> Extra {
        var fbeValue = Extra()
        return get(fbeValue: &fbeValue)
    }

    public func get(fbeValue: inout Extra) -> Extra {
        let fbeBegin = getBegin()
        if fbeBegin == 0 {
            return fbeValue
        }

        let fbeStructSize = Int(readUInt32(offset: 0))
        getFields(fbeValue: &fbeValue, fbeStructSize: fbeStructSize)
        getEnd(fbeBegin: fbeBegin)
        return fbeValue
    }

    // Get the struct fields values
    public func getFields(fbeValue: inout Extra, fbeStructSize: Int) {
        var fbeCurrentSize = 4 + 4

        if fbeCurrentSize + name.fbeSize <= fbeStructSize {
            fbeValue.name = name.get()
        } else {
            fbeValue.name = ""
        }
        fbeCurrentSize += name.fbeSize

        if fbeCurrentSize + detail.fbeSize <= fbeStructSize {
            fbeValue.detail = detail.get()
        } else {
            fbeValue.detail = ""
        }
        fbeCurrentSize += detail.fbeSize

        if fbeCurrentSize + sex.fbeSize <= fbeStructSize {
            fbeValue.sex = sex.get()
        } else {
            fbeValue.sex = Osa.Sex()
        }
        fbeCurrentSize += sex.fbeSize

        if fbeCurrentSize + flag.fbeSize <= fbeStructSize {
            fbeValue.flag = flag.get()
        } else {
            fbeValue.flag = Osa.MyFLags()
        }
        fbeCurrentSize += flag.fbeSize
    }

    // Set the struct value (begin phase)
    func setBegin() throws -> Int {
        if (_buffer.offset + fbeOffset + fbeSize) > _buffer.size {
            assertionFailure("Model is broken!")
            return 0
        }

        let fbeStructSize = fbeBody
        let fbeStructOffset = try _buffer.allocate(size: fbeStructSize) - _buffer.offset
        if (fbeStructOffset <= 0) || ((_buffer.offset + fbeStructOffset + fbeStructSize) > _buffer.size) {
            assertionFailure("Model is broken!")
            return 0
        }

        write(offset: fbeOffset, value: UInt32(fbeStructOffset))
        write(offset: fbeStructOffset, value: UInt32(fbeStructSize))
        write(offset: fbeStructOffset + 4, value: UInt32(fbeType))

        _buffer.shift(offset: fbeStructOffset)
        return fbeStructOffset
    }

    // Set the struct value (end phase)
    public func setEnd(fbeBegin: Int) {
        _buffer.unshift(offset: fbeBegin)
    }

    // Set the struct value
    public func set(value fbeValue: Extra) throws {
        let fbeBegin = try setBegin()
        if fbeBegin == 0 {
            return
        }

        try setFields(fbeValue: fbeValue)
        setEnd(fbeBegin: fbeBegin)
    }

    // Set the struct fields values
    public func setFields(fbeValue: Extra) throws {
        try name.set(value: fbeValue.name)
        try detail.set(value: fbeValue.detail)
        try sex.set(value: fbeValue.sex)
        try flag.set(value: fbeValue.flag)
    }
}
