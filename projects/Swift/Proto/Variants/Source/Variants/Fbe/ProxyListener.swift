//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

import Fbe
import Foundation

// Fast Binary Encoding Variants proxy listener
public protocol ProxyListener {
}

public extension ProxyListener {
    func onProxy(model: SimpleModel, type: Int, buffer: Data, offset: Int, size: Int) {}
    func onProxy(model: ValueModel, type: Int, buffer: Data, offset: Int, size: Int) {}
}