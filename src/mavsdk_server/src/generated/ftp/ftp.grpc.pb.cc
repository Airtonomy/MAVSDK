// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ftp/ftp.proto

#include "ftp/ftp.pb.h"
#include "ftp/ftp.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace ftp {

static const char* FtpService_method_names[] = {
  "/mavsdk.rpc.ftp.FtpService/SubscribeDownload",
  "/mavsdk.rpc.ftp.FtpService/SubscribeUpload",
  "/mavsdk.rpc.ftp.FtpService/ListDirectory",
  "/mavsdk.rpc.ftp.FtpService/CreateDirectory",
  "/mavsdk.rpc.ftp.FtpService/RemoveDirectory",
  "/mavsdk.rpc.ftp.FtpService/RemoveFile",
  "/mavsdk.rpc.ftp.FtpService/Rename",
  "/mavsdk.rpc.ftp.FtpService/AreFilesIdentical",
  "/mavsdk.rpc.ftp.FtpService/SetTargetCompid",
};

std::unique_ptr< FtpService::Stub> FtpService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FtpService::Stub> stub(new FtpService::Stub(channel, options));
  return stub;
}

FtpService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SubscribeDownload_(FtpService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SubscribeUpload_(FtpService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_ListDirectory_(FtpService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateDirectory_(FtpService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RemoveDirectory_(FtpService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RemoveFile_(FtpService_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Rename_(FtpService_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AreFilesIdentical_(FtpService_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetTargetCompid_(FtpService_method_names[8], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::mavsdk::rpc::ftp::DownloadResponse>* FtpService::Stub::SubscribeDownloadRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SubscribeDownloadRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::ftp::DownloadResponse>::Create(channel_.get(), rpcmethod_SubscribeDownload_, context, request);
}

void FtpService::Stub::async::SubscribeDownload(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SubscribeDownloadRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::ftp::DownloadResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::ftp::DownloadResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeDownload_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::ftp::DownloadResponse>* FtpService::Stub::AsyncSubscribeDownloadRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SubscribeDownloadRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::ftp::DownloadResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeDownload_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::ftp::DownloadResponse>* FtpService::Stub::PrepareAsyncSubscribeDownloadRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SubscribeDownloadRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::ftp::DownloadResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeDownload_, context, request, false, nullptr);
}

::grpc::ClientReader< ::mavsdk::rpc::ftp::UploadResponse>* FtpService::Stub::SubscribeUploadRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SubscribeUploadRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::ftp::UploadResponse>::Create(channel_.get(), rpcmethod_SubscribeUpload_, context, request);
}

void FtpService::Stub::async::SubscribeUpload(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SubscribeUploadRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::ftp::UploadResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::ftp::UploadResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeUpload_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::ftp::UploadResponse>* FtpService::Stub::AsyncSubscribeUploadRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SubscribeUploadRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::ftp::UploadResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeUpload_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::ftp::UploadResponse>* FtpService::Stub::PrepareAsyncSubscribeUploadRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SubscribeUploadRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::ftp::UploadResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeUpload_, context, request, false, nullptr);
}

::grpc::Status FtpService::Stub::ListDirectory(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::ListDirectoryRequest& request, ::mavsdk::rpc::ftp::ListDirectoryResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::ftp::ListDirectoryRequest, ::mavsdk::rpc::ftp::ListDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListDirectory_, context, request, response);
}

void FtpService::Stub::async::ListDirectory(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::ListDirectoryRequest* request, ::mavsdk::rpc::ftp::ListDirectoryResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::ftp::ListDirectoryRequest, ::mavsdk::rpc::ftp::ListDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListDirectory_, context, request, response, std::move(f));
}

void FtpService::Stub::async::ListDirectory(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::ListDirectoryRequest* request, ::mavsdk::rpc::ftp::ListDirectoryResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListDirectory_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::ListDirectoryResponse>* FtpService::Stub::PrepareAsyncListDirectoryRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::ListDirectoryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::ftp::ListDirectoryResponse, ::mavsdk::rpc::ftp::ListDirectoryRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListDirectory_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::ListDirectoryResponse>* FtpService::Stub::AsyncListDirectoryRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::ListDirectoryRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListDirectoryRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FtpService::Stub::CreateDirectory(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::CreateDirectoryRequest& request, ::mavsdk::rpc::ftp::CreateDirectoryResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::ftp::CreateDirectoryRequest, ::mavsdk::rpc::ftp::CreateDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreateDirectory_, context, request, response);
}

void FtpService::Stub::async::CreateDirectory(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::CreateDirectoryRequest* request, ::mavsdk::rpc::ftp::CreateDirectoryResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::ftp::CreateDirectoryRequest, ::mavsdk::rpc::ftp::CreateDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateDirectory_, context, request, response, std::move(f));
}

void FtpService::Stub::async::CreateDirectory(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::CreateDirectoryRequest* request, ::mavsdk::rpc::ftp::CreateDirectoryResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateDirectory_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::CreateDirectoryResponse>* FtpService::Stub::PrepareAsyncCreateDirectoryRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::CreateDirectoryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::ftp::CreateDirectoryResponse, ::mavsdk::rpc::ftp::CreateDirectoryRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreateDirectory_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::CreateDirectoryResponse>* FtpService::Stub::AsyncCreateDirectoryRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::CreateDirectoryRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateDirectoryRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FtpService::Stub::RemoveDirectory(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RemoveDirectoryRequest& request, ::mavsdk::rpc::ftp::RemoveDirectoryResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::ftp::RemoveDirectoryRequest, ::mavsdk::rpc::ftp::RemoveDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RemoveDirectory_, context, request, response);
}

void FtpService::Stub::async::RemoveDirectory(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RemoveDirectoryRequest* request, ::mavsdk::rpc::ftp::RemoveDirectoryResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::ftp::RemoveDirectoryRequest, ::mavsdk::rpc::ftp::RemoveDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RemoveDirectory_, context, request, response, std::move(f));
}

void FtpService::Stub::async::RemoveDirectory(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RemoveDirectoryRequest* request, ::mavsdk::rpc::ftp::RemoveDirectoryResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RemoveDirectory_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::RemoveDirectoryResponse>* FtpService::Stub::PrepareAsyncRemoveDirectoryRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RemoveDirectoryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::ftp::RemoveDirectoryResponse, ::mavsdk::rpc::ftp::RemoveDirectoryRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RemoveDirectory_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::RemoveDirectoryResponse>* FtpService::Stub::AsyncRemoveDirectoryRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RemoveDirectoryRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRemoveDirectoryRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FtpService::Stub::RemoveFile(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RemoveFileRequest& request, ::mavsdk::rpc::ftp::RemoveFileResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::ftp::RemoveFileRequest, ::mavsdk::rpc::ftp::RemoveFileResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RemoveFile_, context, request, response);
}

void FtpService::Stub::async::RemoveFile(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RemoveFileRequest* request, ::mavsdk::rpc::ftp::RemoveFileResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::ftp::RemoveFileRequest, ::mavsdk::rpc::ftp::RemoveFileResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RemoveFile_, context, request, response, std::move(f));
}

void FtpService::Stub::async::RemoveFile(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RemoveFileRequest* request, ::mavsdk::rpc::ftp::RemoveFileResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RemoveFile_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::RemoveFileResponse>* FtpService::Stub::PrepareAsyncRemoveFileRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RemoveFileRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::ftp::RemoveFileResponse, ::mavsdk::rpc::ftp::RemoveFileRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RemoveFile_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::RemoveFileResponse>* FtpService::Stub::AsyncRemoveFileRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RemoveFileRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRemoveFileRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FtpService::Stub::Rename(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RenameRequest& request, ::mavsdk::rpc::ftp::RenameResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::ftp::RenameRequest, ::mavsdk::rpc::ftp::RenameResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Rename_, context, request, response);
}

void FtpService::Stub::async::Rename(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RenameRequest* request, ::mavsdk::rpc::ftp::RenameResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::ftp::RenameRequest, ::mavsdk::rpc::ftp::RenameResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Rename_, context, request, response, std::move(f));
}

void FtpService::Stub::async::Rename(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RenameRequest* request, ::mavsdk::rpc::ftp::RenameResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Rename_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::RenameResponse>* FtpService::Stub::PrepareAsyncRenameRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RenameRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::ftp::RenameResponse, ::mavsdk::rpc::ftp::RenameRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Rename_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::RenameResponse>* FtpService::Stub::AsyncRenameRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::RenameRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRenameRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FtpService::Stub::AreFilesIdentical(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::AreFilesIdenticalRequest& request, ::mavsdk::rpc::ftp::AreFilesIdenticalResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::ftp::AreFilesIdenticalRequest, ::mavsdk::rpc::ftp::AreFilesIdenticalResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AreFilesIdentical_, context, request, response);
}

void FtpService::Stub::async::AreFilesIdentical(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::AreFilesIdenticalRequest* request, ::mavsdk::rpc::ftp::AreFilesIdenticalResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::ftp::AreFilesIdenticalRequest, ::mavsdk::rpc::ftp::AreFilesIdenticalResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AreFilesIdentical_, context, request, response, std::move(f));
}

void FtpService::Stub::async::AreFilesIdentical(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::AreFilesIdenticalRequest* request, ::mavsdk::rpc::ftp::AreFilesIdenticalResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AreFilesIdentical_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::AreFilesIdenticalResponse>* FtpService::Stub::PrepareAsyncAreFilesIdenticalRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::AreFilesIdenticalRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::ftp::AreFilesIdenticalResponse, ::mavsdk::rpc::ftp::AreFilesIdenticalRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AreFilesIdentical_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::AreFilesIdenticalResponse>* FtpService::Stub::AsyncAreFilesIdenticalRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::AreFilesIdenticalRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAreFilesIdenticalRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FtpService::Stub::SetTargetCompid(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SetTargetCompidRequest& request, ::mavsdk::rpc::ftp::SetTargetCompidResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::ftp::SetTargetCompidRequest, ::mavsdk::rpc::ftp::SetTargetCompidResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetTargetCompid_, context, request, response);
}

void FtpService::Stub::async::SetTargetCompid(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SetTargetCompidRequest* request, ::mavsdk::rpc::ftp::SetTargetCompidResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::ftp::SetTargetCompidRequest, ::mavsdk::rpc::ftp::SetTargetCompidResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetTargetCompid_, context, request, response, std::move(f));
}

void FtpService::Stub::async::SetTargetCompid(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SetTargetCompidRequest* request, ::mavsdk::rpc::ftp::SetTargetCompidResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetTargetCompid_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::SetTargetCompidResponse>* FtpService::Stub::PrepareAsyncSetTargetCompidRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SetTargetCompidRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::ftp::SetTargetCompidResponse, ::mavsdk::rpc::ftp::SetTargetCompidRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetTargetCompid_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::ftp::SetTargetCompidResponse>* FtpService::Stub::AsyncSetTargetCompidRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::ftp::SetTargetCompidRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetTargetCompidRaw(context, request, cq);
  result->StartCall();
  return result;
}

FtpService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FtpService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< FtpService::Service, ::mavsdk::rpc::ftp::SubscribeDownloadRequest, ::mavsdk::rpc::ftp::DownloadResponse>(
          [](FtpService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::ftp::SubscribeDownloadRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::ftp::DownloadResponse>* writer) {
               return service->SubscribeDownload(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FtpService_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< FtpService::Service, ::mavsdk::rpc::ftp::SubscribeUploadRequest, ::mavsdk::rpc::ftp::UploadResponse>(
          [](FtpService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::ftp::SubscribeUploadRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::ftp::UploadResponse>* writer) {
               return service->SubscribeUpload(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FtpService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FtpService::Service, ::mavsdk::rpc::ftp::ListDirectoryRequest, ::mavsdk::rpc::ftp::ListDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FtpService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::ftp::ListDirectoryRequest* req,
             ::mavsdk::rpc::ftp::ListDirectoryResponse* resp) {
               return service->ListDirectory(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FtpService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FtpService::Service, ::mavsdk::rpc::ftp::CreateDirectoryRequest, ::mavsdk::rpc::ftp::CreateDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FtpService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::ftp::CreateDirectoryRequest* req,
             ::mavsdk::rpc::ftp::CreateDirectoryResponse* resp) {
               return service->CreateDirectory(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FtpService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FtpService::Service, ::mavsdk::rpc::ftp::RemoveDirectoryRequest, ::mavsdk::rpc::ftp::RemoveDirectoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FtpService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::ftp::RemoveDirectoryRequest* req,
             ::mavsdk::rpc::ftp::RemoveDirectoryResponse* resp) {
               return service->RemoveDirectory(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FtpService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FtpService::Service, ::mavsdk::rpc::ftp::RemoveFileRequest, ::mavsdk::rpc::ftp::RemoveFileResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FtpService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::ftp::RemoveFileRequest* req,
             ::mavsdk::rpc::ftp::RemoveFileResponse* resp) {
               return service->RemoveFile(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FtpService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FtpService::Service, ::mavsdk::rpc::ftp::RenameRequest, ::mavsdk::rpc::ftp::RenameResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FtpService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::ftp::RenameRequest* req,
             ::mavsdk::rpc::ftp::RenameResponse* resp) {
               return service->Rename(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FtpService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FtpService::Service, ::mavsdk::rpc::ftp::AreFilesIdenticalRequest, ::mavsdk::rpc::ftp::AreFilesIdenticalResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FtpService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::ftp::AreFilesIdenticalRequest* req,
             ::mavsdk::rpc::ftp::AreFilesIdenticalResponse* resp) {
               return service->AreFilesIdentical(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FtpService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FtpService::Service, ::mavsdk::rpc::ftp::SetTargetCompidRequest, ::mavsdk::rpc::ftp::SetTargetCompidResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FtpService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::ftp::SetTargetCompidRequest* req,
             ::mavsdk::rpc::ftp::SetTargetCompidResponse* resp) {
               return service->SetTargetCompid(ctx, req, resp);
             }, this)));
}

FtpService::Service::~Service() {
}

::grpc::Status FtpService::Service::SubscribeDownload(::grpc::ServerContext* context, const ::mavsdk::rpc::ftp::SubscribeDownloadRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::ftp::DownloadResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FtpService::Service::SubscribeUpload(::grpc::ServerContext* context, const ::mavsdk::rpc::ftp::SubscribeUploadRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::ftp::UploadResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FtpService::Service::ListDirectory(::grpc::ServerContext* context, const ::mavsdk::rpc::ftp::ListDirectoryRequest* request, ::mavsdk::rpc::ftp::ListDirectoryResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FtpService::Service::CreateDirectory(::grpc::ServerContext* context, const ::mavsdk::rpc::ftp::CreateDirectoryRequest* request, ::mavsdk::rpc::ftp::CreateDirectoryResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FtpService::Service::RemoveDirectory(::grpc::ServerContext* context, const ::mavsdk::rpc::ftp::RemoveDirectoryRequest* request, ::mavsdk::rpc::ftp::RemoveDirectoryResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FtpService::Service::RemoveFile(::grpc::ServerContext* context, const ::mavsdk::rpc::ftp::RemoveFileRequest* request, ::mavsdk::rpc::ftp::RemoveFileResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FtpService::Service::Rename(::grpc::ServerContext* context, const ::mavsdk::rpc::ftp::RenameRequest* request, ::mavsdk::rpc::ftp::RenameResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FtpService::Service::AreFilesIdentical(::grpc::ServerContext* context, const ::mavsdk::rpc::ftp::AreFilesIdenticalRequest* request, ::mavsdk::rpc::ftp::AreFilesIdenticalResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FtpService::Service::SetTargetCompid(::grpc::ServerContext* context, const ::mavsdk::rpc::ftp::SetTargetCompidRequest* request, ::mavsdk::rpc::ftp::SetTargetCompidResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace ftp

