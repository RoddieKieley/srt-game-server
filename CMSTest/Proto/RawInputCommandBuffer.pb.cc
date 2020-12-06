// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RawInputCommandBuffer.proto

#include "RawInputCommandBuffer.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_DualStickRawInputCommandBuffer_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_DualStickRawInputCommandBuffer_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_DualStickRawInputCommandBuffer;
}  // namespace protobuf_DualStickRawInputCommandBuffer_2eproto
namespace usx {
namespace geofactions {
class RawInputCommandBufferDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RawInputCommandBuffer>
      _instance;
} _RawInputCommandBuffer_default_instance_;
}  // namespace geofactions
}  // namespace usx
namespace protobuf_RawInputCommandBuffer_2eproto {
static void InitDefaultsRawInputCommandBuffer() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::usx::geofactions::_RawInputCommandBuffer_default_instance_;
    new (ptr) ::usx::geofactions::RawInputCommandBuffer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::usx::geofactions::RawInputCommandBuffer::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_RawInputCommandBuffer =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsRawInputCommandBuffer}, {
      &protobuf_DualStickRawInputCommandBuffer_2eproto::scc_info_DualStickRawInputCommandBuffer.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RawInputCommandBuffer.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::usx::geofactions::RawInputCommandBuffer, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::usx::geofactions::RawInputCommandBuffer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::usx::geofactions::RawInputCommandBuffer, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::usx::geofactions::RawInputCommandBuffer, uuid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::usx::geofactions::RawInputCommandBuffer, dualstickrawinputcommandbuffer_),
  2,
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::usx::geofactions::RawInputCommandBuffer)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::usx::geofactions::_RawInputCommandBuffer_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "RawInputCommandBuffer.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\033RawInputCommandBuffer.proto\022\017usx.geofa"
      "ctions\032$DualStickRawInputCommandBuffer.p"
      "roto\"\220\002\n\025RawInputCommandBuffer\022W\n\004type\030\001"
      " \002(\0162@.usx.geofactions.RawInputCommandBu"
      "ffer.RawInputCommandBufferType:\007UNKNOWN\022"
      "\014\n\004UUID\030\002 \002(\t\022W\n\036dualStickRawInputComman"
      "dBuffer\030\003 \001(\0132/.usx.geofactions.DualStic"
      "kRawInputCommandBuffer\"7\n\031RawInputComman"
      "dBufferType\022\013\n\007UNKNOWN\020\000\022\r\n\tDUALSTICK\020\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 359);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RawInputCommandBuffer.proto", &protobuf_RegisterTypes);
  ::protobuf_DualStickRawInputCommandBuffer_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_RawInputCommandBuffer_2eproto
namespace usx {
namespace geofactions {
const ::google::protobuf::EnumDescriptor* RawInputCommandBuffer_RawInputCommandBufferType_descriptor() {
  protobuf_RawInputCommandBuffer_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_RawInputCommandBuffer_2eproto::file_level_enum_descriptors[0];
}
bool RawInputCommandBuffer_RawInputCommandBufferType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const RawInputCommandBuffer_RawInputCommandBufferType RawInputCommandBuffer::UNKNOWN;
const RawInputCommandBuffer_RawInputCommandBufferType RawInputCommandBuffer::DUALSTICK;
const RawInputCommandBuffer_RawInputCommandBufferType RawInputCommandBuffer::RawInputCommandBufferType_MIN;
const RawInputCommandBuffer_RawInputCommandBufferType RawInputCommandBuffer::RawInputCommandBufferType_MAX;
const int RawInputCommandBuffer::RawInputCommandBufferType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void RawInputCommandBuffer::InitAsDefaultInstance() {
  ::usx::geofactions::_RawInputCommandBuffer_default_instance_._instance.get_mutable()->dualstickrawinputcommandbuffer_ = const_cast< ::usx::geofactions::DualStickRawInputCommandBuffer*>(
      ::usx::geofactions::DualStickRawInputCommandBuffer::internal_default_instance());
}
void RawInputCommandBuffer::clear_dualstickrawinputcommandbuffer() {
  if (dualstickrawinputcommandbuffer_ != NULL) dualstickrawinputcommandbuffer_->Clear();
  clear_has_dualstickrawinputcommandbuffer();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RawInputCommandBuffer::kTypeFieldNumber;
const int RawInputCommandBuffer::kUUIDFieldNumber;
const int RawInputCommandBuffer::kDualStickRawInputCommandBufferFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RawInputCommandBuffer::RawInputCommandBuffer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_RawInputCommandBuffer_2eproto::scc_info_RawInputCommandBuffer.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:usx.geofactions.RawInputCommandBuffer)
}
RawInputCommandBuffer::RawInputCommandBuffer(const RawInputCommandBuffer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  uuid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_uuid()) {
    uuid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uuid_);
  }
  if (from.has_dualstickrawinputcommandbuffer()) {
    dualstickrawinputcommandbuffer_ = new ::usx::geofactions::DualStickRawInputCommandBuffer(*from.dualstickrawinputcommandbuffer_);
  } else {
    dualstickrawinputcommandbuffer_ = NULL;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:usx.geofactions.RawInputCommandBuffer)
}

void RawInputCommandBuffer::SharedCtor() {
  uuid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&dualstickrawinputcommandbuffer_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&dualstickrawinputcommandbuffer_)) + sizeof(type_));
}

RawInputCommandBuffer::~RawInputCommandBuffer() {
  // @@protoc_insertion_point(destructor:usx.geofactions.RawInputCommandBuffer)
  SharedDtor();
}

void RawInputCommandBuffer::SharedDtor() {
  uuid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete dualstickrawinputcommandbuffer_;
}

void RawInputCommandBuffer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RawInputCommandBuffer::descriptor() {
  ::protobuf_RawInputCommandBuffer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_RawInputCommandBuffer_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RawInputCommandBuffer& RawInputCommandBuffer::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_RawInputCommandBuffer_2eproto::scc_info_RawInputCommandBuffer.base);
  return *internal_default_instance();
}


void RawInputCommandBuffer::Clear() {
// @@protoc_insertion_point(message_clear_start:usx.geofactions.RawInputCommandBuffer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      uuid_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(dualstickrawinputcommandbuffer_ != NULL);
      dualstickrawinputcommandbuffer_->Clear();
    }
  }
  type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RawInputCommandBuffer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:usx.geofactions.RawInputCommandBuffer)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .usx.geofactions.RawInputCommandBuffer.RawInputCommandBufferType type = 1 [default = UNKNOWN];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::usx::geofactions::RawInputCommandBuffer_RawInputCommandBufferType_IsValid(value)) {
            set_type(static_cast< ::usx::geofactions::RawInputCommandBuffer_RawInputCommandBufferType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string UUID = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->uuid().data(), static_cast<int>(this->uuid().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "usx.geofactions.RawInputCommandBuffer.UUID");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .usx.geofactions.DualStickRawInputCommandBuffer dualStickRawInputCommandBuffer = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_dualstickrawinputcommandbuffer()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:usx.geofactions.RawInputCommandBuffer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:usx.geofactions.RawInputCommandBuffer)
  return false;
#undef DO_
}

void RawInputCommandBuffer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:usx.geofactions.RawInputCommandBuffer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .usx.geofactions.RawInputCommandBuffer.RawInputCommandBufferType type = 1 [default = UNKNOWN];
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // required string UUID = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->uuid().data(), static_cast<int>(this->uuid().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "usx.geofactions.RawInputCommandBuffer.UUID");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->uuid(), output);
  }

  // optional .usx.geofactions.DualStickRawInputCommandBuffer dualStickRawInputCommandBuffer = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_dualstickrawinputcommandbuffer(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:usx.geofactions.RawInputCommandBuffer)
}

::google::protobuf::uint8* RawInputCommandBuffer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:usx.geofactions.RawInputCommandBuffer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .usx.geofactions.RawInputCommandBuffer.RawInputCommandBufferType type = 1 [default = UNKNOWN];
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // required string UUID = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->uuid().data(), static_cast<int>(this->uuid().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "usx.geofactions.RawInputCommandBuffer.UUID");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->uuid(), target);
  }

  // optional .usx.geofactions.DualStickRawInputCommandBuffer dualStickRawInputCommandBuffer = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_dualstickrawinputcommandbuffer(), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:usx.geofactions.RawInputCommandBuffer)
  return target;
}

size_t RawInputCommandBuffer::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:usx.geofactions.RawInputCommandBuffer)
  size_t total_size = 0;

  if (has_uuid()) {
    // required string UUID = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->uuid());
  }

  if (has_type()) {
    // required .usx.geofactions.RawInputCommandBuffer.RawInputCommandBufferType type = 1 [default = UNKNOWN];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  return total_size;
}
size_t RawInputCommandBuffer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:usx.geofactions.RawInputCommandBuffer)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000005) ^ 0x00000005) == 0) {  // All required fields are present.
    // required string UUID = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->uuid());

    // required .usx.geofactions.RawInputCommandBuffer.RawInputCommandBufferType type = 1 [default = UNKNOWN];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional .usx.geofactions.DualStickRawInputCommandBuffer dualStickRawInputCommandBuffer = 3;
  if (has_dualstickrawinputcommandbuffer()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *dualstickrawinputcommandbuffer_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RawInputCommandBuffer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:usx.geofactions.RawInputCommandBuffer)
  GOOGLE_DCHECK_NE(&from, this);
  const RawInputCommandBuffer* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RawInputCommandBuffer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:usx.geofactions.RawInputCommandBuffer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:usx.geofactions.RawInputCommandBuffer)
    MergeFrom(*source);
  }
}

void RawInputCommandBuffer::MergeFrom(const RawInputCommandBuffer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:usx.geofactions.RawInputCommandBuffer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_uuid();
      uuid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uuid_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_dualstickrawinputcommandbuffer()->::usx::geofactions::DualStickRawInputCommandBuffer::MergeFrom(from.dualstickrawinputcommandbuffer());
    }
    if (cached_has_bits & 0x00000004u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RawInputCommandBuffer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:usx.geofactions.RawInputCommandBuffer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RawInputCommandBuffer::CopyFrom(const RawInputCommandBuffer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:usx.geofactions.RawInputCommandBuffer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RawInputCommandBuffer::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000005) != 0x00000005) return false;
  if (has_dualstickrawinputcommandbuffer()) {
    if (!this->dualstickrawinputcommandbuffer_->IsInitialized()) return false;
  }
  return true;
}

void RawInputCommandBuffer::Swap(RawInputCommandBuffer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RawInputCommandBuffer::InternalSwap(RawInputCommandBuffer* other) {
  using std::swap;
  uuid_.Swap(&other->uuid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(dualstickrawinputcommandbuffer_, other->dualstickrawinputcommandbuffer_);
  swap(type_, other->type_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RawInputCommandBuffer::GetMetadata() const {
  protobuf_RawInputCommandBuffer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_RawInputCommandBuffer_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace geofactions
}  // namespace usx
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::usx::geofactions::RawInputCommandBuffer* Arena::CreateMaybeMessage< ::usx::geofactions::RawInputCommandBuffer >(Arena* arena) {
  return Arena::CreateInternal< ::usx::geofactions::RawInputCommandBuffer >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
