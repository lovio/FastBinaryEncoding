// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

import Foundation
import ChronoxorFbe
import ChronoxorProto

// Fast Binary Encoding StructHash field model
public class FieldModelStructHash: FieldModel {

    public var _buffer: Buffer
    public var _offset: Int

    let f1: FieldModelMapStringUInt8
    let f2: FieldModelMapStringOptionalUInt8
    let f3: FieldModelMapStringData
    let f4: FieldModelMapStringOptionalData
    let f5: FieldModelMapStringEnumSimple
    let f6: FieldModelMapStringOptionalEnumSimple
    let f7: FieldModelMapStringFlagsSimple
    let f8: FieldModelMapStringOptionalFlagsSimple
    let f9: FieldModelMapStringStructSimple
    let f10: FieldModelMapStringOptionalStructSimple

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

        f1 = FieldModelMapStringUInt8(buffer: buffer, offset: 4 + 4)
        f2 = FieldModelMapStringOptionalUInt8(buffer: buffer, offset: f1.fbeOffset + f1.fbeSize)
        f3 = FieldModelMapStringData(buffer: buffer, offset: f2.fbeOffset + f2.fbeSize)
        f4 = FieldModelMapStringOptionalData(buffer: buffer, offset: f3.fbeOffset + f3.fbeSize)
        f5 = FieldModelMapStringEnumSimple(buffer: buffer, offset: f4.fbeOffset + f4.fbeSize)
        f6 = FieldModelMapStringOptionalEnumSimple(buffer: buffer, offset: f5.fbeOffset + f5.fbeSize)
        f7 = FieldModelMapStringFlagsSimple(buffer: buffer, offset: f6.fbeOffset + f6.fbeSize)
        f8 = FieldModelMapStringOptionalFlagsSimple(buffer: buffer, offset: f7.fbeOffset + f7.fbeSize)
        f9 = FieldModelMapStringStructSimple(buffer: buffer, offset: f8.fbeOffset + f8.fbeSize)
        f10 = FieldModelMapStringOptionalStructSimple(buffer: buffer, offset: f9.fbeOffset + f9.fbeSize)

        var fbeBody = (4 + 4)
            fbeBody += f1.fbeSize
            fbeBody += f2.fbeSize
            fbeBody += f3.fbeSize
            fbeBody += f4.fbeSize
            fbeBody += f5.fbeSize
            fbeBody += f6.fbeSize
            fbeBody += f7.fbeSize
            fbeBody += f8.fbeSize
            fbeBody += f9.fbeSize
            fbeBody += f10.fbeSize
        self.fbeBody = fbeBody
    }

    // 
    public required init(buffer: Buffer = Buffer(), offset: Int = 0) {
        _buffer = buffer
        _offset = offset

        f1 = FieldModelMapStringUInt8(buffer: buffer, offset: 4 + 4)
        f2 = FieldModelMapStringOptionalUInt8(buffer: buffer, offset: f1.fbeOffset + f1.fbeSize)
        f3 = FieldModelMapStringData(buffer: buffer, offset: f2.fbeOffset + f2.fbeSize)
        f4 = FieldModelMapStringOptionalData(buffer: buffer, offset: f3.fbeOffset + f3.fbeSize)
        f5 = FieldModelMapStringEnumSimple(buffer: buffer, offset: f4.fbeOffset + f4.fbeSize)
        f6 = FieldModelMapStringOptionalEnumSimple(buffer: buffer, offset: f5.fbeOffset + f5.fbeSize)
        f7 = FieldModelMapStringFlagsSimple(buffer: buffer, offset: f6.fbeOffset + f6.fbeSize)
        f8 = FieldModelMapStringOptionalFlagsSimple(buffer: buffer, offset: f7.fbeOffset + f7.fbeSize)
        f9 = FieldModelMapStringStructSimple(buffer: buffer, offset: f8.fbeOffset + f8.fbeSize)
        f10 = FieldModelMapStringOptionalStructSimple(buffer: buffer, offset: f9.fbeOffset + f9.fbeSize)

        var fbeBody = (4 + 4)
            fbeBody += f1.fbeSize
            fbeBody += f2.fbeSize
            fbeBody += f3.fbeSize
            fbeBody += f4.fbeSize
            fbeBody += f5.fbeSize
            fbeBody += f6.fbeSize
            fbeBody += f7.fbeSize
            fbeBody += f8.fbeSize
            fbeBody += f9.fbeSize
            fbeBody += f10.fbeSize
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
            fbeResult += f1.fbeExtra
            fbeResult += f2.fbeExtra
            fbeResult += f3.fbeExtra
            fbeResult += f4.fbeExtra
            fbeResult += f5.fbeExtra
            fbeResult += f6.fbeExtra
            fbeResult += f7.fbeExtra
            fbeResult += f8.fbeExtra
            fbeResult += f9.fbeExtra
            fbeResult += f10.fbeExtra

        _buffer.unshift(offset: fbeStructOffset)

        return fbeResult
    }

    // Field type
    public var fbeType: Int = fbeTypeConst
    public static let fbeTypeConst: Int = 141

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

        if (fbeCurrentSize + f1.fbeSize) > fbeStructSize {
            return true
        }
        if !f1.verify() {
            return false
        }
        fbeCurrentSize += f1.fbeSize

        if (fbeCurrentSize + f2.fbeSize) > fbeStructSize {
            return true
        }
        if !f2.verify() {
            return false
        }
        fbeCurrentSize += f2.fbeSize

        if (fbeCurrentSize + f3.fbeSize) > fbeStructSize {
            return true
        }
        if !f3.verify() {
            return false
        }
        fbeCurrentSize += f3.fbeSize

        if (fbeCurrentSize + f4.fbeSize) > fbeStructSize {
            return true
        }
        if !f4.verify() {
            return false
        }
        fbeCurrentSize += f4.fbeSize

        if (fbeCurrentSize + f5.fbeSize) > fbeStructSize {
            return true
        }
        if !f5.verify() {
            return false
        }
        fbeCurrentSize += f5.fbeSize

        if (fbeCurrentSize + f6.fbeSize) > fbeStructSize {
            return true
        }
        if !f6.verify() {
            return false
        }
        fbeCurrentSize += f6.fbeSize

        if (fbeCurrentSize + f7.fbeSize) > fbeStructSize {
            return true
        }
        if !f7.verify() {
            return false
        }
        fbeCurrentSize += f7.fbeSize

        if (fbeCurrentSize + f8.fbeSize) > fbeStructSize {
            return true
        }
        if !f8.verify() {
            return false
        }
        fbeCurrentSize += f8.fbeSize

        if (fbeCurrentSize + f9.fbeSize) > fbeStructSize {
            return true
        }
        if !f9.verify() {
            return false
        }
        fbeCurrentSize += f9.fbeSize

        if (fbeCurrentSize + f10.fbeSize) > fbeStructSize {
            return true
        }
        if !f10.verify() {
            return false
        }
        fbeCurrentSize += f10.fbeSize

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
    public func get() -> StructHash {
        var fbeValue = StructHash()
        return get(fbeValue: &fbeValue)
    }

    public func get(fbeValue: inout StructHash) -> StructHash {
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
    public func getFields(fbeValue: inout StructHash, fbeStructSize: Int) {
        var fbeCurrentSize = 4 + 4

        if fbeCurrentSize + f1.fbeSize <= fbeStructSize {
            f1.get(values: &fbeValue.f1)
        } else {
            fbeValue.f1.removeAll()
        }
        fbeCurrentSize += f1.fbeSize

        if fbeCurrentSize + f2.fbeSize <= fbeStructSize {
            f2.get(values: &fbeValue.f2)
        } else {
            fbeValue.f2.removeAll()
        }
        fbeCurrentSize += f2.fbeSize

        if fbeCurrentSize + f3.fbeSize <= fbeStructSize {
            f3.get(values: &fbeValue.f3)
        } else {
            fbeValue.f3.removeAll()
        }
        fbeCurrentSize += f3.fbeSize

        if fbeCurrentSize + f4.fbeSize <= fbeStructSize {
            f4.get(values: &fbeValue.f4)
        } else {
            fbeValue.f4.removeAll()
        }
        fbeCurrentSize += f4.fbeSize

        if fbeCurrentSize + f5.fbeSize <= fbeStructSize {
            f5.get(values: &fbeValue.f5)
        } else {
            fbeValue.f5.removeAll()
        }
        fbeCurrentSize += f5.fbeSize

        if fbeCurrentSize + f6.fbeSize <= fbeStructSize {
            f6.get(values: &fbeValue.f6)
        } else {
            fbeValue.f6.removeAll()
        }
        fbeCurrentSize += f6.fbeSize

        if fbeCurrentSize + f7.fbeSize <= fbeStructSize {
            f7.get(values: &fbeValue.f7)
        } else {
            fbeValue.f7.removeAll()
        }
        fbeCurrentSize += f7.fbeSize

        if fbeCurrentSize + f8.fbeSize <= fbeStructSize {
            f8.get(values: &fbeValue.f8)
        } else {
            fbeValue.f8.removeAll()
        }
        fbeCurrentSize += f8.fbeSize

        if fbeCurrentSize + f9.fbeSize <= fbeStructSize {
            f9.get(values: &fbeValue.f9)
        } else {
            fbeValue.f9.removeAll()
        }
        fbeCurrentSize += f9.fbeSize

        if fbeCurrentSize + f10.fbeSize <= fbeStructSize {
            f10.get(values: &fbeValue.f10)
        } else {
            fbeValue.f10.removeAll()
        }
        fbeCurrentSize += f10.fbeSize
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
    public func set(value fbeValue: StructHash) throws {
        let fbeBegin = try setBegin()
        if fbeBegin == 0 {
            return
        }

        try setFields(fbeValue: fbeValue)
        setEnd(fbeBegin: fbeBegin)
    }

    // Set the struct fields values
    public func setFields(fbeValue: StructHash) throws {
        try f1.set(value: fbeValue.f1)
        try f2.set(value: fbeValue.f2)
        try f3.set(value: fbeValue.f3)
        try f4.set(value: fbeValue.f4)
        try f5.set(value: fbeValue.f5)
        try f6.set(value: fbeValue.f6)
        try f7.set(value: fbeValue.f7)
        try f8.set(value: fbeValue.f8)
        try f9.set(value: fbeValue.f9)
        try f10.set(value: fbeValue.f10)
    }
}
