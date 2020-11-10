<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * void
   *   foo();
   */
  public function foo(): Awaitable<void>;
}

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * void
   *   foo();
   */
  public function foo(): void;
}

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * void
   *   foo();
   */
  public function foo(): Awaitable<void>;
}

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceAsyncRpcOptionsIf extends \IThriftAsyncRpcOptionsIf {
  /**
   * Original thrift definition:-
   * void
   *   foo();
   */
  public function foo(\RpcOptions $rpc_options): Awaitable<void>;
}

/**
 * Original thrift service:-
 * MyService
 */
trait MyServiceClientBase {
  require extends \ThriftClientBase;

  protected function sendImpl_foo(): int {
    $currentseqid = $this->getNextSequenceID();
    $args = MyService_foo_args::fromShape(shape(
));
    try {
      $this->eventHandler_->preSend('foo', $args, $currentseqid);
      if ($this->output_ is \TBinaryProtocolAccelerated)
      {
        \thrift_protocol_write_binary($this->output_, 'foo', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ is \TCompactProtocolAccelerated)
      {
        \thrift_protocol_write_compact($this->output_, 'foo', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('foo', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('foo', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('foo', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->sendError('foo', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('foo', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_foo(?int $expectedsequenceid = null, shape(?'read_options' => int) $options = shape()): void {
    try {
      $this->eventHandler_->preRecv('foo', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, 'MyService_foo_result', $this->input_->isStrictRead(), Shapes::idx($options, 'read_options', 0));
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, 'MyService_foo_result', Shapes::idx($options, 'read_options', 0));
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(
          inout $fname,
          inout $mtype,
          inout $rseqid,
        );
        if ($mtype == \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = MyService_foo_result::fromShape(shape());
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid != $expectedsequenceid)) {
          throw new \TProtocolException("foo failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('foo', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('foo', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('foo', $expectedsequenceid, $ex->result);
          return;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('foo', $expectedsequenceid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postRecv('foo', $expectedsequenceid, null);
    return;
  }

}

class MyServiceAsyncClient extends \ThriftClientBase implements MyServiceAsyncIf {
  use MyServiceClientBase;

  /**
   * Original thrift definition:-
   * void
   *   foo();
   */
  public async function foo(): Awaitable<void> {
    await $this->asyncHandler_->genBefore("MyService", "foo");
    $currentseqid = $this->sendImpl_foo();
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(new \RpcOptions(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    $this->recvImpl_foo($currentseqid);
  }

}

class MyServiceClient extends \ThriftClientBase implements MyServiceClientIf {
  use MyServiceClientBase;

  /**
   * Original thrift definition:-
   * void
   *   foo();
   */
  public async function foo(): Awaitable<void> {
    await $this->asyncHandler_->genBefore("MyService", "foo");
    $currentseqid = $this->sendImpl_foo();
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(new \RpcOptions(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    $this->recvImpl_foo($currentseqid);
  }

  /* send and recv functions */
  public function send_foo(): int {
    return $this->sendImpl_foo();
  }
  public function recv_foo(?int $expectedsequenceid = null): void {
    $this->recvImpl_foo($expectedsequenceid);
  }
}

class MyServiceAsyncRpcOptionsClient extends \ThriftClientBase implements MyServiceAsyncRpcOptionsIf {
  use MyServiceClientBase;

  /**
   * Original thrift definition:-
   * void
   *   foo();
   */
  public async function foo(\RpcOptions $rpc_options): Awaitable<void> {
    await $this->asyncHandler_->genBefore("MyService", "foo");
    $currentseqid = $this->sendImpl_foo();
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    $this->recvImpl_foo($currentseqid);
  }

}

// HELPER FUNCTIONS AND STRUCTURES

class MyService_foo_args implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  <<__Rx>>
  public function __construct(  ) {
  }

  <<__Rx>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
    );
  }

  public function getName(): string {
    return 'MyService_foo_args';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }

}

class MyService_foo_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  <<__Rx>>
  public function __construct(  ) {
  }

  <<__Rx>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
    );
  }

  public function getName(): string {
    return 'MyService_foo_result';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }

}

class MyServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getAllStructuredAnnotations(): \TServiceAnnotations {
    return shape(
      'service' => dict[],
      'functions' => dict[
        'foo' => dict[],
      ],
    );
  }
}

