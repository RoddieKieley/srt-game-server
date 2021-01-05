// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommandBuffer.proto

#include "CommandBuffer.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_RawInputCommandBuffer_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_RawInputCommandBuffer_RawInputCommandBuffer_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_SecurityCommandBuffer_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_SecurityCommandBuffer_SecurityCommandBuffer_2eproto;
namespace redhatgamedev {
namespace srt {
class CommandBufferDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CommandBuffer> _instance;
} _CommandBuffer_default_instance_;
}  // namespace srt
}  // namespace redhatgamedev
static void InitDefaultsscc_info_CommandBuffer_CommandBuffer_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::redhatgamedev::srt::_CommandBuffer_default_instance_;
    new (ptr) ::redhatgamedev::srt::CommandBuffer();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::redhatgamedev::srt::CommandBuffer::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_CommandBuffer_CommandBuffer_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_CommandBuffer_CommandBuffer_2eproto}, {
      &scc_info_SecurityCommandBuffer_SecurityCommandBuffer_2eproto.base,
      &scc_info_RawInputCommandBuffer_RawInputCommandBuffer_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_CommandBuffer_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_CommandBuffer_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_CommandBuffer_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_CommandBuffer_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::redhatgamedev::srt::CommandBuffer, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::redhatgamedev::srt::CommandBuffer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::redhatgamedev::srt::CommandBuffer, type_),
  PROTOBUF_FIELD_OFFSET(::redhatgamedev::srt::CommandBuffer, securitycommandbuffer_),
  PROTOBUF_FIELD_OFFSET(::redhatgamedev::srt::CommandBuffer, rawinputcommandbuffer_),
  2,
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::redhatgamedev::srt::CommandBuffer)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::redhatgamedev::srt::_CommandBuffer_default_instance_),
};

const char descriptor_table_protodef_CommandBuffer_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023CommandBuffer.proto\022\021redhatgamedev.srt"
  "\032\033SecurityCommandBuffer.proto\032\033RawInputC"
  "ommandBuffer.proto\"\252\002\n\rCommandBuffer\022I\n\004"
  "type\030\001 \002(\01622.redhatgamedev.srt.CommandBu"
  "ffer.CommandBufferType:\007UNKNOWN\022G\n\025secur"
  "ityCommandBuffer\030\002 \001(\0132(.redhatgamedev.s"
  "rt.SecurityCommandBuffer\022G\n\025rawInputComm"
  "andBuffer\030\003 \001(\0132(.redhatgamedev.srt.RawI"
  "nputCommandBuffer\"<\n\021CommandBufferType\022\013"
  "\n\007UNKNOWN\020\000\022\014\n\010SECURITY\020\001\022\014\n\010RAWINPUT\020\002"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_CommandBuffer_2eproto_deps[2] = {
  &::descriptor_table_RawInputCommandBuffer_2eproto,
  &::descriptor_table_SecurityCommandBuffer_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_CommandBuffer_2eproto_sccs[1] = {
  &scc_info_CommandBuffer_CommandBuffer_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_CommandBuffer_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommandBuffer_2eproto = {
  false, false, descriptor_table_protodef_CommandBuffer_2eproto, "CommandBuffer.proto", 399,
  &descriptor_table_CommandBuffer_2eproto_once, descriptor_table_CommandBuffer_2eproto_sccs, descriptor_table_CommandBuffer_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_CommandBuffer_2eproto::offsets,
  file_level_metadata_CommandBuffer_2eproto, 1, file_level_enum_descriptors_CommandBuffer_2eproto, file_level_service_descriptors_CommandBuffer_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_CommandBuffer_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_CommandBuffer_2eproto)), true);
namespace redhatgamedev {
namespace srt {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CommandBuffer_CommandBufferType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CommandBuffer_2eproto);
  return file_level_enum_descriptors_CommandBuffer_2eproto[0];
}
bool CommandBuffer_CommandBufferType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr CommandBuffer_CommandBufferType CommandBuffer::UNKNOWN;
constexpr CommandBuffer_CommandBufferType CommandBuffer::SECURITY;
constexpr CommandBuffer_CommandBufferType CommandBuffer::RAWINPUT;
constexpr CommandBuffer_CommandBufferType CommandBuffer::CommandBufferType_MIN;
constexpr CommandBuffer_CommandBufferType CommandBuffer::CommandBufferType_MAX;
constexpr int CommandBuffer::CommandBufferType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void CommandBuffer::InitAsDefaultInstance() {
  ::redhatgamedev::srt::_CommandBuffer_default_instance_._instance.get_mutable()->securitycommandbuffer_ = const_cast< ::redhatgamedev::srt::SecurityCommandBuffer*>(
      ::redhatgamedev::srt::SecurityCommandBuffer::internal_default_instance());
  ::redhatgamedev::srt::_CommandBuffer_default_instance_._instance.get_mutable()->rawinputcommandbuffer_ = const_cast< ::redhatgamedev::srt::RawInputCommandBuffer*>(
      ::redhatgamedev::srt::RawInputCommandBuffer::internal_default_instance());
}
class CommandBuffer::_Internal {
 public:
  using HasBits = decltype(std::declval<CommandBuffer>()._has_bits_);
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::redhatgamedev::srt::SecurityCommandBuffer& securitycommandbuffer(const CommandBuffer* msg);
  static void set_has_securitycommandbuffer(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::redhatgamedev::srt::RawInputCommandBuffer& rawinputcommandbuffer(const CommandBuffer* msg);
  static void set_has_rawinputcommandbuffer(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000004) ^ 0x00000004) != 0;
  }
};

const ::redhatgamedev::srt::SecurityCommandBuffer&
CommandBuffer::_Internal::securitycommandbuffer(const CommandBuffer* msg) {
  return *msg->securitycommandbuffer_;
}
const ::redhatgamedev::srt::RawInputCommandBuffer&
CommandBuffer::_Internal::rawinputcommandbuffer(const CommandBuffer* msg) {
  return *msg->rawinputcommandbuffer_;
}
void CommandBuffer::clear_securitycommandbuffer() {
  if (securitycommandbuffer_ != nullptr) securitycommandbuffer_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void CommandBuffer::clear_rawinputcommandbuffer() {
  if (rawinputcommandbuffer_ != nullptr) rawinputcommandbuffer_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
CommandBuffer::CommandBuffer(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:redhatgamedev.srt.CommandBuffer)
}
CommandBuffer::CommandBuffer(const CommandBuffer& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_securitycommandbuffer()) {
    securitycommandbuffer_ = new ::redhatgamedev::srt::SecurityCommandBuffer(*from.securitycommandbuffer_);
  } else {
    securitycommandbuffer_ = nullptr;
  }
  if (from._internal_has_rawinputcommandbuffer()) {
    rawinputcommandbuffer_ = new ::redhatgamedev::srt::RawInputCommandBuffer(*from.rawinputcommandbuffer_);
  } else {
    rawinputcommandbuffer_ = nullptr;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:redhatgamedev.srt.CommandBuffer)
}

void CommandBuffer::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_CommandBuffer_CommandBuffer_2eproto.base);
  ::memset(&securitycommandbuffer_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&securitycommandbuffer_)) + sizeof(type_));
}

CommandBuffer::~CommandBuffer() {
  // @@protoc_insertion_point(destructor:redhatgamedev.srt.CommandBuffer)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CommandBuffer::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete securitycommandbuffer_;
  if (this != internal_default_instance()) delete rawinputcommandbuffer_;
}

void CommandBuffer::ArenaDtor(void* object) {
  CommandBuffer* _this = reinterpret_cast< CommandBuffer* >(object);
  (void)_this;
}
void CommandBuffer::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CommandBuffer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CommandBuffer& CommandBuffer::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CommandBuffer_CommandBuffer_2eproto.base);
  return *internal_default_instance();
}


void CommandBuffer::Clear() {
// @@protoc_insertion_point(message_clear_start:redhatgamedev.srt.CommandBuffer)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(securitycommandbuffer_ != nullptr);
      securitycommandbuffer_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(rawinputcommandbuffer_ != nullptr);
      rawinputcommandbuffer_->Clear();
    }
  }
  type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommandBuffer::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .redhatgamedev.srt.CommandBuffer.CommandBufferType type = 1 [default = UNKNOWN];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::redhatgamedev::srt::CommandBuffer_CommandBufferType_IsValid(val))) {
            _internal_set_type(static_cast<::redhatgamedev::srt::CommandBuffer_CommandBufferType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional .redhatgamedev.srt.SecurityCommandBuffer securityCommandBuffer = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_securitycommandbuffer(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .redhatgamedev.srt.RawInputCommandBuffer rawInputCommandBuffer = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_rawinputcommandbuffer(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CommandBuffer::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:redhatgamedev.srt.CommandBuffer)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .redhatgamedev.srt.CommandBuffer.CommandBufferType type = 1 [default = UNKNOWN];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // optional .redhatgamedev.srt.SecurityCommandBuffer securityCommandBuffer = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::securitycommandbuffer(this), target, stream);
  }

  // optional .redhatgamedev.srt.RawInputCommandBuffer rawInputCommandBuffer = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::rawinputcommandbuffer(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:redhatgamedev.srt.CommandBuffer)
  return target;
}

size_t CommandBuffer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:redhatgamedev.srt.CommandBuffer)
  size_t total_size = 0;

  // required .redhatgamedev.srt.CommandBuffer.CommandBufferType type = 1 [default = UNKNOWN];
  if (_internal_has_type()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .redhatgamedev.srt.SecurityCommandBuffer securityCommandBuffer = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *securitycommandbuffer_);
    }

    // optional .redhatgamedev.srt.RawInputCommandBuffer rawInputCommandBuffer = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *rawinputcommandbuffer_);
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CommandBuffer::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:redhatgamedev.srt.CommandBuffer)
  GOOGLE_DCHECK_NE(&from, this);
  const CommandBuffer* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CommandBuffer>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:redhatgamedev.srt.CommandBuffer)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:redhatgamedev.srt.CommandBuffer)
    MergeFrom(*source);
  }
}

void CommandBuffer::MergeFrom(const CommandBuffer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:redhatgamedev.srt.CommandBuffer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_securitycommandbuffer()->::redhatgamedev::srt::SecurityCommandBuffer::MergeFrom(from._internal_securitycommandbuffer());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_rawinputcommandbuffer()->::redhatgamedev::srt::RawInputCommandBuffer::MergeFrom(from._internal_rawinputcommandbuffer());
    }
    if (cached_has_bits & 0x00000004u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void CommandBuffer::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:redhatgamedev.srt.CommandBuffer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CommandBuffer::CopyFrom(const CommandBuffer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:redhatgamedev.srt.CommandBuffer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommandBuffer::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_securitycommandbuffer()) {
    if (!securitycommandbuffer_->IsInitialized()) return false;
  }
  if (_internal_has_rawinputcommandbuffer()) {
    if (!rawinputcommandbuffer_->IsInitialized()) return false;
  }
  return true;
}

void CommandBuffer::InternalSwap(CommandBuffer* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CommandBuffer, type_)
      + sizeof(CommandBuffer::type_)
      - PROTOBUF_FIELD_OFFSET(CommandBuffer, securitycommandbuffer_)>(
          reinterpret_cast<char*>(&securitycommandbuffer_),
          reinterpret_cast<char*>(&other->securitycommandbuffer_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CommandBuffer::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace srt
}  // namespace redhatgamedev
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::redhatgamedev::srt::CommandBuffer* Arena::CreateMaybeMessage< ::redhatgamedev::srt::CommandBuffer >(Arena* arena) {
  return Arena::CreateMessageInternal< ::redhatgamedev::srt::CommandBuffer >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
