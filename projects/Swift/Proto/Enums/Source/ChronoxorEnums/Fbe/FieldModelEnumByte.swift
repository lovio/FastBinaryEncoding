// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: enums.fbe
// Version: 1.4.0.0

import ChronoxorFbe

// Fast Binary Encoding EnumByte field model
public class FieldModelEnumByte: FieldModel {

    public var _buffer: Buffer = Buffer()
    public var _offset: Int = 0

    public var fbeSize: Int = 1

    public required init() {
        _buffer = Buffer()
        _offset = 0
    }

    // Get the value
    public func get(defaults: EnumByte = EnumByte()) -> EnumByte {
        if _buffer.offset + fbeOffset + fbeSize > _buffer.size {
            return defaults
        }

        return EnumByte(value: readByte(offset: fbeOffset))
    }

    // Set the value
    public func set(value: EnumByte) throws {
        if (_buffer.offset + fbeOffset + fbeSize) > _buffer.size {
            assertionFailure("Model is broken!")
            return
        }

        write(offset: fbeOffset, value: value.raw)
    }
}
