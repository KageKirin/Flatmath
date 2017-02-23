// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 4x4 matrix of bytes
type Matrix4x4_i8 struct {
	_tab flatbuffers.Struct
}

func (rcv *Matrix4x4_i8) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Matrix4x4_i8) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Matrix4x4_i8) _0(obj *Vector4_i8) *Vector4_i8 {
	if obj == nil {
		obj = new(Vector4_i8)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+0)
	return obj
}
func (rcv *Matrix4x4_i8) _1(obj *Vector4_i8) *Vector4_i8 {
	if obj == nil {
		obj = new(Vector4_i8)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+4)
	return obj
}
func (rcv *Matrix4x4_i8) _2(obj *Vector4_i8) *Vector4_i8 {
	if obj == nil {
		obj = new(Vector4_i8)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+8)
	return obj
}
func (rcv *Matrix4x4_i8) _3(obj *Vector4_i8) *Vector4_i8 {
	if obj == nil {
		obj = new(Vector4_i8)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+12)
	return obj
}

func CreateMatrix4x4_i8(builder *flatbuffers.Builder, _0_x int8, _0_y int8, _0_z int8, _0_w int8, _1_x int8, _1_y int8, _1_z int8, _1_w int8, _2_x int8, _2_y int8, _2_z int8, _2_w int8, _3_x int8, _3_y int8, _3_z int8, _3_w int8) flatbuffers.UOffsetT {
	builder.Prep(1, 16)
	builder.Prep(1, 4)
	builder.PrependInt8(_3_w)
	builder.PrependInt8(_3_z)
	builder.PrependInt8(_3_y)
	builder.PrependInt8(_3_x)
	builder.Prep(1, 4)
	builder.PrependInt8(_2_w)
	builder.PrependInt8(_2_z)
	builder.PrependInt8(_2_y)
	builder.PrependInt8(_2_x)
	builder.Prep(1, 4)
	builder.PrependInt8(_1_w)
	builder.PrependInt8(_1_z)
	builder.PrependInt8(_1_y)
	builder.PrependInt8(_1_x)
	builder.Prep(1, 4)
	builder.PrependInt8(_0_w)
	builder.PrependInt8(_0_z)
	builder.PrependInt8(_0_y)
	builder.PrependInt8(_0_x)
	return builder.Offset()
}
