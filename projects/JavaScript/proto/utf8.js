// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// Version: 1.4.0.0

/* eslint-disable prefer-const */
'use strict'

/**
 * Get bytes count required for encode string to UTF-8 bytes array
 * @param {!string} str String value to encode
 * @return {!number} Bytes count
 */
let utf8count = function (str) {
  let bytes = 0
  for (let i = 0; i < str.length; i++) {
    let codePoint = str.charCodeAt(i)
    if (codePoint < 0x80) {
      bytes++
    } else if ((codePoint > 0x7F) && (codePoint < 0x800)) {
      bytes = bytes + 2
    } else {
      bytes = bytes + 3
    }
  }
  return bytes
}

exports.utf8count = utf8count

/**
 * Encode string to UTF-8 bytes array
 * @param {!Uint8Array} buffer Bytes array to encode
 * @param {!number} offset Offset in bytes array
 * @param {!string} str String value to encode
 */
let utf8encode = function (buffer, offset, str) {
  let units = Infinity
  let codePoint
  let index = offset
  let length = str.length
  let leadSurrogate = null

  for (let i = 0; i < length; ++i) {
    codePoint = str.charCodeAt(i)

    // Is surrogate component...
    if ((codePoint > 0xD7FF) && (codePoint < 0xE000)) {
      // Last char was a lead
      if (!leadSurrogate) {
        // No lead yet
        if (codePoint > 0xDBFF) {
          // Unexpected trail
          if ((units -= 3) > -1) {
            buffer[index++] = 0xEF
            buffer[index++] = 0xBF
            buffer[index++] = 0xBD
          }
          continue
        } else if ((i + 1) === length) {
          // Unpaired lead
          if ((units -= 3) > -1) {
            buffer[index++] = 0xEF
            buffer[index++] = 0xBF
            buffer[index++] = 0xBD
          }
          continue
        }

        // Valid lead
        leadSurrogate = codePoint

        continue
      }

      // 2 leads in a row
      if (codePoint < 0xDC00) {
        if ((units -= 3) > -1) {
          buffer[index++] = 0xEF
          buffer[index++] = 0xBF
          buffer[index++] = 0xBD
        }
        leadSurrogate = codePoint
        continue
      }

      // Valid surrogate pair
      codePoint = (((leadSurrogate - 0xD800) << 10) | (codePoint - 0xDC00)) + 0x10000
    } else if (leadSurrogate) {
      // Valid bmp char, but last char was a lead
      if ((units -= 3) > -1) {
        buffer[index++] = 0xEF
        buffer[index++] = 0xBF
        buffer[index++] = 0xBD
      }
    }

    leadSurrogate = null

    // Encode utf8
    if (codePoint < 0x80) {
      if ((units -= 1) < 0) {
        break
      }
      buffer[index++] = codePoint
    } else if (codePoint < 0x800) {
      if ((units -= 2) < 0) {
        break
      }
      buffer[index++] = codePoint >> 0x6 | 0xC0
      buffer[index++] = codePoint & 0x3F | 0x80
    } else if (codePoint < 0x10000) {
      if ((units -= 3) < 0) {
        break
      }
      buffer[index++] = codePoint >> 0xC | 0xE0
      buffer[index++] = codePoint >> 0x6 & 0x3F | 0x80
      buffer[index++] = codePoint & 0x3F | 0x80
    } else if (codePoint < 0x110000) {
      if ((units -= 4) < 0) {
        break
      }
      buffer[index++] = codePoint >> 0x12 | 0xF0
      buffer[index++] = codePoint >> 0xC & 0x3F | 0x80
      buffer[index++] = codePoint >> 0x6 & 0x3F | 0x80
      buffer[index++] = codePoint & 0x3F | 0x80
    } else {
      throw new Error('Invalid code point!')
    }
  }
}

exports.utf8encode = utf8encode

/**
 * Decode UTF-8 bytes array to string
 * @param {!Uint8Array} buffer UTF-8 bytes array to decode
 * @param {!number} offset Offset in UTF-8 bytes array
 * @param {!number} size UTF-8 bytes array size
 * @return {!string} String value
 */
let utf8decode = function (buffer, offset, size) {
  let start = offset
  let end = offset + size
  let res = []

  let i = start
  while (i < end) {
    let firstByte = buffer[i]
    let codePoint = null
    let bytesPerSequence = (firstByte > 0xEF) ? 4 : ((firstByte > 0xDF) ? 3 : ((firstByte > 0xBF) ? 2 : 1))

    if ((i + bytesPerSequence) <= end) {
      let secondByte
      let thirdByte
      let fourthByte
      let tempCodePoint

      switch (bytesPerSequence) {
        case 1:
          if (firstByte < 0x80) {
            codePoint = firstByte
          }
          break
        case 2:
          secondByte = buffer[i + 1]
          if ((secondByte & 0xC0) === 0x80) {
            tempCodePoint = ((firstByte & 0x1F) << 0x6) | (secondByte & 0x3F)
            if (tempCodePoint > 0x7F) {
              codePoint = tempCodePoint
            }
          }
          break
        case 3:
          secondByte = buffer[i + 1]
          thirdByte = buffer[i + 2]
          if (((secondByte & 0xC0) === 0x80) && ((thirdByte & 0xC0) === 0x80)) {
            tempCodePoint = ((firstByte & 0xF) << 0xC) | ((secondByte & 0x3F) << 0x6) | (thirdByte & 0x3F)
            if ((tempCodePoint > 0x7FF) && ((tempCodePoint < 0xD800) || (tempCodePoint > 0xDFFF))) {
              codePoint = tempCodePoint
            }
          }
          break
        case 4:
          secondByte = buffer[i + 1]
          thirdByte = buffer[i + 2]
          fourthByte = buffer[i + 3]
          if (((secondByte & 0xC0) === 0x80) && ((thirdByte & 0xC0) === 0x80) && ((fourthByte & 0xC0) === 0x80)) {
            tempCodePoint = ((firstByte & 0xF) << 0x12) | ((secondByte & 0x3F) << 0xC) | ((thirdByte & 0x3F) << 0x6) | (fourthByte & 0x3F)
            if ((tempCodePoint > 0xFFFF) && (tempCodePoint < 0x110000)) {
              codePoint = tempCodePoint
            }
          }
      }
    }

    if (codePoint === null) {
      // We did not generate a valid codePoint so insert a replacement char (U+FFFD) and advance only 1 byte
      codePoint = 0xFFFD
      bytesPerSequence = 1
    } else if (codePoint > 0xFFFF) {
      // Encode to utf16 (surrogate pair dance)
      codePoint -= 0x10000
      res.push((codePoint >>> 10) & 0x3FF | 0xD800)
      codePoint = 0xDC00 | codePoint & 0x3FF
    }

    res.push(codePoint)
    i += bytesPerSequence
  }

  // Based on http://stackoverflow.com/a/22747272/680742, the browser with the lowest limit is Chrome, with 0x10000 args.
  // We go 1 magnitude less, for safety
  const MAX_ARGUMENTS_LENGTH = 0x1000

  if (res.length <= MAX_ARGUMENTS_LENGTH) {
    // Avoid extra slice()
    return String.fromCharCode.apply(String, res)
  }

  let result = ''

  // Decode in chunks to avoid "call stack size exceeded"
  i = 0
  while (i < res.length) {
    result += String.fromCharCode.apply(String, res.slice(i, i += MAX_ARGUMENTS_LENGTH))
  }

  return result
}

exports.utf8decode = utf8decode
