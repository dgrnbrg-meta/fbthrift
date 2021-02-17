/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParentAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyServicePrioParent_ping_pargs;
typedef apache::thrift::ThriftPresult<true> MyServicePrioParent_ping_presult;
typedef apache::thrift::ThriftPresult<false> MyServicePrioParent_pong_pargs;
typedef apache::thrift::ThriftPresult<true> MyServicePrioParent_pong_presult;

template <typename Protocol_>
void MyServicePrioParentAsyncClient::pingT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback) {

  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  MyServicePrioParent_ping_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  static constexpr const folly::StringPiece methodName = "ping";
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::move(rpcOptions), std::move(callback), ctx->ctx, std::move(header), channel_.get(), apache::thrift::ManagedStringView(methodName, false), writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}

template <typename Protocol_>
void MyServicePrioParentAsyncClient::pongT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback) {

  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  MyServicePrioParent_pong_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  static constexpr const folly::StringPiece methodName = "pong";
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::move(rpcOptions), std::move(callback), ctx->ctx, std::move(header), channel_.get(), apache::thrift::ManagedStringView(methodName, false), writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}



void MyServicePrioParentAsyncClient::ping(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  ping(rpcOptions, std::move(callback));
}

void MyServicePrioParentAsyncClient::ping(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto ctx = pingCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  pingImpl(rpcOptions, std::move(ctx), std::move(wrappedCallback));
}

void MyServicePrioParentAsyncClient::pingImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      pingT(&writer, rpcOptions, std::move(ctx), std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      pingT(&writer, rpcOptions, std::move(ctx), std::move(callback));
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> MyServicePrioParentAsyncClient::pingCtx(apache::thrift::RpcOptions* rpcOptions) {
  return std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      channel_->getProtocolId(),
      rpcOptions ? rpcOptions->releaseWriteHeaders() : std::map<std::string, std::string>{},
      handlers_,
      getServiceName(),
      "MyServicePrioParent.ping");
}

void MyServicePrioParentAsyncClient::sync_ping() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_ping(rpcOptions);
}

void MyServicePrioParentAsyncClient::sync_ping(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = pingCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  pingImpl(rpcOptions, ctx, std::move(wrappedCallback));
  callback.waitUntilDone(evb);

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_ping(returnState);
  });
}


folly::Future<folly::Unit> MyServicePrioParentAsyncClient::future_ping() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_ping(rpcOptions);
}

folly::SemiFuture<folly::Unit> MyServicePrioParentAsyncClient::semifuture_ping() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_ping(rpcOptions);
}

folly::Future<folly::Unit> MyServicePrioParentAsyncClient::future_ping(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_ping, channel_);
  ping(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<folly::Unit> MyServicePrioParentAsyncClient::semifuture_ping(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_ping, channel_);
  auto callback = std::move(callbackAndFuture.first);
  ping(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServicePrioParentAsyncClient::header_future_ping(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_ping, channel_);
  ping(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServicePrioParentAsyncClient::header_semifuture_ping(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_ping, channel_);
  auto callback = std::move(callbackAndFuture.first);
  ping(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void MyServicePrioParentAsyncClient::ping(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  ping(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper MyServicePrioParentAsyncClient::recv_wrapped_ping(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyServicePrioParent_ping_presult;
  constexpr auto const fname = "ping";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServicePrioParentAsyncClient::recv_ping(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_ping(state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyServicePrioParentAsyncClient::recv_instance_ping(::apache::thrift::ClientReceiveState& state) {
  recv_ping(state);
}

folly::exception_wrapper MyServicePrioParentAsyncClient::recv_instance_wrapped_ping(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_ping(state);
}

void MyServicePrioParentAsyncClient::pong(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  pong(rpcOptions, std::move(callback));
}

void MyServicePrioParentAsyncClient::pong(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto ctx = pongCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  pongImpl(rpcOptions, std::move(ctx), std::move(wrappedCallback));
}

void MyServicePrioParentAsyncClient::pongImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      pongT(&writer, rpcOptions, std::move(ctx), std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      pongT(&writer, rpcOptions, std::move(ctx), std::move(callback));
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> MyServicePrioParentAsyncClient::pongCtx(apache::thrift::RpcOptions* rpcOptions) {
  return std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      channel_->getProtocolId(),
      rpcOptions ? rpcOptions->releaseWriteHeaders() : std::map<std::string, std::string>{},
      handlers_,
      getServiceName(),
      "MyServicePrioParent.pong");
}

void MyServicePrioParentAsyncClient::sync_pong() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_pong(rpcOptions);
}

void MyServicePrioParentAsyncClient::sync_pong(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = pongCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  pongImpl(rpcOptions, ctx, std::move(wrappedCallback));
  callback.waitUntilDone(evb);

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_pong(returnState);
  });
}


folly::Future<folly::Unit> MyServicePrioParentAsyncClient::future_pong() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_pong(rpcOptions);
}

folly::SemiFuture<folly::Unit> MyServicePrioParentAsyncClient::semifuture_pong() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_pong(rpcOptions);
}

folly::Future<folly::Unit> MyServicePrioParentAsyncClient::future_pong(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_pong, channel_);
  pong(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<folly::Unit> MyServicePrioParentAsyncClient::semifuture_pong(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_pong, channel_);
  auto callback = std::move(callbackAndFuture.first);
  pong(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServicePrioParentAsyncClient::header_future_pong(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_pong, channel_);
  pong(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServicePrioParentAsyncClient::header_semifuture_pong(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_pong, channel_);
  auto callback = std::move(callbackAndFuture.first);
  pong(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void MyServicePrioParentAsyncClient::pong(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  pong(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper MyServicePrioParentAsyncClient::recv_wrapped_pong(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyServicePrioParent_pong_presult;
  constexpr auto const fname = "pong";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServicePrioParentAsyncClient::recv_pong(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_pong(state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyServicePrioParentAsyncClient::recv_instance_pong(::apache::thrift::ClientReceiveState& state) {
  recv_pong(state);
}

folly::exception_wrapper MyServicePrioParentAsyncClient::recv_instance_wrapped_pong(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_pong(state);
}


} // cpp2
