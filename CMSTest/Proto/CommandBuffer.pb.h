// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommandBuffer.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommandBuffer_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommandBuffer_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "SecurityCommandBuffer.pb.h"
#include "RawInputCommandBuffer.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommandBuffer_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommandBuffer_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommandBuffer_2eproto;
namespace usx {
namespace geofactions {
class CommandBuffer;
class CommandBufferDefaultTypeInternal;
extern CommandBufferDefaultTypeInternal _CommandBuffer_default_instance_;
}  // namespace geofactions
}  // namespace usx
PROTOBUF_NAMESPACE_OPEN
template<> ::usx::geofactions::CommandBuffer* Arena::CreateMaybeMessage<::usx::geofactions::CommandBuffer>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace usx {
namespace geofactions {

enum CommandBuffer_CommandBufferType : int {
  CommandBuffer_CommandBufferType_UNKNOWN = 0,
  CommandBuffer_CommandBufferType_SECURITY = 1,
  CommandBuffer_CommandBufferType_RAWINPUT = 2
};
bool CommandBuffer_CommandBufferType_IsValid(int value);
constexpr CommandBuffer_CommandBufferType CommandBuffer_CommandBufferType_CommandBufferType_MIN = CommandBuffer_CommandBufferType_UNKNOWN;
constexpr CommandBuffer_CommandBufferType CommandBuffer_CommandBufferType_CommandBufferType_MAX = CommandBuffer_CommandBufferType_RAWINPUT;
constexpr int CommandBuffer_CommandBufferType_CommandBufferType_ARRAYSIZE = CommandBuffer_CommandBufferType_CommandBufferType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CommandBuffer_CommandBufferType_descriptor();
template<typename T>
inline const std::string& CommandBuffer_CommandBufferType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CommandBuffer_CommandBufferType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CommandBuffer_CommandBufferType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CommandBuffer_CommandBufferType_descriptor(), enum_t_value);
}
inline bool CommandBuffer_CommandBufferType_Parse(
    const std::string& name, CommandBuffer_CommandBufferType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CommandBuffer_CommandBufferType>(
    CommandBuffer_CommandBufferType_descriptor(), name, value);
}
// ===================================================================

class CommandBuffer PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:usx.geofactions.CommandBuffer) */ {
 public:
  inline CommandBuffer() : CommandBuffer(nullptr) {};
  virtual ~CommandBuffer();

  CommandBuffer(const CommandBuffer& from);
  CommandBuffer(CommandBuffer&& from) noexcept
    : CommandBuffer() {
    *this = ::std::move(from);
  }

  inline CommandBuffer& operator=(const CommandBuffer& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommandBuffer& operator=(CommandBuffer&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CommandBuffer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CommandBuffer* internal_default_instance() {
    return reinterpret_cast<const CommandBuffer*>(
               &_CommandBuffer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommandBuffer& a, CommandBuffer& b) {
    a.Swap(&b);
  }
  inline void Swap(CommandBuffer* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommandBuffer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommandBuffer* New() const final {
    return CreateMaybeMessage<CommandBuffer>(nullptr);
  }

  CommandBuffer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommandBuffer>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CommandBuffer& from);
  void MergeFrom(const CommandBuffer& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CommandBuffer* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "usx.geofactions.CommandBuffer";
  }
  protected:
  explicit CommandBuffer(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CommandBuffer_2eproto);
    return ::descriptor_table_CommandBuffer_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef CommandBuffer_CommandBufferType CommandBufferType;
  static constexpr CommandBufferType UNKNOWN =
    CommandBuffer_CommandBufferType_UNKNOWN;
  static constexpr CommandBufferType SECURITY =
    CommandBuffer_CommandBufferType_SECURITY;
  static constexpr CommandBufferType RAWINPUT =
    CommandBuffer_CommandBufferType_RAWINPUT;
  static inline bool CommandBufferType_IsValid(int value) {
    return CommandBuffer_CommandBufferType_IsValid(value);
  }
  static constexpr CommandBufferType CommandBufferType_MIN =
    CommandBuffer_CommandBufferType_CommandBufferType_MIN;
  static constexpr CommandBufferType CommandBufferType_MAX =
    CommandBuffer_CommandBufferType_CommandBufferType_MAX;
  static constexpr int CommandBufferType_ARRAYSIZE =
    CommandBuffer_CommandBufferType_CommandBufferType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CommandBufferType_descriptor() {
    return CommandBuffer_CommandBufferType_descriptor();
  }
  template<typename T>
  static inline const std::string& CommandBufferType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CommandBufferType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CommandBufferType_Name.");
    return CommandBuffer_CommandBufferType_Name(enum_t_value);
  }
  static inline bool CommandBufferType_Parse(const std::string& name,
      CommandBufferType* value) {
    return CommandBuffer_CommandBufferType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kSecurityCommandBufferFieldNumber = 2,
    kRawInputCommandBufferFieldNumber = 3,
    kTypeFieldNumber = 1,
  };
  // optional .usx.geofactions.SecurityCommandBuffer securityCommandBuffer = 2;
  bool has_securitycommandbuffer() const;
  private:
  bool _internal_has_securitycommandbuffer() const;
  public:
  void clear_securitycommandbuffer();
  const ::usx::geofactions::SecurityCommandBuffer& securitycommandbuffer() const;
  ::usx::geofactions::SecurityCommandBuffer* release_securitycommandbuffer();
  ::usx::geofactions::SecurityCommandBuffer* mutable_securitycommandbuffer();
  void set_allocated_securitycommandbuffer(::usx::geofactions::SecurityCommandBuffer* securitycommandbuffer);
  private:
  const ::usx::geofactions::SecurityCommandBuffer& _internal_securitycommandbuffer() const;
  ::usx::geofactions::SecurityCommandBuffer* _internal_mutable_securitycommandbuffer();
  public:
  void unsafe_arena_set_allocated_securitycommandbuffer(
      ::usx::geofactions::SecurityCommandBuffer* securitycommandbuffer);
  ::usx::geofactions::SecurityCommandBuffer* unsafe_arena_release_securitycommandbuffer();

  // optional .usx.geofactions.RawInputCommandBuffer rawInputCommandBuffer = 3;
  bool has_rawinputcommandbuffer() const;
  private:
  bool _internal_has_rawinputcommandbuffer() const;
  public:
  void clear_rawinputcommandbuffer();
  const ::usx::geofactions::RawInputCommandBuffer& rawinputcommandbuffer() const;
  ::usx::geofactions::RawInputCommandBuffer* release_rawinputcommandbuffer();
  ::usx::geofactions::RawInputCommandBuffer* mutable_rawinputcommandbuffer();
  void set_allocated_rawinputcommandbuffer(::usx::geofactions::RawInputCommandBuffer* rawinputcommandbuffer);
  private:
  const ::usx::geofactions::RawInputCommandBuffer& _internal_rawinputcommandbuffer() const;
  ::usx::geofactions::RawInputCommandBuffer* _internal_mutable_rawinputcommandbuffer();
  public:
  void unsafe_arena_set_allocated_rawinputcommandbuffer(
      ::usx::geofactions::RawInputCommandBuffer* rawinputcommandbuffer);
  ::usx::geofactions::RawInputCommandBuffer* unsafe_arena_release_rawinputcommandbuffer();

  // required .usx.geofactions.CommandBuffer.CommandBufferType type = 1 [default = UNKNOWN];
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::usx::geofactions::CommandBuffer_CommandBufferType type() const;
  void set_type(::usx::geofactions::CommandBuffer_CommandBufferType value);
  private:
  ::usx::geofactions::CommandBuffer_CommandBufferType _internal_type() const;
  void _internal_set_type(::usx::geofactions::CommandBuffer_CommandBufferType value);
  public:

  // @@protoc_insertion_point(class_scope:usx.geofactions.CommandBuffer)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::usx::geofactions::SecurityCommandBuffer* securitycommandbuffer_;
  ::usx::geofactions::RawInputCommandBuffer* rawinputcommandbuffer_;
  int type_;
  friend struct ::TableStruct_CommandBuffer_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommandBuffer

// required .usx.geofactions.CommandBuffer.CommandBufferType type = 1 [default = UNKNOWN];
inline bool CommandBuffer::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool CommandBuffer::has_type() const {
  return _internal_has_type();
}
inline void CommandBuffer::clear_type() {
  type_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::usx::geofactions::CommandBuffer_CommandBufferType CommandBuffer::_internal_type() const {
  return static_cast< ::usx::geofactions::CommandBuffer_CommandBufferType >(type_);
}
inline ::usx::geofactions::CommandBuffer_CommandBufferType CommandBuffer::type() const {
  // @@protoc_insertion_point(field_get:usx.geofactions.CommandBuffer.type)
  return _internal_type();
}
inline void CommandBuffer::_internal_set_type(::usx::geofactions::CommandBuffer_CommandBufferType value) {
  assert(::usx::geofactions::CommandBuffer_CommandBufferType_IsValid(value));
  _has_bits_[0] |= 0x00000004u;
  type_ = value;
}
inline void CommandBuffer::set_type(::usx::geofactions::CommandBuffer_CommandBufferType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:usx.geofactions.CommandBuffer.type)
}

// optional .usx.geofactions.SecurityCommandBuffer securityCommandBuffer = 2;
inline bool CommandBuffer::_internal_has_securitycommandbuffer() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || securitycommandbuffer_ != nullptr);
  return value;
}
inline bool CommandBuffer::has_securitycommandbuffer() const {
  return _internal_has_securitycommandbuffer();
}
inline const ::usx::geofactions::SecurityCommandBuffer& CommandBuffer::_internal_securitycommandbuffer() const {
  const ::usx::geofactions::SecurityCommandBuffer* p = securitycommandbuffer_;
  return p != nullptr ? *p : *reinterpret_cast<const ::usx::geofactions::SecurityCommandBuffer*>(
      &::usx::geofactions::_SecurityCommandBuffer_default_instance_);
}
inline const ::usx::geofactions::SecurityCommandBuffer& CommandBuffer::securitycommandbuffer() const {
  // @@protoc_insertion_point(field_get:usx.geofactions.CommandBuffer.securityCommandBuffer)
  return _internal_securitycommandbuffer();
}
inline void CommandBuffer::unsafe_arena_set_allocated_securitycommandbuffer(
    ::usx::geofactions::SecurityCommandBuffer* securitycommandbuffer) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(securitycommandbuffer_);
  }
  securitycommandbuffer_ = securitycommandbuffer;
  if (securitycommandbuffer) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:usx.geofactions.CommandBuffer.securityCommandBuffer)
}
inline ::usx::geofactions::SecurityCommandBuffer* CommandBuffer::release_securitycommandbuffer() {
  auto temp = unsafe_arena_release_securitycommandbuffer();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::usx::geofactions::SecurityCommandBuffer* CommandBuffer::unsafe_arena_release_securitycommandbuffer() {
  // @@protoc_insertion_point(field_release:usx.geofactions.CommandBuffer.securityCommandBuffer)
  _has_bits_[0] &= ~0x00000001u;
  ::usx::geofactions::SecurityCommandBuffer* temp = securitycommandbuffer_;
  securitycommandbuffer_ = nullptr;
  return temp;
}
inline ::usx::geofactions::SecurityCommandBuffer* CommandBuffer::_internal_mutable_securitycommandbuffer() {
  _has_bits_[0] |= 0x00000001u;
  if (securitycommandbuffer_ == nullptr) {
    auto* p = CreateMaybeMessage<::usx::geofactions::SecurityCommandBuffer>(GetArena());
    securitycommandbuffer_ = p;
  }
  return securitycommandbuffer_;
}
inline ::usx::geofactions::SecurityCommandBuffer* CommandBuffer::mutable_securitycommandbuffer() {
  // @@protoc_insertion_point(field_mutable:usx.geofactions.CommandBuffer.securityCommandBuffer)
  return _internal_mutable_securitycommandbuffer();
}
inline void CommandBuffer::set_allocated_securitycommandbuffer(::usx::geofactions::SecurityCommandBuffer* securitycommandbuffer) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(securitycommandbuffer_);
  }
  if (securitycommandbuffer) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(securitycommandbuffer)->GetArena();
    if (message_arena != submessage_arena) {
      securitycommandbuffer = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, securitycommandbuffer, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  securitycommandbuffer_ = securitycommandbuffer;
  // @@protoc_insertion_point(field_set_allocated:usx.geofactions.CommandBuffer.securityCommandBuffer)
}

// optional .usx.geofactions.RawInputCommandBuffer rawInputCommandBuffer = 3;
inline bool CommandBuffer::_internal_has_rawinputcommandbuffer() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || rawinputcommandbuffer_ != nullptr);
  return value;
}
inline bool CommandBuffer::has_rawinputcommandbuffer() const {
  return _internal_has_rawinputcommandbuffer();
}
inline const ::usx::geofactions::RawInputCommandBuffer& CommandBuffer::_internal_rawinputcommandbuffer() const {
  const ::usx::geofactions::RawInputCommandBuffer* p = rawinputcommandbuffer_;
  return p != nullptr ? *p : *reinterpret_cast<const ::usx::geofactions::RawInputCommandBuffer*>(
      &::usx::geofactions::_RawInputCommandBuffer_default_instance_);
}
inline const ::usx::geofactions::RawInputCommandBuffer& CommandBuffer::rawinputcommandbuffer() const {
  // @@protoc_insertion_point(field_get:usx.geofactions.CommandBuffer.rawInputCommandBuffer)
  return _internal_rawinputcommandbuffer();
}
inline void CommandBuffer::unsafe_arena_set_allocated_rawinputcommandbuffer(
    ::usx::geofactions::RawInputCommandBuffer* rawinputcommandbuffer) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(rawinputcommandbuffer_);
  }
  rawinputcommandbuffer_ = rawinputcommandbuffer;
  if (rawinputcommandbuffer) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:usx.geofactions.CommandBuffer.rawInputCommandBuffer)
}
inline ::usx::geofactions::RawInputCommandBuffer* CommandBuffer::release_rawinputcommandbuffer() {
  auto temp = unsafe_arena_release_rawinputcommandbuffer();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::usx::geofactions::RawInputCommandBuffer* CommandBuffer::unsafe_arena_release_rawinputcommandbuffer() {
  // @@protoc_insertion_point(field_release:usx.geofactions.CommandBuffer.rawInputCommandBuffer)
  _has_bits_[0] &= ~0x00000002u;
  ::usx::geofactions::RawInputCommandBuffer* temp = rawinputcommandbuffer_;
  rawinputcommandbuffer_ = nullptr;
  return temp;
}
inline ::usx::geofactions::RawInputCommandBuffer* CommandBuffer::_internal_mutable_rawinputcommandbuffer() {
  _has_bits_[0] |= 0x00000002u;
  if (rawinputcommandbuffer_ == nullptr) {
    auto* p = CreateMaybeMessage<::usx::geofactions::RawInputCommandBuffer>(GetArena());
    rawinputcommandbuffer_ = p;
  }
  return rawinputcommandbuffer_;
}
inline ::usx::geofactions::RawInputCommandBuffer* CommandBuffer::mutable_rawinputcommandbuffer() {
  // @@protoc_insertion_point(field_mutable:usx.geofactions.CommandBuffer.rawInputCommandBuffer)
  return _internal_mutable_rawinputcommandbuffer();
}
inline void CommandBuffer::set_allocated_rawinputcommandbuffer(::usx::geofactions::RawInputCommandBuffer* rawinputcommandbuffer) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(rawinputcommandbuffer_);
  }
  if (rawinputcommandbuffer) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(rawinputcommandbuffer)->GetArena();
    if (message_arena != submessage_arena) {
      rawinputcommandbuffer = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, rawinputcommandbuffer, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  rawinputcommandbuffer_ = rawinputcommandbuffer;
  // @@protoc_insertion_point(field_set_allocated:usx.geofactions.CommandBuffer.rawInputCommandBuffer)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace geofactions
}  // namespace usx

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::usx::geofactions::CommandBuffer_CommandBufferType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::usx::geofactions::CommandBuffer_CommandBufferType>() {
  return ::usx::geofactions::CommandBuffer_CommandBufferType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommandBuffer_2eproto
