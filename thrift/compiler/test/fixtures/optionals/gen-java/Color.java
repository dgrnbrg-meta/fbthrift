/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class Color implements TBase, java.io.Serializable, Cloneable, Comparable<Color> {
  private static final TStruct STRUCT_DESC = new TStruct("Color");
  private static final TField RED_FIELD_DESC = new TField("red", TType.DOUBLE, (short)1);
  private static final TField GREEN_FIELD_DESC = new TField("green", TType.DOUBLE, (short)2);
  private static final TField BLUE_FIELD_DESC = new TField("blue", TType.DOUBLE, (short)3);
  private static final TField ALPHA_FIELD_DESC = new TField("alpha", TType.DOUBLE, (short)4);

  public double red;
  public double green;
  public double blue;
  public double alpha;
  public static final int RED = 1;
  public static final int GREEN = 2;
  public static final int BLUE = 3;
  public static final int ALPHA = 4;
  public static boolean DEFAULT_PRETTY_PRINT = true;

  // isset id assignments
  private static final int __RED_ISSET_ID = 0;
  private static final int __GREEN_ISSET_ID = 1;
  private static final int __BLUE_ISSET_ID = 2;
  private static final int __ALPHA_ISSET_ID = 3;
  private BitSet __isset_bit_vector = new BitSet(4);

  public static final Map<Integer, FieldMetaData> metaDataMap;
  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(RED, new FieldMetaData("red", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.DOUBLE)));
    tmpMetaDataMap.put(GREEN, new FieldMetaData("green", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.DOUBLE)));
    tmpMetaDataMap.put(BLUE, new FieldMetaData("blue", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.DOUBLE)));
    tmpMetaDataMap.put(ALPHA, new FieldMetaData("alpha", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.DOUBLE)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(Color.class, metaDataMap);
  }

  public Color() {
  }

  public Color(
    double red,
    double green,
    double blue,
    double alpha)
  {
    this();
    this.red = red;
    setRedIsSet(true);
    this.green = green;
    setGreenIsSet(true);
    this.blue = blue;
    setBlueIsSet(true);
    this.alpha = alpha;
    setAlphaIsSet(true);
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public Color(Color other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.red = TBaseHelper.deepCopy(other.red);
    this.green = TBaseHelper.deepCopy(other.green);
    this.blue = TBaseHelper.deepCopy(other.blue);
    this.alpha = TBaseHelper.deepCopy(other.alpha);
  }

  public Color deepCopy() {
    return new Color(this);
  }

  @Deprecated
  public Color clone() {
    return new Color(this);
  }

  public double getRed() {
    return this.red;
  }

  public Color setRed(double red) {
    this.red = red;
    setRedIsSet(true);
    return this;
  }

  public void unsetRed() {
    __isset_bit_vector.clear(__RED_ISSET_ID);
  }

  // Returns true if field red is set (has been assigned a value) and false otherwise
  public boolean isSetRed() {
    return __isset_bit_vector.get(__RED_ISSET_ID);
  }

  public void setRedIsSet(boolean __value) {
    __isset_bit_vector.set(__RED_ISSET_ID, __value);
  }

  public double getGreen() {
    return this.green;
  }

  public Color setGreen(double green) {
    this.green = green;
    setGreenIsSet(true);
    return this;
  }

  public void unsetGreen() {
    __isset_bit_vector.clear(__GREEN_ISSET_ID);
  }

  // Returns true if field green is set (has been assigned a value) and false otherwise
  public boolean isSetGreen() {
    return __isset_bit_vector.get(__GREEN_ISSET_ID);
  }

  public void setGreenIsSet(boolean __value) {
    __isset_bit_vector.set(__GREEN_ISSET_ID, __value);
  }

  public double getBlue() {
    return this.blue;
  }

  public Color setBlue(double blue) {
    this.blue = blue;
    setBlueIsSet(true);
    return this;
  }

  public void unsetBlue() {
    __isset_bit_vector.clear(__BLUE_ISSET_ID);
  }

  // Returns true if field blue is set (has been assigned a value) and false otherwise
  public boolean isSetBlue() {
    return __isset_bit_vector.get(__BLUE_ISSET_ID);
  }

  public void setBlueIsSet(boolean __value) {
    __isset_bit_vector.set(__BLUE_ISSET_ID, __value);
  }

  public double getAlpha() {
    return this.alpha;
  }

  public Color setAlpha(double alpha) {
    this.alpha = alpha;
    setAlphaIsSet(true);
    return this;
  }

  public void unsetAlpha() {
    __isset_bit_vector.clear(__ALPHA_ISSET_ID);
  }

  // Returns true if field alpha is set (has been assigned a value) and false otherwise
  public boolean isSetAlpha() {
    return __isset_bit_vector.get(__ALPHA_ISSET_ID);
  }

  public void setAlphaIsSet(boolean __value) {
    __isset_bit_vector.set(__ALPHA_ISSET_ID, __value);
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case RED:
      if (__value == null) {
        unsetRed();
      } else {
        setRed((Double)__value);
      }
      break;

    case GREEN:
      if (__value == null) {
        unsetGreen();
      } else {
        setGreen((Double)__value);
      }
      break;

    case BLUE:
      if (__value == null) {
        unsetBlue();
      } else {
        setBlue((Double)__value);
      }
      break;

    case ALPHA:
      if (__value == null) {
        unsetAlpha();
      } else {
        setAlpha((Double)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case RED:
      return new Double(getRed());

    case GREEN:
      return new Double(getGreen());

    case BLUE:
      return new Double(getBlue());

    case ALPHA:
      return new Double(getAlpha());

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof Color)
      return this.equals((Color)that);
    return false;
  }

  public boolean equals(Color that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_red = true;
    boolean that_present_red = true;
    if (this_present_red || that_present_red) {
      if (!(this_present_red && that_present_red))
        return false;
      if (!TBaseHelper.equalsNobinary(this.red, that.red))
        return false;
    }

    boolean this_present_green = true;
    boolean that_present_green = true;
    if (this_present_green || that_present_green) {
      if (!(this_present_green && that_present_green))
        return false;
      if (!TBaseHelper.equalsNobinary(this.green, that.green))
        return false;
    }

    boolean this_present_blue = true;
    boolean that_present_blue = true;
    if (this_present_blue || that_present_blue) {
      if (!(this_present_blue && that_present_blue))
        return false;
      if (!TBaseHelper.equalsNobinary(this.blue, that.blue))
        return false;
    }

    boolean this_present_alpha = true;
    boolean that_present_alpha = true;
    if (this_present_alpha || that_present_alpha) {
      if (!(this_present_alpha && that_present_alpha))
        return false;
      if (!TBaseHelper.equalsNobinary(this.alpha, that.alpha))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {red, green, blue, alpha});
  }

  @Override
  public int compareTo(Color other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetRed()).compareTo(other.isSetRed());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(red, other.red);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetGreen()).compareTo(other.isSetGreen());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(green, other.green);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetBlue()).compareTo(other.isSetBlue());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(blue, other.blue);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetAlpha()).compareTo(other.isSetAlpha());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(alpha, other.alpha);
    if (lastComparison != 0) {
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) { 
        break;
      }
      switch (__field.id)
      {
        case RED:
          if (__field.type == TType.DOUBLE) {
            this.red = iprot.readDouble();
            setRedIsSet(true);
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case GREEN:
          if (__field.type == TType.DOUBLE) {
            this.green = iprot.readDouble();
            setGreenIsSet(true);
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case BLUE:
          if (__field.type == TType.DOUBLE) {
            this.blue = iprot.readDouble();
            setBlueIsSet(true);
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ALPHA:
          if (__field.type == TType.DOUBLE) {
            this.alpha = iprot.readDouble();
            setAlphaIsSet(true);
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    oprot.writeFieldBegin(RED_FIELD_DESC);
    oprot.writeDouble(this.red);
    oprot.writeFieldEnd();
    oprot.writeFieldBegin(GREEN_FIELD_DESC);
    oprot.writeDouble(this.green);
    oprot.writeFieldEnd();
    oprot.writeFieldBegin(BLUE_FIELD_DESC);
    oprot.writeDouble(this.blue);
    oprot.writeFieldEnd();
    oprot.writeFieldBegin(ALPHA_FIELD_DESC);
    oprot.writeDouble(this.alpha);
    oprot.writeFieldEnd();
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(DEFAULT_PRETTY_PRINT);
  }

  @Override
  public String toString(boolean prettyPrint) {
    return toString(1, prettyPrint);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("Color");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("red");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getRed(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("green");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getGreen(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("blue");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getBlue(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("alpha");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getAlpha(), indent + 1, prettyPrint));
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

