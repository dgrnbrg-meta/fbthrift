/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.includes;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.facebook.swift.transport.client.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@SwiftGenerated
@com.facebook.swift.service.ThriftService("MyService")
public interface MyService extends java.io.Closeable {
    @com.facebook.swift.service.ThriftService("MyService")
    public interface Async extends java.io.Closeable {
        @java.lang.Override void close();

        @ThriftMethod(value = "query")
        ListenableFuture<Void> query(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i);

        default ListenableFuture<Void> query(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> queryWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "has_arg_docs")
        ListenableFuture<Void> hasArgDocs(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i);

        default ListenableFuture<Void> hasArgDocs(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> hasArgDocsWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }
    }
    @java.lang.Override void close();

    @ThriftMethod(value = "query")
    void query(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i) throws org.apache.thrift.TException;

    default void query(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> queryWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "has_arg_docs")
    void hasArgDocs(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i) throws org.apache.thrift.TException;

    default void hasArgDocs(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> hasArgDocsWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @com.facebook.swift.service.ThriftService("MyService")
    interface Reactive extends Closeable {
        @java.lang.Override void close();

        reactor.core.publisher.Mono<Void> query(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i);

        default reactor.core.publisher.Mono<Void> query(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> queryWrapper(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        reactor.core.publisher.Mono<Void> hasArgDocs(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i);

        default reactor.core.publisher.Mono<Void> hasArgDocs(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> hasArgDocsWrapper(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

    }
}
