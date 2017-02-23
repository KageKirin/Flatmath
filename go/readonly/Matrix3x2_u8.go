// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 3x2 matrix of ubytes
type Matrix3x2_u8 struct {
	_tab flatbuffers.Struct
}

func (rcv *Matrix3x2_u8) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Matrix3x2_u8) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Matrix3x2_u8) _0(obj *Vector2_u8) *Vector2_u8 {
	if obj == nil {
		obj = new(Vector2_u8)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+0)
	return obj
}
func (rcv *Matrix3x2_u8) _1(obj *Vector2_u8) *Vector2_u8 {
	if obj == nil {
		obj = new(Vector2_u8)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+2)
	return obj
}
func (rcv *Matrix3x2_u8) _2(obj *Vector2_u8) *Vector2_u8 {
	if obj == nil {
		obj = new(Vector2_u8)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+4)
	return obj
}

func CreateMatrix3x2_u8(builder *flatbuffers.Builder, _0_x byte, _0_y byte, _1_x byte, _1_y byte, _2_x byte, _2_y byte) flatbuffers.UOffsetT {
	builder.Prep(1, 6)
	builder.Prep(1, 2)
	builder.PrependByte(_2_y)
	builder.PrependByte(_2_x)
	builder.Prep(1, 2)
	builder.PrependByte(_1_y)
	builder.PrependByte(_1_x)
	builder.Prep(1, 2)
	builder.PrependByte(_0_y)
	builder.PrependByte(_0_x)
	return builder.Offset()
}
