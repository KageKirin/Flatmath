// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 4x2 matrix of longs
type Matrix4x2_i64 struct {
	_tab flatbuffers.Struct
}

func (rcv *Matrix4x2_i64) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Matrix4x2_i64) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Matrix4x2_i64) _0(obj *Vector2_i64) *Vector2_i64 {
	if obj == nil {
		obj = new(Vector2_i64)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+0)
	return obj
}
func (rcv *Matrix4x2_i64) _1(obj *Vector2_i64) *Vector2_i64 {
	if obj == nil {
		obj = new(Vector2_i64)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+16)
	return obj
}
func (rcv *Matrix4x2_i64) _2(obj *Vector2_i64) *Vector2_i64 {
	if obj == nil {
		obj = new(Vector2_i64)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+32)
	return obj
}
func (rcv *Matrix4x2_i64) _3(obj *Vector2_i64) *Vector2_i64 {
	if obj == nil {
		obj = new(Vector2_i64)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+48)
	return obj
}

func CreateMatrix4x2_i64(builder *flatbuffers.Builder, _0_x int64, _0_y int64, _1_x int64, _1_y int64, _2_x int64, _2_y int64, _3_x int64, _3_y int64) flatbuffers.UOffsetT {
	builder.Prep(8, 64)
	builder.Prep(8, 16)
	builder.PrependInt64(_3_y)
	builder.PrependInt64(_3_x)
	builder.Prep(8, 16)
	builder.PrependInt64(_2_y)
	builder.PrependInt64(_2_x)
	builder.Prep(8, 16)
	builder.PrependInt64(_1_y)
	builder.PrependInt64(_1_x)
	builder.Prep(8, 16)
	builder.PrependInt64(_0_y)
	builder.PrependInt64(_0_x)
	return builder.Offset()
}
