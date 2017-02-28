// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 3x4 matrix of ushorts
type Matrix3x4_u16 struct {
	_tab flatbuffers.Struct
}

func (rcv *Matrix3x4_u16) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Matrix3x4_u16) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Matrix3x4_u16) _0(obj *Vector4_u16) *Vector4_u16 {
	if obj == nil {
		obj = new(Vector4_u16)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+0)
	return obj
}
func (rcv *Matrix3x4_u16) _1(obj *Vector4_u16) *Vector4_u16 {
	if obj == nil {
		obj = new(Vector4_u16)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+8)
	return obj
}
func (rcv *Matrix3x4_u16) _2(obj *Vector4_u16) *Vector4_u16 {
	if obj == nil {
		obj = new(Vector4_u16)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+16)
	return obj
}

func CreateMatrix3x4_u16(builder *flatbuffers.Builder, _0_x uint16, _0_y uint16, _0_z uint16, _0_w uint16, _1_x uint16, _1_y uint16, _1_z uint16, _1_w uint16, _2_x uint16, _2_y uint16, _2_z uint16, _2_w uint16) flatbuffers.UOffsetT {
	builder.Prep(2, 24)
	builder.Prep(2, 8)
	builder.PrependUint16(_2_w)
	builder.PrependUint16(_2_z)
	builder.PrependUint16(_2_y)
	builder.PrependUint16(_2_x)
	builder.Prep(2, 8)
	builder.PrependUint16(_1_w)
	builder.PrependUint16(_1_z)
	builder.PrependUint16(_1_y)
	builder.PrependUint16(_1_x)
	builder.Prep(2, 8)
	builder.PrependUint16(_0_w)
	builder.PrependUint16(_0_z)
	builder.PrependUint16(_0_y)
	builder.PrependUint16(_0_x)
	return builder.Offset()
}