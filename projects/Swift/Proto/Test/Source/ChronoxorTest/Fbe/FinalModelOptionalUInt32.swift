// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

import Foundation
import ChronoxorFbe
import ChronoxorProto

// Fast Binary Encoding optional UInt32 final model
class FinalModelOptionalUInt32: FinalModel {

    var _buffer: Buffer
    var _offset: Int

    // Base field model value
    let value: ChronoxorFbe.FinalModelUInt32

    required init() {
        let buffer = Buffer()
        let offset = 0

        _buffer = buffer
        _offset = offset

        value = ChronoxorFbe.FinalModelUInt32(buffer: buffer, offset: offset)
    }

    required init(buffer: Buffer, offset: Int) {
        _buffer = buffer
        _offset = offset

        value = ChronoxorFbe.FinalModelUInt32(buffer: buffer, offset: offset)
    }

    func fbeAllocationSize(value optional: UInt32?) -> Int {
        return 1 + (optional != nil ? value.fbeAllocationSize(value: optional!) : 0)
    }

    func hasValue() -> Bool {
        if _buffer.offset + fbeOffset + 1 > _buffer.size {
            return false
        }

        let fbeHasValue = Int32(readInt8(offset: fbeOffset))
        return fbeHasValue != 0
    }

    public func verify() -> Int {
        if _buffer.offset + fbeOffset + 1 > _buffer.size {
            return Int.max
        }

        let fbeHasValue = Int(readInt8(offset: fbeOffset))
        if fbeHasValue == 0 {
            return 1
        }

        _buffer.shift(offset: fbeOffset + 1)
        let fbeResult = value.verify()
        _buffer.unshift(offset: fbeOffset + 1)
        return 1 + fbeResult
    }

    public func get(size: inout Size) -> UInt32? {
        if _buffer.offset + fbeOffset + 1 > _buffer.size {
            assertionFailure("Model is broken!")
            size.value = 0
            return nil
        }

        if !hasValue() {
            size.value = 1
            return nil
        }

        _buffer.shift(offset: fbeOffset + 1)
        let optional = value.get(size: &size)
        _buffer.unshift(offset: fbeOffset + 1)
        size.value += 1
        return optional
    }

    // Set the optional value
    public func set(value optional: UInt32?) throws -> Int {
        if _buffer.offset + fbeOffset + 1 > _buffer.size {
            assertionFailure("Model is broken!")
            return 0
        }

        let fbeHasValue = optional != nil ? 1 : 0
        write(offset: fbeOffset, value: Int8(fbeHasValue))
        if fbeHasValue == 0 {
            return 1
        }

        _buffer.shift(offset: fbeOffset + 1)
        let size = try value.set(value: optional!)
        _buffer.unshift(offset: fbeOffset + 1)
        return 1 + size
    }
}
