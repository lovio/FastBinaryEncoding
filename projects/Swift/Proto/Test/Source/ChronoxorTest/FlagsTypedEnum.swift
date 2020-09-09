// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// Version: 1.4.0.0

import Foundation

public struct FlagsTypedEnum: OptionSet {
    public static let FLAG_VALUE_0 = FlagsTypedEnum(rawValue: 0x00)
    public static let FLAG_VALUE_1 = FlagsTypedEnum(rawValue: 0x01)
    public static let FLAG_VALUE_2 = FlagsTypedEnum(rawValue: 0x02)
    public static let FLAG_VALUE_3 = FlagsTypedEnum(rawValue: 0x04)
    public static let FLAG_VALUE_4 = FlagsTypedEnum(rawValue: 0x08)
    public static let FLAG_VALUE_5 = FlagsTypedEnum(rawValue: 0x10)
    public static let FLAG_VALUE_6 = FlagsTypedEnum(rawValue: 0x20)
    public static let FLAG_VALUE_7 = FlagsTypedEnum(rawValue: 0x40)
    public static let FLAG_VALUE_8 = FlagsTypedEnum(rawValue: Self.FLAG_VALUE_7.rawValue)
    public static let FLAG_VALUE_9 = FlagsTypedEnum(rawValue: Self.FLAG_VALUE_2.rawValue | Self.FLAG_VALUE_4.rawValue | Self.FLAG_VALUE_6.rawValue)

    public var rawValue: UInt64

    public init(rawValue: UInt64) { self.rawValue = rawValue }
    public init(value: UInt8) { self.rawValue = NSNumber(value: value).uint64Value }
    public init(value: UInt16) { self.rawValue = NSNumber(value: value).uint64Value }
    public init(value: UInt32) { self.rawValue = NSNumber(value: value).uint64Value }
    public init(value: UInt64) { self.rawValue = NSNumber(value: value).uint64Value }
    public init(value: FlagsTypedEnum) { self.rawValue = value.rawValue }

    public func hasFlags(flags: UInt64) -> Bool { return ((NSNumber(value: rawValue).uint64Value & NSNumber(value: flags).uint64Value) != 0) && (NSNumber(value: rawValue).uint64Value & NSNumber(value: flags).uint64Value == NSNumber(value: flags).uint64Value) }
    public func hasFlags(flags: FlagsTypedEnum) -> Bool { return hasFlags(flags: flags.rawValue) }

    public static let allSet: FlagsTypedEnum = [
        .FLAG_VALUE_0,
        .FLAG_VALUE_1,
        .FLAG_VALUE_2,
        .FLAG_VALUE_3,
        .FLAG_VALUE_4,
        .FLAG_VALUE_5,
        .FLAG_VALUE_6,
        .FLAG_VALUE_7,
        .FLAG_VALUE_8,
        .FLAG_VALUE_9,
    ]
    public static let noneSet: FlagsTypedEnum = []
    public var currentSet: FlagsTypedEnum {
        var result = FlagsTypedEnum.noneSet
        if (NSNumber(value: rawValue).uint64Value & NSNumber(value: FlagsTypedEnum.FLAG_VALUE_0.rawValue).uint64Value) != 0 {
            result = result.union(.FLAG_VALUE_0)
        }
        if (NSNumber(value: rawValue).uint64Value & NSNumber(value: FlagsTypedEnum.FLAG_VALUE_1.rawValue).uint64Value) != 0 {
            result = result.union(.FLAG_VALUE_1)
        }
        if (NSNumber(value: rawValue).uint64Value & NSNumber(value: FlagsTypedEnum.FLAG_VALUE_2.rawValue).uint64Value) != 0 {
            result = result.union(.FLAG_VALUE_2)
        }
        if (NSNumber(value: rawValue).uint64Value & NSNumber(value: FlagsTypedEnum.FLAG_VALUE_3.rawValue).uint64Value) != 0 {
            result = result.union(.FLAG_VALUE_3)
        }
        if (NSNumber(value: rawValue).uint64Value & NSNumber(value: FlagsTypedEnum.FLAG_VALUE_4.rawValue).uint64Value) != 0 {
            result = result.union(.FLAG_VALUE_4)
        }
        if (NSNumber(value: rawValue).uint64Value & NSNumber(value: FlagsTypedEnum.FLAG_VALUE_5.rawValue).uint64Value) != 0 {
            result = result.union(.FLAG_VALUE_5)
        }
        if (NSNumber(value: rawValue).uint64Value & NSNumber(value: FlagsTypedEnum.FLAG_VALUE_6.rawValue).uint64Value) != 0 {
            result = result.union(.FLAG_VALUE_6)
        }
        if (NSNumber(value: rawValue).uint64Value & NSNumber(value: FlagsTypedEnum.FLAG_VALUE_7.rawValue).uint64Value) != 0 {
            result = result.union(.FLAG_VALUE_7)
        }
        if (NSNumber(value: rawValue).uint64Value & NSNumber(value: FlagsTypedEnum.FLAG_VALUE_8.rawValue).uint64Value) != 0 {
            result = result.union(.FLAG_VALUE_8)
        }
        if (NSNumber(value: rawValue).uint64Value & NSNumber(value: FlagsTypedEnum.FLAG_VALUE_9.rawValue).uint64Value) != 0 {
            result = result.union(.FLAG_VALUE_9)
        }
        return result
    }

    public var description: String {
        var sb = String()
        var first = true
        if hasFlags(flags: .FLAG_VALUE_0) {
            sb.append(first ? "" : "|"); sb.append("FLAG_VALUE_0")
            first = false
        }
        if hasFlags(flags: .FLAG_VALUE_1) {
            sb.append(first ? "" : "|"); sb.append("FLAG_VALUE_1")
            first = false
        }
        if hasFlags(flags: .FLAG_VALUE_2) {
            sb.append(first ? "" : "|"); sb.append("FLAG_VALUE_2")
            first = false
        }
        if hasFlags(flags: .FLAG_VALUE_3) {
            sb.append(first ? "" : "|"); sb.append("FLAG_VALUE_3")
            first = false
        }
        if hasFlags(flags: .FLAG_VALUE_4) {
            sb.append(first ? "" : "|"); sb.append("FLAG_VALUE_4")
            first = false
        }
        if hasFlags(flags: .FLAG_VALUE_5) {
            sb.append(first ? "" : "|"); sb.append("FLAG_VALUE_5")
            first = false
        }
        if hasFlags(flags: .FLAG_VALUE_6) {
            sb.append(first ? "" : "|"); sb.append("FLAG_VALUE_6")
            first = false
        }
        if hasFlags(flags: .FLAG_VALUE_7) {
            sb.append(first ? "" : "|"); sb.append("FLAG_VALUE_7")
            first = false
        }
        if hasFlags(flags: .FLAG_VALUE_8) {
            sb.append(first ? "" : "|"); sb.append("FLAG_VALUE_8")
            first = false
        }
        if hasFlags(flags: .FLAG_VALUE_9) {
            sb.append(first ? "" : "|"); sb.append("FLAG_VALUE_9")
            first = false
        }
        return sb
    }

    static let rawValuesMap: [RawValue: FlagsTypedEnum] = {
        var value = [RawValue: FlagsTypedEnum]()
        value[FlagsTypedEnum.FLAG_VALUE_0.rawValue] = .FLAG_VALUE_0
        value[FlagsTypedEnum.FLAG_VALUE_1.rawValue] = .FLAG_VALUE_1
        value[FlagsTypedEnum.FLAG_VALUE_2.rawValue] = .FLAG_VALUE_2
        value[FlagsTypedEnum.FLAG_VALUE_3.rawValue] = .FLAG_VALUE_3
        value[FlagsTypedEnum.FLAG_VALUE_4.rawValue] = .FLAG_VALUE_4
        value[FlagsTypedEnum.FLAG_VALUE_5.rawValue] = .FLAG_VALUE_5
        value[FlagsTypedEnum.FLAG_VALUE_6.rawValue] = .FLAG_VALUE_6
        value[FlagsTypedEnum.FLAG_VALUE_7.rawValue] = .FLAG_VALUE_7
        value[FlagsTypedEnum.FLAG_VALUE_8.rawValue] = .FLAG_VALUE_8
        value[FlagsTypedEnum.FLAG_VALUE_9.rawValue] = .FLAG_VALUE_9
        return value
    }()

    public static func mapValue(value: RawValue) -> FlagsTypedEnum? {
        return rawValuesMap[value]
    }
}
