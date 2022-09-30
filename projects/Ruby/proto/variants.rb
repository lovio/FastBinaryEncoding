#------------------------------------------------------------------------------
# Automatically generated by the Fast Binary Encoding compiler, do not modify!
# https://github.com/chronoxor/FastBinaryEncoding
# Source: variants.fbe
# FBE version: 1.10.0.0
#------------------------------------------------------------------------------

# rubocop:disable Lint/MissingCopEnableDirective
# rubocop:disable Lint/UnneededCopDisableDirective
# rubocop:disable Metrics/AbcSize
# rubocop:disable Metrics/ClassLength
# rubocop:disable Metrics/CyclomaticComplexity
# rubocop:disable Metrics/LineLength
# rubocop:disable Metrics/MethodLength
# rubocop:disable Metrics/PerceivedComplexity

require 'base64'
require 'bigdecimal'
require 'json'
require 'set'
require 'uuidtools'

require_relative 'fbe'

module Variants

  # noinspection RubyResolve, RubyScope, RubyTooManyInstanceVariablesInspection, RubyTooManyMethodsInspection
  class Simple
    include Comparable

    attr_accessor :name

    def initialize(name = '')
      @name = name
    end

    def initialize_copy(other)
      @name = other.name
    end

    # Struct shallow copy
    def copy(other)
      initialize_copy(other)
      self
    end

    # Struct deep clone
    def clone
      data = Marshal.dump(self)
      clone = Marshal.load(data)
      clone.freeze if frozen?
      clone
    end

    # Struct compare operators
    def <=>(other)
      return nil unless other.is_a?(Simple)

      # noinspection RubyUnusedLocalVariable
      result = 0
      # noinspection RubyUnnecessaryReturnValue
      result
    end

    # Struct equals
    def eql?(other)
      self == other
    end

    # Struct keys
    def key
      result = []
      # noinspection RubyUnnecessaryReturnValue
      result
    end

    # Struct hash code
    def hash
      key.hash
    end

    # Get struct string value
    def to_s
      result = ''
      result << 'Simple('
      result << 'name='
      if !@name.nil?
        result << '"' << @name.to_s << '"'
      else
        result << 'null'
      end
      result << ')'
      result
    end

    # Dump the struct
    def marshal_dump
      # Serialize the struct to the FBE stream
      writer = SimpleModel.new(FBE::WriteBuffer.new)
      writer.serialize(self)
      writer.buffer
    end

    # Load the struct
    def marshal_load(data)
      # Deserialize the struct from the FBE stream
      reader = SimpleModel.new(FBE::ReadBuffer.new)
      reader.attach_buffer(data)
      initialize_copy(reader.deserialize[0])
    end

    # Get struct JSON value
    def to_json
      JSON.generate(__to_json_map__)
    end

    # Get struct JSON map (internal method)
    def __to_json_map__
      result = {}
      key = 'name'
      value = (name.nil? ? nil : name)
      result.store(key, value)
      result
    end

    # Get struct from JSON
    def self.from_json(json)
      __from_json_map__(JSON.parse(json))
    end

    # Get struct map from JSON (internal method)
    def self.__from_json_map__(json)
      result = Simple.new
      value = json.fetch('name', nil)
      result.name = (value.nil? ? nil : value)
      result
    end

    # Get the FBE type
    def fbe_type
      TYPE
    end

    TYPE = 1
  end

  # noinspection RubyResolve, RubyScope, RubyTooManyInstanceVariablesInspection, RubyTooManyMethodsInspection
  class FieldModelSimple < FBE::FieldModel
    def initialize(buffer, offset)
      super(buffer, offset)
      @_name = FBE::FieldModelString.new(self.buffer, 4 + 4)
    end

    def name
      @_name
    end

    # Get the field size
    def fbe_size
      4
    end

    # Get the field body size
    def fbe_body
      4 + 4 \
        + name.fbe_size \
    end

    # Get the field extra size
    def fbe_extra
      if (@_buffer.offset + fbe_offset + fbe_size) > @_buffer.size
        return 0
      end

      fbe_struct_offset = read_uint32(fbe_offset)
      if (fbe_struct_offset == 0) || ((@_buffer.offset + fbe_struct_offset + 4) > @_buffer.size)
        return 0
      end

      @_buffer.shift(fbe_struct_offset)

      fbe_result = fbe_body \
        + name.fbe_extra \

      @_buffer.unshift(fbe_struct_offset)

      fbe_result
    end

    # Get the field type
    def fbe_type
      TYPE
    end

    TYPE = 1

    # Is the struct value valid?
    def valid?
      verify
    end

    # Check if the struct value is valid
    def verify(fbe_verify_type = true)
      if (@_buffer.offset + fbe_offset + fbe_size) > @_buffer.size
        return true
      end

      fbe_struct_offset = read_uint32(fbe_offset)
      if (fbe_struct_offset == 0) || ((@_buffer.offset + fbe_struct_offset + 4 + 4) > @_buffer.size)
        return false
      end

      fbe_struct_size = read_uint32(fbe_struct_offset)
      if fbe_struct_size < (4 + 4)
        return false
      end

      fbe_struct_type = read_uint32(fbe_struct_offset + 4)
      if fbe_verify_type && (fbe_struct_type != fbe_type)
        return false
      end

      @_buffer.shift(fbe_struct_offset)
      fbe_result = verify_fields(fbe_struct_size)
      @_buffer.unshift(fbe_struct_offset)
      fbe_result
    end

    # Check if the struct fields are valid
    def verify_fields(fbe_struct_size)
      fbe_current_size = 4 + 4

      if (fbe_current_size + name.fbe_size) > fbe_struct_size
        return true
      end
      unless name.verify
        return false
      end
      # noinspection RubyUnusedLocalVariable
      fbe_current_size += name.fbe_size

      true
    end

    # Get the struct value (begin phase)
    def get_begin
      if (@_buffer.offset + fbe_offset + fbe_size) > @_buffer.size
        return 0
      end

      fbe_struct_offset = read_uint32(fbe_offset)
      if (fbe_struct_offset == 0) || ((@_buffer.offset + fbe_struct_offset + 4 + 4) > @_buffer.size)
        return 0
      end

      fbe_struct_size = read_uint32(fbe_struct_offset)
      if fbe_struct_size < (4 + 4)
        return 0
      end

      @_buffer.shift(fbe_struct_offset)
      fbe_struct_offset
    end

    # Get the struct value (end phase)
    def get_end(fbe_begin)
      @_buffer.unshift(fbe_begin)
    end

    # Get the struct value
    def get(fbe_value = Simple.new)
      fbe_begin = get_begin
      if fbe_begin == 0
        return fbe_value
      end

      fbe_struct_size = read_uint32(0)
      get_fields(fbe_value, fbe_struct_size)
      get_end(fbe_begin)
      fbe_value
    end

    # Get the struct fields values
    def get_fields(fbe_value, fbe_struct_size)
      fbe_current_size = 4 + 4

      if (fbe_current_size + name.fbe_size) <= fbe_struct_size
        fbe_value.name = name.get
      else
        fbe_value.name = ''
      end
      # noinspection RubyUnusedLocalVariable
      fbe_current_size += name.fbe_size
    end

    # Set the struct value (begin phase)
    def set_begin
      if (@_buffer.offset + fbe_offset + fbe_size) > @_buffer.size
        return 0
      end

      fbe_struct_size = fbe_body
      fbe_struct_offset = @_buffer.allocate(fbe_struct_size) - @_buffer.offset
      if (fbe_struct_offset <= 0) || ((@_buffer.offset + fbe_struct_offset + fbe_struct_size) > @_buffer.size)
        return 0
      end

      write_uint32(fbe_offset, fbe_struct_offset)
      write_uint32(fbe_struct_offset, fbe_struct_size)
      write_uint32(fbe_struct_offset + 4, fbe_type)

      @_buffer.shift(fbe_struct_offset)
      fbe_struct_offset
    end

    # Set the struct value (end phase)
    def set_end(fbe_begin)
      @_buffer.unshift(fbe_begin)
    end

    # Set the struct value
    def set(fbe_value)
      fbe_begin = set_begin
      if fbe_begin == 0
        return
      end

      set_fields(fbe_value)
      set_end(fbe_begin)
    end

    # Set the struct fields values
    def set_fields(fbe_value)
      name.set(fbe_value.name)
    end
  end

  # Fast Binary Encoding Simple model
  class SimpleModel < FBE::Model
    def initialize(buffer = FBE::WriteBuffer.new)
      super(buffer)
      @_model = FieldModelSimple.new(self.buffer, 4)
    end

    def model
      @_model
    end

    # Get the model size
    def fbe_size
      @_model.fbe_size + @_model.fbe_extra
    end

    # Get the model type
    def fbe_type
      TYPE
    end

    TYPE = FieldModelSimple::TYPE

    # Is the struct value valid?
    def valid?
      verify
    end

    # Check if the struct value is valid
    def verify
      if (buffer.offset + @_model.fbe_offset - 4) > buffer.size
        return false
      end

      fbe_full_size = read_uint32(@_model.fbe_offset - 4)
      if fbe_full_size < @_model.fbe_size
        return false
      end

      @_model.verify
    end

    # Create a new model (begin phase)
    def create_begin
      buffer.allocate(4 + @_model.fbe_size)
    end

    # Create a new model (end phase)
    def create_end(fbe_begin)
      fbe_end = buffer.size
      fbe_full_size = fbe_end - fbe_begin
      write_uint32(@_model.fbe_offset - 4, fbe_full_size)
      fbe_full_size
    end

    # Serialize the struct value
    def serialize(value)
      fbe_begin = create_begin
      @_model.set(value)
      create_end(fbe_begin)
    end

    # Deserialize the struct value
    def deserialize(value = Simple.new)
      if (buffer.offset + @_model.fbe_offset - 4) > buffer.size
        [Simple.new, 0]
      end

      fbe_full_size = read_uint32(@_model.fbe_offset - 4)
      if fbe_full_size < @_model.fbe_size
        [Simple.new, 0]
      end

      @_model.get(value)
      [value, fbe_full_size]
    end

    # Move to the next struct value
    def next(prev)
      @_model.fbe_shift(prev)
    end
  end

  # noinspection RubyResolve, RubyScope, RubyTooManyInstanceVariablesInspection, RubyTooManyMethodsInspection
  class FinalModelSimple < FBE::FinalModel
    def initialize(buffer, offset)
      super(buffer, offset)
      @_name = FBE::FinalModelString.new(self.buffer, 0)
    end

    def name
      @_name
    end

    # Get the allocation size
    def fbe_allocation_size(fbe_value)
      0 \
        + name.fbe_allocation_size(fbe_value.name) \
    end

    # Get the final type
    def fbe_type
      TYPE
    end

    TYPE = 1

    # Is the struct value valid?
    def valid?
      verify
    end

    # Check if the struct value is valid
    def verify
      @_buffer.shift(fbe_offset)
      fbe_result = verify_fields
      @_buffer.unshift(fbe_offset)
      fbe_result
    end

    # Check if the struct fields are valid
    def verify_fields
      fbe_current_offset = 0

      name.fbe_offset = fbe_current_offset
      fbe_field_size = name.verify
      if fbe_field_size == FBE::Integer::MAX
        return FBE::Integer::MAX
      end
      fbe_current_offset += fbe_field_size

      # noinspection RubyUnnecessaryReturnValue
      fbe_current_offset
    end

    # Get the struct value
    def get(fbe_value = Simple.new)
      @_buffer.shift(fbe_offset)
      fbe_size = get_fields(fbe_value)
      @_buffer.unshift(fbe_offset)
      [fbe_value, fbe_size]
    end

    # Get the struct fields values
    def get_fields(fbe_value)
      fbe_current_offset = 0
      fbe_current_size = 0

      name.fbe_offset = fbe_current_offset
      fbe_result = name.get
      fbe_value.name = fbe_result[0]
      # noinspection RubyUnusedLocalVariable
      fbe_current_offset += fbe_result[1]
      fbe_current_size += fbe_result[1]

      # noinspection RubyUnnecessaryReturnValue
      fbe_current_size
    end

    # Set the struct value
    def set(fbe_value)
      @_buffer.shift(fbe_offset)
      fbe_size = set_fields(fbe_value)
      @_buffer.unshift(fbe_offset)
      fbe_size
    end

    # Set the struct fields values
    def set_fields(fbe_value)
      fbe_current_offset = 0
      fbe_current_size = 0

      name.fbe_offset = fbe_current_offset
      fbe_field_size = name.set(fbe_value.name)
      # noinspection RubyUnusedLocalVariable
      fbe_current_offset += fbe_field_size
      fbe_current_size += fbe_field_size

      # noinspection RubyUnnecessaryReturnValue
      fbe_current_size
    end
  end

  # Fast Binary Encoding Simple final model
  class SimpleFinalModel < FBE::Model
    def initialize(buffer = FBE::WriteBuffer.new)
      super(buffer)
      @_model = FinalModelSimple.new(self.buffer, 8)
    end

    # Get the model type
    def fbe_type
      TYPE
    end

    TYPE = FinalModelSimple::TYPE

    # Is the struct value valid?
    def valid?
      verify
    end

    # Check if the struct value is valid
    def verify
      if (buffer.offset + @_model.fbe_offset) > buffer.size
        return false
      end

      fbe_struct_size = read_uint32(@_model.fbe_offset - 8)
      fbe_struct_type = read_uint32(@_model.fbe_offset - 4)
      if (fbe_struct_size <= 0) or (fbe_struct_type != fbe_type)
        return false
      end

      (8 + @_model.verify) == fbe_struct_size
    end

    # Serialize the struct value
    def serialize(value)
      fbe_initial_size = buffer.size

      fbe_struct_type = fbe_type
      fbe_struct_size = 8 + @_model.fbe_allocation_size(value)
      fbe_struct_offset = buffer.allocate(fbe_struct_size) - buffer.offset
      if (buffer.offset + fbe_struct_offset + fbe_struct_size) > buffer.size
        return 0
      end

      fbe_struct_size = 8 + @_model.set(value)
      buffer.resize(fbe_initial_size + fbe_struct_size)

      write_uint32(@_model.fbe_offset - 8, fbe_struct_size)
      write_uint32(@_model.fbe_offset - 4, fbe_struct_type)

      fbe_struct_size
    end

    # Deserialize the struct value
    def deserialize(value = Simple.new)
      if (buffer.offset + @_model.fbe_offset) > buffer.size
        [Simple.new, 0]
      end

      fbe_struct_size = read_uint32(@_model.fbe_offset - 8)
      fbe_struct_type = read_uint32(@_model.fbe_offset - 4)
      if (fbe_struct_size <= 0) || (fbe_struct_type != fbe_type)
        [Simple.new, 8]
      end

      fbe_result = @_model.get(value)
      [fbe_result[0], (8 + fbe_result[1])]
    end

    # Move to the next struct value
    def next(prev)
      @_model.fbe_shift(prev)
    end
  end

  # noinspection RubyResolve, RubyScope, RubyTooManyInstanceVariablesInspection, RubyTooManyMethodsInspection
  class Value
    include Comparable

    attr_accessor :v

    def initialize(v = V.new)
      @v = v
    end

    def initialize_copy(other)
      @v = other.v
    end

    # Struct shallow copy
    def copy(other)
      initialize_copy(other)
      self
    end

    # Struct deep clone
    def clone
      data = Marshal.dump(self)
      clone = Marshal.load(data)
      clone.freeze if frozen?
      clone
    end

    # Struct compare operators
    def <=>(other)
      return nil unless other.is_a?(Value)

      # noinspection RubyUnusedLocalVariable
      result = 0
      # noinspection RubyUnnecessaryReturnValue
      result
    end

    # Struct equals
    def eql?(other)
      self == other
    end

    # Struct keys
    def key
      result = []
      # noinspection RubyUnnecessaryReturnValue
      result
    end

    # Struct hash code
    def hash
      key.hash
    end

    # Get struct string value
    def to_s
      result = ''
      result << 'Value('
      result << 'v='
      if !@v.nil?
        result << @v.to_s
      else
        result << 'null'
      end
      result << ')'
      result
    end

    # Dump the struct
    def marshal_dump
      # Serialize the struct to the FBE stream
      writer = ValueModel.new(FBE::WriteBuffer.new)
      writer.serialize(self)
      writer.buffer
    end

    # Load the struct
    def marshal_load(data)
      # Deserialize the struct from the FBE stream
      reader = ValueModel.new(FBE::ReadBuffer.new)
      reader.attach_buffer(data)
      initialize_copy(reader.deserialize[0])
    end

    # Get struct JSON value
    def to_json
      JSON.generate(__to_json_map__)
    end

    # Get struct JSON map (internal method)
    def __to_json_map__
      result = {}
      key = 'v'
      value = (v.nil? ? nil : v.__to_json_map__)
      result.store(key, value)
      result
    end

    # Get struct from JSON
    def self.from_json(json)
      __from_json_map__(JSON.parse(json))
    end

    # Get struct map from JSON (internal method)
    def self.__from_json_map__(json)
      result = Value.new
      value = json.fetch('v', nil)
      result.v = (value.nil? ? nil : V.__from_json_map__(value))
      result
    end

    # Get the FBE type
    def fbe_type
      TYPE
    end

    TYPE = 2
  end

  # noinspection RubyResolve, RubyScope, RubyTooManyInstanceVariablesInspection, RubyTooManyMethodsInspection
  class FieldModelValue < FBE::FieldModel
    def initialize(buffer, offset)
      super(buffer, offset)
      @_v = FieldModelV.new(self.buffer, 4 + 4)
    end

    def v
      @_v
    end

    # Get the field size
    def fbe_size
      4
    end

    # Get the field body size
    def fbe_body
      4 + 4 \
        + v.fbe_size \
    end

    # Get the field extra size
    def fbe_extra
      if (@_buffer.offset + fbe_offset + fbe_size) > @_buffer.size
        return 0
      end

      fbe_struct_offset = read_uint32(fbe_offset)
      if (fbe_struct_offset == 0) || ((@_buffer.offset + fbe_struct_offset + 4) > @_buffer.size)
        return 0
      end

      @_buffer.shift(fbe_struct_offset)

      fbe_result = fbe_body \
        + v.fbe_extra \

      @_buffer.unshift(fbe_struct_offset)

      fbe_result
    end

    # Get the field type
    def fbe_type
      TYPE
    end

    TYPE = 2

    # Is the struct value valid?
    def valid?
      verify
    end

    # Check if the struct value is valid
    def verify(fbe_verify_type = true)
      if (@_buffer.offset + fbe_offset + fbe_size) > @_buffer.size
        return true
      end

      fbe_struct_offset = read_uint32(fbe_offset)
      if (fbe_struct_offset == 0) || ((@_buffer.offset + fbe_struct_offset + 4 + 4) > @_buffer.size)
        return false
      end

      fbe_struct_size = read_uint32(fbe_struct_offset)
      if fbe_struct_size < (4 + 4)
        return false
      end

      fbe_struct_type = read_uint32(fbe_struct_offset + 4)
      if fbe_verify_type && (fbe_struct_type != fbe_type)
        return false
      end

      @_buffer.shift(fbe_struct_offset)
      fbe_result = verify_fields(fbe_struct_size)
      @_buffer.unshift(fbe_struct_offset)
      fbe_result
    end

    # Check if the struct fields are valid
    def verify_fields(fbe_struct_size)
      fbe_current_size = 4 + 4

      if (fbe_current_size + v.fbe_size) > fbe_struct_size
        return true
      end
      unless v.verify
        return false
      end
      # noinspection RubyUnusedLocalVariable
      fbe_current_size += v.fbe_size

      true
    end

    # Get the struct value (begin phase)
    def get_begin
      if (@_buffer.offset + fbe_offset + fbe_size) > @_buffer.size
        return 0
      end

      fbe_struct_offset = read_uint32(fbe_offset)
      if (fbe_struct_offset == 0) || ((@_buffer.offset + fbe_struct_offset + 4 + 4) > @_buffer.size)
        return 0
      end

      fbe_struct_size = read_uint32(fbe_struct_offset)
      if fbe_struct_size < (4 + 4)
        return 0
      end

      @_buffer.shift(fbe_struct_offset)
      fbe_struct_offset
    end

    # Get the struct value (end phase)
    def get_end(fbe_begin)
      @_buffer.unshift(fbe_begin)
    end

    # Get the struct value
    def get(fbe_value = Value.new)
      fbe_begin = get_begin
      if fbe_begin == 0
        return fbe_value
      end

      fbe_struct_size = read_uint32(0)
      get_fields(fbe_value, fbe_struct_size)
      get_end(fbe_begin)
      fbe_value
    end

    # Get the struct fields values
    def get_fields(fbe_value, fbe_struct_size)
      fbe_current_size = 4 + 4

      if (fbe_current_size + v.fbe_size) <= fbe_struct_size
        fbe_value.v = v.get
      else
        fbe_value.v = V.new
      end
      # noinspection RubyUnusedLocalVariable
      fbe_current_size += v.fbe_size
    end

    # Set the struct value (begin phase)
    def set_begin
      if (@_buffer.offset + fbe_offset + fbe_size) > @_buffer.size
        return 0
      end

      fbe_struct_size = fbe_body
      fbe_struct_offset = @_buffer.allocate(fbe_struct_size) - @_buffer.offset
      if (fbe_struct_offset <= 0) || ((@_buffer.offset + fbe_struct_offset + fbe_struct_size) > @_buffer.size)
        return 0
      end

      write_uint32(fbe_offset, fbe_struct_offset)
      write_uint32(fbe_struct_offset, fbe_struct_size)
      write_uint32(fbe_struct_offset + 4, fbe_type)

      @_buffer.shift(fbe_struct_offset)
      fbe_struct_offset
    end

    # Set the struct value (end phase)
    def set_end(fbe_begin)
      @_buffer.unshift(fbe_begin)
    end

    # Set the struct value
    def set(fbe_value)
      fbe_begin = set_begin
      if fbe_begin == 0
        return
      end

      set_fields(fbe_value)
      set_end(fbe_begin)
    end

    # Set the struct fields values
    def set_fields(fbe_value)
      v.set(fbe_value.v)
    end
  end

  # Fast Binary Encoding Value model
  class ValueModel < FBE::Model
    def initialize(buffer = FBE::WriteBuffer.new)
      super(buffer)
      @_model = FieldModelValue.new(self.buffer, 4)
    end

    def model
      @_model
    end

    # Get the model size
    def fbe_size
      @_model.fbe_size + @_model.fbe_extra
    end

    # Get the model type
    def fbe_type
      TYPE
    end

    TYPE = FieldModelValue::TYPE

    # Is the struct value valid?
    def valid?
      verify
    end

    # Check if the struct value is valid
    def verify
      if (buffer.offset + @_model.fbe_offset - 4) > buffer.size
        return false
      end

      fbe_full_size = read_uint32(@_model.fbe_offset - 4)
      if fbe_full_size < @_model.fbe_size
        return false
      end

      @_model.verify
    end

    # Create a new model (begin phase)
    def create_begin
      buffer.allocate(4 + @_model.fbe_size)
    end

    # Create a new model (end phase)
    def create_end(fbe_begin)
      fbe_end = buffer.size
      fbe_full_size = fbe_end - fbe_begin
      write_uint32(@_model.fbe_offset - 4, fbe_full_size)
      fbe_full_size
    end

    # Serialize the struct value
    def serialize(value)
      fbe_begin = create_begin
      @_model.set(value)
      create_end(fbe_begin)
    end

    # Deserialize the struct value
    def deserialize(value = Value.new)
      if (buffer.offset + @_model.fbe_offset - 4) > buffer.size
        [Value.new, 0]
      end

      fbe_full_size = read_uint32(@_model.fbe_offset - 4)
      if fbe_full_size < @_model.fbe_size
        [Value.new, 0]
      end

      @_model.get(value)
      [value, fbe_full_size]
    end

    # Move to the next struct value
    def next(prev)
      @_model.fbe_shift(prev)
    end
  end

  # noinspection RubyResolve, RubyScope, RubyTooManyInstanceVariablesInspection, RubyTooManyMethodsInspection
  class FinalModelValue < FBE::FinalModel
    def initialize(buffer, offset)
      super(buffer, offset)
      @_v = FinalModelV.new(self.buffer, 0)
    end

    def v
      @_v
    end

    # Get the allocation size
    def fbe_allocation_size(fbe_value)
      0 \
        + v.fbe_allocation_size(fbe_value.v) \
    end

    # Get the final type
    def fbe_type
      TYPE
    end

    TYPE = 2

    # Is the struct value valid?
    def valid?
      verify
    end

    # Check if the struct value is valid
    def verify
      @_buffer.shift(fbe_offset)
      fbe_result = verify_fields
      @_buffer.unshift(fbe_offset)
      fbe_result
    end

    # Check if the struct fields are valid
    def verify_fields
      fbe_current_offset = 0

      v.fbe_offset = fbe_current_offset
      fbe_field_size = v.verify
      if fbe_field_size == FBE::Integer::MAX
        return FBE::Integer::MAX
      end
      fbe_current_offset += fbe_field_size

      # noinspection RubyUnnecessaryReturnValue
      fbe_current_offset
    end

    # Get the struct value
    def get(fbe_value = Value.new)
      @_buffer.shift(fbe_offset)
      fbe_size = get_fields(fbe_value)
      @_buffer.unshift(fbe_offset)
      [fbe_value, fbe_size]
    end

    # Get the struct fields values
    def get_fields(fbe_value)
      fbe_current_offset = 0
      fbe_current_size = 0

      v.fbe_offset = fbe_current_offset
      fbe_result = v.get
      fbe_value.v = fbe_result[0]
      # noinspection RubyUnusedLocalVariable
      fbe_current_offset += fbe_result[1]
      fbe_current_size += fbe_result[1]

      # noinspection RubyUnnecessaryReturnValue
      fbe_current_size
    end

    # Set the struct value
    def set(fbe_value)
      @_buffer.shift(fbe_offset)
      fbe_size = set_fields(fbe_value)
      @_buffer.unshift(fbe_offset)
      fbe_size
    end

    # Set the struct fields values
    def set_fields(fbe_value)
      fbe_current_offset = 0
      fbe_current_size = 0

      v.fbe_offset = fbe_current_offset
      fbe_field_size = v.set(fbe_value.v)
      # noinspection RubyUnusedLocalVariable
      fbe_current_offset += fbe_field_size
      fbe_current_size += fbe_field_size

      # noinspection RubyUnnecessaryReturnValue
      fbe_current_size
    end
  end

  # Fast Binary Encoding Value final model
  class ValueFinalModel < FBE::Model
    def initialize(buffer = FBE::WriteBuffer.new)
      super(buffer)
      @_model = FinalModelValue.new(self.buffer, 8)
    end

    # Get the model type
    def fbe_type
      TYPE
    end

    TYPE = FinalModelValue::TYPE

    # Is the struct value valid?
    def valid?
      verify
    end

    # Check if the struct value is valid
    def verify
      if (buffer.offset + @_model.fbe_offset) > buffer.size
        return false
      end

      fbe_struct_size = read_uint32(@_model.fbe_offset - 8)
      fbe_struct_type = read_uint32(@_model.fbe_offset - 4)
      if (fbe_struct_size <= 0) or (fbe_struct_type != fbe_type)
        return false
      end

      (8 + @_model.verify) == fbe_struct_size
    end

    # Serialize the struct value
    def serialize(value)
      fbe_initial_size = buffer.size

      fbe_struct_type = fbe_type
      fbe_struct_size = 8 + @_model.fbe_allocation_size(value)
      fbe_struct_offset = buffer.allocate(fbe_struct_size) - buffer.offset
      if (buffer.offset + fbe_struct_offset + fbe_struct_size) > buffer.size
        return 0
      end

      fbe_struct_size = 8 + @_model.set(value)
      buffer.resize(fbe_initial_size + fbe_struct_size)

      write_uint32(@_model.fbe_offset - 8, fbe_struct_size)
      write_uint32(@_model.fbe_offset - 4, fbe_struct_type)

      fbe_struct_size
    end

    # Deserialize the struct value
    def deserialize(value = Value.new)
      if (buffer.offset + @_model.fbe_offset) > buffer.size
        [Value.new, 0]
      end

      fbe_struct_size = read_uint32(@_model.fbe_offset - 8)
      fbe_struct_type = read_uint32(@_model.fbe_offset - 4)
      if (fbe_struct_size <= 0) || (fbe_struct_type != fbe_type)
        [Value.new, 8]
      end

      fbe_result = @_model.get(value)
      [fbe_result[0], (8 + fbe_result[1])]
    end

    # Move to the next struct value
    def next(prev)
      @_model.fbe_shift(prev)
    end
  end

  # Fast Binary Encoding Variants protocol version
  class ProtocolVersion
    # Protocol major version
    MAJOR = 0
    # Protocol minor version
    MINOR = 0
  end

  # Fast Binary Encoding Variants sender
  # noinspection RubyResolve, RubyScope, RubyTooManyInstanceVariablesInspection, RubyTooManyMethodsInspection
  class Sender < FBE::Sender
    def initialize(buffer = FBE::WriteBuffer.new)
      super(buffer, false)
    end

    # Sender models accessors

    # Send methods

    def send(value)
      0
    end

    protected

    # Send message handler
    def on_send(buffer, offset, size)
      raise NotImplementedError, "Variants.Sender.on_send() not implemented!"
    end
  end

  # Fast Binary Encoding Variants receiver
  # noinspection RubyResolve, RubyScope, RubyTooManyInstanceVariablesInspection, RubyTooManyMethodsInspection
  class Receiver < FBE::Receiver
    def initialize(buffer = FBE::WriteBuffer.new)
      super(buffer, false)
    end

    protected

    # Receive handlers

    public

    def on_receive(type, buffer, offset, size)

      false
    end
  end

  # Fast Binary Encoding Variants proxy
  # noinspection RubyResolve, RubyScope, RubyTooManyInstanceVariablesInspection, RubyTooManyMethodsInspection
  class Proxy < FBE::Receiver
    def initialize(buffer = FBE::WriteBuffer.new)
      super(buffer, false)
    end

    protected

    # Receive handlers

    public

    def on_receive(type, buffer, offset, size)

      false
    end
  end

  # Fast Binary Encoding Variants final sender
  # noinspection RubyResolve, RubyScope, RubyTooManyInstanceVariablesInspection, RubyTooManyMethodsInspection
  class FinalSender < FBE::Sender
    def initialize(buffer = FBE::WriteBuffer.new)
      super(buffer, true)
    end

    # Sender models accessors

    # Send methods

    def send(value)
      0
    end

    protected

    # Send message handler
    def on_send(buffer, offset, size)
      raise NotImplementedError, "Variants.Sender.on_send() not implemented!"
    end
  end

  # Fast Binary Encoding Variants final receiver
  # noinspection RubyResolve, RubyScope, RubyTooManyInstanceVariablesInspection, RubyTooManyMethodsInspection
  class FinalReceiver < FBE::Receiver
    def initialize(buffer = FBE::WriteBuffer.new)
      super(buffer, true)
    end

    protected

    # Receive handlers

    public

    def on_receive(type, buffer, offset, size)

      false
    end
  end

end

# rubocop:enable all
