// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EntityGameEventBuffer.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_EntityGameEventBuffer_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_EntityGameEventBuffer_2eproto

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
#include "box2d.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_EntityGameEventBuffer_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_EntityGameEventBuffer_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_EntityGameEventBuffer_2eproto;
namespace usx {
namespace geofactions {
class EntityGameEventBuffer;
class EntityGameEventBufferDefaultTypeInternal;
extern EntityGameEventBufferDefaultTypeInternal _EntityGameEventBuffer_default_instance_;
}  // namespace geofactions
}  // namespace usx
PROTOBUF_NAMESPACE_OPEN
template<> ::usx::geofactions::EntityGameEventBuffer* Arena::CreateMaybeMessage<::usx::geofactions::EntityGameEventBuffer>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace usx {
namespace geofactions {

enum EntityGameEventBuffer_EntityGameEventBufferType : int {
  EntityGameEventBuffer_EntityGameEventBufferType_UNKNOWN = 0,
  EntityGameEventBuffer_EntityGameEventBufferType_CREATE = 1,
  EntityGameEventBuffer_EntityGameEventBufferType_RETRIEVE = 2,
  EntityGameEventBuffer_EntityGameEventBufferType_UPDATE = 3,
  EntityGameEventBuffer_EntityGameEventBufferType_DESTROY = 4
};
bool EntityGameEventBuffer_EntityGameEventBufferType_IsValid(int value);
constexpr EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_MIN = EntityGameEventBuffer_EntityGameEventBufferType_UNKNOWN;
constexpr EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_MAX = EntityGameEventBuffer_EntityGameEventBufferType_DESTROY;
constexpr int EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_ARRAYSIZE = EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EntityGameEventBuffer_EntityGameEventBufferType_descriptor();
template<typename T>
inline const std::string& EntityGameEventBuffer_EntityGameEventBufferType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EntityGameEventBuffer_EntityGameEventBufferType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EntityGameEventBuffer_EntityGameEventBufferType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EntityGameEventBuffer_EntityGameEventBufferType_descriptor(), enum_t_value);
}
inline bool EntityGameEventBuffer_EntityGameEventBufferType_Parse(
    const std::string& name, EntityGameEventBuffer_EntityGameEventBufferType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EntityGameEventBuffer_EntityGameEventBufferType>(
    EntityGameEventBuffer_EntityGameEventBufferType_descriptor(), name, value);
}
// ===================================================================

class EntityGameEventBuffer PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:usx.geofactions.EntityGameEventBuffer) */ {
 public:
  inline EntityGameEventBuffer() : EntityGameEventBuffer(nullptr) {};
  virtual ~EntityGameEventBuffer();

  EntityGameEventBuffer(const EntityGameEventBuffer& from);
  EntityGameEventBuffer(EntityGameEventBuffer&& from) noexcept
    : EntityGameEventBuffer() {
    *this = ::std::move(from);
  }

  inline EntityGameEventBuffer& operator=(const EntityGameEventBuffer& from) {
    CopyFrom(from);
    return *this;
  }
  inline EntityGameEventBuffer& operator=(EntityGameEventBuffer&& from) noexcept {
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
  static const EntityGameEventBuffer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EntityGameEventBuffer* internal_default_instance() {
    return reinterpret_cast<const EntityGameEventBuffer*>(
               &_EntityGameEventBuffer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(EntityGameEventBuffer& a, EntityGameEventBuffer& b) {
    a.Swap(&b);
  }
  inline void Swap(EntityGameEventBuffer* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(EntityGameEventBuffer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline EntityGameEventBuffer* New() const final {
    return CreateMaybeMessage<EntityGameEventBuffer>(nullptr);
  }

  EntityGameEventBuffer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<EntityGameEventBuffer>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const EntityGameEventBuffer& from);
  void MergeFrom(const EntityGameEventBuffer& from);
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
  void InternalSwap(EntityGameEventBuffer* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "usx.geofactions.EntityGameEventBuffer";
  }
  protected:
  explicit EntityGameEventBuffer(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_EntityGameEventBuffer_2eproto);
    return ::descriptor_table_EntityGameEventBuffer_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBufferType;
  static constexpr EntityGameEventBufferType UNKNOWN =
    EntityGameEventBuffer_EntityGameEventBufferType_UNKNOWN;
  static constexpr EntityGameEventBufferType CREATE =
    EntityGameEventBuffer_EntityGameEventBufferType_CREATE;
  static constexpr EntityGameEventBufferType RETRIEVE =
    EntityGameEventBuffer_EntityGameEventBufferType_RETRIEVE;
  static constexpr EntityGameEventBufferType UPDATE =
    EntityGameEventBuffer_EntityGameEventBufferType_UPDATE;
  static constexpr EntityGameEventBufferType DESTROY =
    EntityGameEventBuffer_EntityGameEventBufferType_DESTROY;
  static inline bool EntityGameEventBufferType_IsValid(int value) {
    return EntityGameEventBuffer_EntityGameEventBufferType_IsValid(value);
  }
  static constexpr EntityGameEventBufferType EntityGameEventBufferType_MIN =
    EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_MIN;
  static constexpr EntityGameEventBufferType EntityGameEventBufferType_MAX =
    EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_MAX;
  static constexpr int EntityGameEventBufferType_ARRAYSIZE =
    EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  EntityGameEventBufferType_descriptor() {
    return EntityGameEventBuffer_EntityGameEventBufferType_descriptor();
  }
  template<typename T>
  static inline const std::string& EntityGameEventBufferType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, EntityGameEventBufferType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function EntityGameEventBufferType_Name.");
    return EntityGameEventBuffer_EntityGameEventBufferType_Name(enum_t_value);
  }
  static inline bool EntityGameEventBufferType_Parse(const std::string& name,
      EntityGameEventBufferType* value) {
    return EntityGameEventBuffer_EntityGameEventBufferType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kUUIDFieldNumber = 3,
    kBodyFieldNumber = 4,
    kEntityTagFieldNumber = 2,
    kTypeFieldNumber = 1,
  };
  // optional string UUID = 3;
  bool has_uuid() const;
  private:
  bool _internal_has_uuid() const;
  public:
  void clear_uuid();
  const std::string& uuid() const;
  void set_uuid(const std::string& value);
  void set_uuid(std::string&& value);
  void set_uuid(const char* value);
  void set_uuid(const char* value, size_t size);
  std::string* mutable_uuid();
  std::string* release_uuid();
  void set_allocated_uuid(std::string* uuid);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_uuid();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_uuid(
      std::string* uuid);
  private:
  const std::string& _internal_uuid() const;
  void _internal_set_uuid(const std::string& value);
  std::string* _internal_mutable_uuid();
  public:

  // optional .box2d.PbBody body = 4;
  bool has_body() const;
  private:
  bool _internal_has_body() const;
  public:
  void clear_body();
  const ::box2d::PbBody& body() const;
  ::box2d::PbBody* release_body();
  ::box2d::PbBody* mutable_body();
  void set_allocated_body(::box2d::PbBody* body);
  private:
  const ::box2d::PbBody& _internal_body() const;
  ::box2d::PbBody* _internal_mutable_body();
  public:
  void unsafe_arena_set_allocated_body(
      ::box2d::PbBody* body);
  ::box2d::PbBody* unsafe_arena_release_body();

  // required uint64 entityTag = 2;
  bool has_entitytag() const;
  private:
  bool _internal_has_entitytag() const;
  public:
  void clear_entitytag();
  ::PROTOBUF_NAMESPACE_ID::uint64 entitytag() const;
  void set_entitytag(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_entitytag() const;
  void _internal_set_entitytag(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // required .usx.geofactions.EntityGameEventBuffer.EntityGameEventBufferType type = 1 [default = UNKNOWN];
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType type() const;
  void set_type(::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType value);
  private:
  ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType _internal_type() const;
  void _internal_set_type(::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType value);
  public:

  // @@protoc_insertion_point(class_scope:usx.geofactions.EntityGameEventBuffer)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uuid_;
  ::box2d::PbBody* body_;
  ::PROTOBUF_NAMESPACE_ID::uint64 entitytag_;
  int type_;
  friend struct ::TableStruct_EntityGameEventBuffer_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EntityGameEventBuffer

// required .usx.geofactions.EntityGameEventBuffer.EntityGameEventBufferType type = 1 [default = UNKNOWN];
inline bool EntityGameEventBuffer::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool EntityGameEventBuffer::has_type() const {
  return _internal_has_type();
}
inline void EntityGameEventBuffer::clear_type() {
  type_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer::_internal_type() const {
  return static_cast< ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType >(type_);
}
inline ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer::type() const {
  // @@protoc_insertion_point(field_get:usx.geofactions.EntityGameEventBuffer.type)
  return _internal_type();
}
inline void EntityGameEventBuffer::_internal_set_type(::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType value) {
  assert(::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType_IsValid(value));
  _has_bits_[0] |= 0x00000008u;
  type_ = value;
}
inline void EntityGameEventBuffer::set_type(::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:usx.geofactions.EntityGameEventBuffer.type)
}

// required uint64 entityTag = 2;
inline bool EntityGameEventBuffer::_internal_has_entitytag() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool EntityGameEventBuffer::has_entitytag() const {
  return _internal_has_entitytag();
}
inline void EntityGameEventBuffer::clear_entitytag() {
  entitytag_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 EntityGameEventBuffer::_internal_entitytag() const {
  return entitytag_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 EntityGameEventBuffer::entitytag() const {
  // @@protoc_insertion_point(field_get:usx.geofactions.EntityGameEventBuffer.entityTag)
  return _internal_entitytag();
}
inline void EntityGameEventBuffer::_internal_set_entitytag(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000004u;
  entitytag_ = value;
}
inline void EntityGameEventBuffer::set_entitytag(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_entitytag(value);
  // @@protoc_insertion_point(field_set:usx.geofactions.EntityGameEventBuffer.entityTag)
}

// optional string UUID = 3;
inline bool EntityGameEventBuffer::_internal_has_uuid() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool EntityGameEventBuffer::has_uuid() const {
  return _internal_has_uuid();
}
inline void EntityGameEventBuffer::clear_uuid() {
  uuid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& EntityGameEventBuffer::uuid() const {
  // @@protoc_insertion_point(field_get:usx.geofactions.EntityGameEventBuffer.UUID)
  return _internal_uuid();
}
inline void EntityGameEventBuffer::set_uuid(const std::string& value) {
  _internal_set_uuid(value);
  // @@protoc_insertion_point(field_set:usx.geofactions.EntityGameEventBuffer.UUID)
}
inline std::string* EntityGameEventBuffer::mutable_uuid() {
  // @@protoc_insertion_point(field_mutable:usx.geofactions.EntityGameEventBuffer.UUID)
  return _internal_mutable_uuid();
}
inline const std::string& EntityGameEventBuffer::_internal_uuid() const {
  return uuid_.Get();
}
inline void EntityGameEventBuffer::_internal_set_uuid(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  uuid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void EntityGameEventBuffer::set_uuid(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  uuid_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:usx.geofactions.EntityGameEventBuffer.UUID)
}
inline void EntityGameEventBuffer::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  uuid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:usx.geofactions.EntityGameEventBuffer.UUID)
}
inline void EntityGameEventBuffer::set_uuid(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  uuid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:usx.geofactions.EntityGameEventBuffer.UUID)
}
inline std::string* EntityGameEventBuffer::_internal_mutable_uuid() {
  _has_bits_[0] |= 0x00000001u;
  return uuid_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* EntityGameEventBuffer::release_uuid() {
  // @@protoc_insertion_point(field_release:usx.geofactions.EntityGameEventBuffer.UUID)
  if (!_internal_has_uuid()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return uuid_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void EntityGameEventBuffer::set_allocated_uuid(std::string* uuid) {
  if (uuid != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  uuid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), uuid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:usx.geofactions.EntityGameEventBuffer.UUID)
}
inline std::string* EntityGameEventBuffer::unsafe_arena_release_uuid() {
  // @@protoc_insertion_point(field_unsafe_arena_release:usx.geofactions.EntityGameEventBuffer.UUID)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000001u;
  return uuid_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void EntityGameEventBuffer::unsafe_arena_set_allocated_uuid(
    std::string* uuid) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (uuid != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  uuid_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      uuid, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:usx.geofactions.EntityGameEventBuffer.UUID)
}

// optional .box2d.PbBody body = 4;
inline bool EntityGameEventBuffer::_internal_has_body() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || body_ != nullptr);
  return value;
}
inline bool EntityGameEventBuffer::has_body() const {
  return _internal_has_body();
}
inline const ::box2d::PbBody& EntityGameEventBuffer::_internal_body() const {
  const ::box2d::PbBody* p = body_;
  return p != nullptr ? *p : *reinterpret_cast<const ::box2d::PbBody*>(
      &::box2d::_PbBody_default_instance_);
}
inline const ::box2d::PbBody& EntityGameEventBuffer::body() const {
  // @@protoc_insertion_point(field_get:usx.geofactions.EntityGameEventBuffer.body)
  return _internal_body();
}
inline void EntityGameEventBuffer::unsafe_arena_set_allocated_body(
    ::box2d::PbBody* body) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(body_);
  }
  body_ = body;
  if (body) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:usx.geofactions.EntityGameEventBuffer.body)
}
inline ::box2d::PbBody* EntityGameEventBuffer::release_body() {
  auto temp = unsafe_arena_release_body();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::box2d::PbBody* EntityGameEventBuffer::unsafe_arena_release_body() {
  // @@protoc_insertion_point(field_release:usx.geofactions.EntityGameEventBuffer.body)
  _has_bits_[0] &= ~0x00000002u;
  ::box2d::PbBody* temp = body_;
  body_ = nullptr;
  return temp;
}
inline ::box2d::PbBody* EntityGameEventBuffer::_internal_mutable_body() {
  _has_bits_[0] |= 0x00000002u;
  if (body_ == nullptr) {
    auto* p = CreateMaybeMessage<::box2d::PbBody>(GetArena());
    body_ = p;
  }
  return body_;
}
inline ::box2d::PbBody* EntityGameEventBuffer::mutable_body() {
  // @@protoc_insertion_point(field_mutable:usx.geofactions.EntityGameEventBuffer.body)
  return _internal_mutable_body();
}
inline void EntityGameEventBuffer::set_allocated_body(::box2d::PbBody* body) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(body_);
  }
  if (body) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(body)->GetArena();
    if (message_arena != submessage_arena) {
      body = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, body, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  body_ = body;
  // @@protoc_insertion_point(field_set_allocated:usx.geofactions.EntityGameEventBuffer.body)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace geofactions
}  // namespace usx

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType>() {
  return ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_EntityGameEventBuffer_2eproto
