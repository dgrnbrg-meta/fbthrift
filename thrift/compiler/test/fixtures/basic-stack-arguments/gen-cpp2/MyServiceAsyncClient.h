/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServiceAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyService";
  }


  virtual void hasDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t p_id);
  virtual void hasDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t p_id);
 protected:
  void hasDataByIdImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t p_id);
 public:

  virtual bool sync_hasDataById(int64_t p_id);
  virtual bool sync_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id);

  virtual folly::Future<bool> future_hasDataById(int64_t p_id);
  virtual folly::SemiFuture<bool> semifuture_hasDataById(int64_t p_id);
  virtual folly::Future<bool> future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id);
  virtual folly::SemiFuture<bool> semifuture_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id);
  virtual folly::Future<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id);
  virtual folly::SemiFuture<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id);
  FOLLY_NODISCARD [[deprecated("To be replaced by new API soon")]] virtual folly::Try<apache::thrift::RpcResponseComplete<bool>> sync_complete_hasDataById(
      apache::thrift::RpcOptions& rpcOptions,  int64_t p_id);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<bool> co_hasDataById(int64_t p_id) {
    return co_hasDataById<false>(nullptr, p_id);
  }
  template <int = 0>
  folly::coro::Task<bool> co_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id) {
    return co_hasDataById<true>(&rpcOptions, p_id);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<bool> co_hasDataById(apache::thrift::RpcOptions* rpcOptions, int64_t p_id) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = hasDataByIdCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      hasDataByIdImpl(*rpcOptions, ctx, std::move(wrappedCallback), p_id);
    } else {
      hasDataByIdImpl(defaultRpcOptions, ctx, std::move(wrappedCallback), p_id);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header() && !returnState.header()->getHeaders().empty()) {
        rpcOptions->setReadHeaders(returnState.header()->releaseHeaders());
      }
    };
    bool _return;
    if (auto ew = recv_wrapped_hasDataById(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void hasDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t p_id);


  static folly::exception_wrapper recv_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state);
  static bool recv_hasDataById(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual bool recv_instance_hasDataById(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void hasDataByIdT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t p_id);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> hasDataByIdCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void getDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t p_id);
  virtual void getDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t p_id);
 protected:
  void getDataByIdImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t p_id);
 public:

  virtual void sync_getDataById(::std::string& _return, int64_t p_id);
  virtual void sync_getDataById(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, int64_t p_id);

  virtual folly::Future<::std::string> future_getDataById(int64_t p_id);
  virtual folly::SemiFuture<::std::string> semifuture_getDataById(int64_t p_id);
  virtual folly::Future<::std::string> future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id);
  virtual folly::SemiFuture<::std::string> semifuture_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id);
  virtual folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id);
  virtual folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id);
  FOLLY_NODISCARD [[deprecated("To be replaced by new API soon")]] virtual folly::Try<apache::thrift::RpcResponseComplete<::std::string>> sync_complete_getDataById(
      apache::thrift::RpcOptions& rpcOptions,  int64_t p_id);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<::std::string> co_getDataById(int64_t p_id) {
    return co_getDataById<false>(nullptr, p_id);
  }
  template <int = 0>
  folly::coro::Task<::std::string> co_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id) {
    return co_getDataById<true>(&rpcOptions, p_id);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::string> co_getDataById(apache::thrift::RpcOptions* rpcOptions, int64_t p_id) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = getDataByIdCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      getDataByIdImpl(*rpcOptions, ctx, std::move(wrappedCallback), p_id);
    } else {
      getDataByIdImpl(defaultRpcOptions, ctx, std::move(wrappedCallback), p_id);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header() && !returnState.header()->getHeaders().empty()) {
        rpcOptions->setReadHeaders(returnState.header()->releaseHeaders());
      }
    };
    ::std::string _return;
    if (auto ew = recv_wrapped_getDataById(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void getDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t p_id);


  static folly::exception_wrapper recv_wrapped_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void getDataByIdT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t p_id);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> getDataByIdCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void putDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t p_id, const ::std::string& p_data);
  virtual void putDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t p_id, const ::std::string& p_data);
 protected:
  void putDataByIdImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t p_id, const ::std::string& p_data);
 public:

  virtual void sync_putDataById(int64_t p_id, const ::std::string& p_data);
  virtual void sync_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id, const ::std::string& p_data);

  virtual folly::Future<folly::Unit> future_putDataById(int64_t p_id, const ::std::string& p_data);
  virtual folly::SemiFuture<folly::Unit> semifuture_putDataById(int64_t p_id, const ::std::string& p_data);
  virtual folly::Future<folly::Unit> future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id, const ::std::string& p_data);
  virtual folly::SemiFuture<folly::Unit> semifuture_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id, const ::std::string& p_data);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id, const ::std::string& p_data);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id, const ::std::string& p_data);
  FOLLY_NODISCARD [[deprecated("To be replaced by new API soon")]] virtual folly::Try<apache::thrift::RpcResponseComplete<void>> sync_complete_putDataById(
      apache::thrift::RpcOptions& rpcOptions,  int64_t p_id, const ::std::string& p_data);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_putDataById(int64_t p_id, const ::std::string& p_data) {
    return co_putDataById<false>(nullptr, p_id, p_data);
  }
  template <int = 0>
  folly::coro::Task<void> co_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id, const ::std::string& p_data) {
    return co_putDataById<true>(&rpcOptions, p_id, p_data);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_putDataById(apache::thrift::RpcOptions* rpcOptions, int64_t p_id, const ::std::string& p_data) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = putDataByIdCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      putDataByIdImpl(*rpcOptions, ctx, std::move(wrappedCallback), p_id, p_data);
    } else {
      putDataByIdImpl(defaultRpcOptions, ctx, std::move(wrappedCallback), p_id, p_data);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header() && !returnState.header()->getHeaders().empty()) {
        rpcOptions->setReadHeaders(returnState.header()->releaseHeaders());
      }
    };
    if (auto ew = recv_wrapped_putDataById(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void putDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t p_id, const ::std::string& p_data);


  static folly::exception_wrapper recv_wrapped_putDataById(::apache::thrift::ClientReceiveState& state);
  static void recv_putDataById(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_putDataById(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_putDataById(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void putDataByIdT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t p_id, const ::std::string& p_data);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> putDataByIdCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void lobDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t p_id, const ::std::string& p_data);
  virtual void lobDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t p_id, const ::std::string& p_data);
 protected:
  void lobDataByIdImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t p_id, const ::std::string& p_data);
 public:

  virtual void sync_lobDataById(int64_t p_id, const ::std::string& p_data);
  virtual void sync_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id, const ::std::string& p_data);

  virtual folly::Future<folly::Unit> future_lobDataById(int64_t p_id, const ::std::string& p_data);
  virtual folly::SemiFuture<folly::Unit> semifuture_lobDataById(int64_t p_id, const ::std::string& p_data);
  virtual folly::Future<folly::Unit> future_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id, const ::std::string& p_data);
  virtual folly::SemiFuture<folly::Unit> semifuture_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id, const ::std::string& p_data);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_lobDataById(int64_t p_id, const ::std::string& p_data) {
    return co_lobDataById<false>(nullptr, p_id, p_data);
  }
  template <int = 0>
  folly::coro::Task<void> co_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t p_id, const ::std::string& p_data) {
    return co_lobDataById<true>(&rpcOptions, p_id, p_data);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_lobDataById(apache::thrift::RpcOptions* rpcOptions, int64_t p_id, const ::std::string& p_data) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<true> callback(&returnState);
    auto ctx = lobDataByIdCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<true>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      lobDataByIdImpl(*rpcOptions, ctx, std::move(wrappedCallback), p_id, p_data);
    } else {
      lobDataByIdImpl(defaultRpcOptions, ctx, std::move(wrappedCallback), p_id, p_data);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void lobDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t p_id, const ::std::string& p_data);


 private:
  template <typename Protocol_>
  void lobDataByIdT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t p_id, const ::std::string& p_data);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> lobDataByIdCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // cpp2
