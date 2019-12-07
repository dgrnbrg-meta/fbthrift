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
public class StructWithRefTypeSharedConst implements TBase, java.io.Serializable, Cloneable, Comparable<StructWithRefTypeSharedConst> {
  private static final TStruct STRUCT_DESC = new TStruct("StructWithRefTypeSharedConst");
  private static final TField DEF_FIELD_FIELD_DESC = new TField("def_field", TType.STRUCT, (short)1);
  private static final TField OPT_FIELD_FIELD_DESC = new TField("opt_field", TType.STRUCT, (short)2);
  private static final TField REQ_FIELD_FIELD_DESC = new TField("req_field", TType.STRUCT, (short)3);

  public Empty def_field;
  public Empty opt_field;
  public Empty req_field;
  public static final int DEF_FIELD = 1;
  public static final int OPT_FIELD = 2;
  public static final int REQ_FIELD = 3;
  public static boolean DEFAULT_PRETTY_PRINT = true;

  // isset id assignments

  public static final Map<Integer, FieldMetaData> metaDataMap;
  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(DEF_FIELD, new FieldMetaData("def_field", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, Empty.class)));
    tmpMetaDataMap.put(OPT_FIELD, new FieldMetaData("opt_field", TFieldRequirementType.OPTIONAL, 
        new StructMetaData(TType.STRUCT, Empty.class)));
    tmpMetaDataMap.put(REQ_FIELD, new FieldMetaData("req_field", TFieldRequirementType.REQUIRED, 
        new StructMetaData(TType.STRUCT, Empty.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(StructWithRefTypeSharedConst.class, metaDataMap);
  }

  public StructWithRefTypeSharedConst() {
  }

  public StructWithRefTypeSharedConst(
    Empty req_field)
  {
    this();
    this.req_field = req_field;
  }

  public StructWithRefTypeSharedConst(
    Empty def_field,
    Empty req_field)
  {
    this();
    this.def_field = def_field;
    this.req_field = req_field;
  }

  public StructWithRefTypeSharedConst(
    Empty def_field,
    Empty opt_field,
    Empty req_field)
  {
    this();
    this.def_field = def_field;
    this.opt_field = opt_field;
    this.req_field = req_field;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public StructWithRefTypeSharedConst(StructWithRefTypeSharedConst other) {
    if (other.isSetDef_field()) {
      this.def_field = TBaseHelper.deepCopy(other.def_field);
    }
    if (other.isSetOpt_field()) {
      this.opt_field = TBaseHelper.deepCopy(other.opt_field);
    }
    if (other.isSetReq_field()) {
      this.req_field = TBaseHelper.deepCopy(other.req_field);
    }
  }

  public StructWithRefTypeSharedConst deepCopy() {
    return new StructWithRefTypeSharedConst(this);
  }

  @Deprecated
  public StructWithRefTypeSharedConst clone() {
    return new StructWithRefTypeSharedConst(this);
  }

  public Empty getDef_field() {
    return this.def_field;
  }

  public StructWithRefTypeSharedConst setDef_field(Empty def_field) {
    this.def_field = def_field;
    return this;
  }

  public void unsetDef_field() {
    this.def_field = null;
  }

  // Returns true if field def_field is set (has been assigned a value) and false otherwise
  public boolean isSetDef_field() {
    return this.def_field != null;
  }

  public void setDef_fieldIsSet(boolean __value) {
    if (!__value) {
      this.def_field = null;
    }
  }

  public Empty getOpt_field() {
    return this.opt_field;
  }

  public StructWithRefTypeSharedConst setOpt_field(Empty opt_field) {
    this.opt_field = opt_field;
    return this;
  }

  public void unsetOpt_field() {
    this.opt_field = null;
  }

  // Returns true if field opt_field is set (has been assigned a value) and false otherwise
  public boolean isSetOpt_field() {
    return this.opt_field != null;
  }

  public void setOpt_fieldIsSet(boolean __value) {
    if (!__value) {
      this.opt_field = null;
    }
  }

  public Empty getReq_field() {
    return this.req_field;
  }

  public StructWithRefTypeSharedConst setReq_field(Empty req_field) {
    this.req_field = req_field;
    return this;
  }

  public void unsetReq_field() {
    this.req_field = null;
  }

  // Returns true if field req_field is set (has been assigned a value) and false otherwise
  public boolean isSetReq_field() {
    return this.req_field != null;
  }

  public void setReq_fieldIsSet(boolean __value) {
    if (!__value) {
      this.req_field = null;
    }
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case DEF_FIELD:
      if (__value == null) {
        unsetDef_field();
      } else {
        setDef_field((Empty)__value);
      }
      break;

    case OPT_FIELD:
      if (__value == null) {
        unsetOpt_field();
      } else {
        setOpt_field((Empty)__value);
      }
      break;

    case REQ_FIELD:
      if (__value == null) {
        unsetReq_field();
      } else {
        setReq_field((Empty)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case DEF_FIELD:
      return getDef_field();

    case OPT_FIELD:
      return getOpt_field();

    case REQ_FIELD:
      return getReq_field();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof StructWithRefTypeSharedConst)
      return this.equals((StructWithRefTypeSharedConst)that);
    return false;
  }

  public boolean equals(StructWithRefTypeSharedConst that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_def_field = true && this.isSetDef_field();
    boolean that_present_def_field = true && that.isSetDef_field();
    if (this_present_def_field || that_present_def_field) {
      if (!(this_present_def_field && that_present_def_field))
        return false;
      if (!TBaseHelper.equalsNobinary(this.def_field, that.def_field))
        return false;
    }

    boolean this_present_opt_field = true && this.isSetOpt_field();
    boolean that_present_opt_field = true && that.isSetOpt_field();
    if (this_present_opt_field || that_present_opt_field) {
      if (!(this_present_opt_field && that_present_opt_field))
        return false;
      if (!TBaseHelper.equalsNobinary(this.opt_field, that.opt_field))
        return false;
    }

    boolean this_present_req_field = true && this.isSetReq_field();
    boolean that_present_req_field = true && that.isSetReq_field();
    if (this_present_req_field || that_present_req_field) {
      if (!(this_present_req_field && that_present_req_field))
        return false;
      if (!TBaseHelper.equalsNobinary(this.req_field, that.req_field))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {def_field, opt_field, req_field});
  }

  @Override
  public int compareTo(StructWithRefTypeSharedConst other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetDef_field()).compareTo(other.isSetDef_field());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(def_field, other.def_field);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetOpt_field()).compareTo(other.isSetOpt_field());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(opt_field, other.opt_field);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetReq_field()).compareTo(other.isSetReq_field());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(req_field, other.req_field);
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
        case DEF_FIELD:
          if (__field.type == TType.STRUCT) {
            this.def_field = new Empty();
            this.def_field.read(iprot);
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case OPT_FIELD:
          if (__field.type == TType.STRUCT) {
            this.opt_field = new Empty();
            this.opt_field.read(iprot);
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case REQ_FIELD:
          if (__field.type == TType.STRUCT) {
            this.req_field = new Empty();
            this.req_field.read(iprot);
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
    if (this.def_field != null) {
      oprot.writeFieldBegin(DEF_FIELD_FIELD_DESC);
      this.def_field.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.opt_field != null) {
      if (isSetOpt_field()) {
        oprot.writeFieldBegin(OPT_FIELD_FIELD_DESC);
        this.opt_field.write(oprot);
        oprot.writeFieldEnd();
      }
    }
    if (this.req_field != null) {
      oprot.writeFieldBegin(REQ_FIELD_FIELD_DESC);
      this.req_field.write(oprot);
      oprot.writeFieldEnd();
    }
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
    StringBuilder sb = new StringBuilder("StructWithRefTypeSharedConst");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("def_field");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getDef_field() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getDef_field(), indent + 1, prettyPrint));
    }
    first = false;
    if (isSetOpt_field())
    {
      if (!first) sb.append("," + newLine);
      sb.append(indentStr);
      sb.append("opt_field");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getOpt_field() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getOpt_field(), indent + 1, prettyPrint));
      }
      first = false;
    }
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("req_field");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getReq_field() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getReq_field(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
    if (req_field == null) {
      throw new TProtocolException(TProtocolException.MISSING_REQUIRED_FIELD, "Required field 'req_field' was not present! Struct: " + toString());
    }
  }

}

