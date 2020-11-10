<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * Foo
 */
class Foo implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::I64,
    ),
    2 => shape(
      'var' => 'b',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'b' => 2,
  ];

  const type TConstructorShape = shape(
    ?'a' => int,
    ?'b' => string,
  );

  const int STRUCTURAL_ID = 5526046231048010857;
  /**
   * Original thrift field:-
   * 1: i64 a
   */
  public int $a;
  /**
   * Original thrift field:-
   * 2: string b
   */
  public string $b;

  <<__Rx>>
  public function __construct(<<__Soft>> KeyedContainer<string, mixed> $vals = dict[]) {
    $this->a = (int)idx($vals, 'a') ?? 0;
    $this->b = (string)idx($vals, 'b') ?? '';
  }

  <<__Rx>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Map {
        'a' => Shapes::idx($shape, 'a'),
        'b' => Shapes::idx($shape, 'b'),
      },
    );
  }

  <<__Rx>>
  public static function fromMap_DEPRECATED(<<__Soft>> KeyedContainer<string, mixed> $map = dict[]): this {
    return new static($map);
  }

  public function getName(): string {
    return 'Foo';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'a' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'b' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }

}

