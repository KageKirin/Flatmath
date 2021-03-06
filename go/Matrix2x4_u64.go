// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 2x4 matrix of ulongs
type Matrix2x4_u64 struct {
	_tab flatbuffers.Struct
}

func (rcv *Matrix2x4_u64) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Matrix2x4_u64) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Matrix2x4_u64) _0(obj *Vector4_u64) *Vector4_u64 {
	if obj == nil {
		obj = new(Vector4_u64)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+0)
	return obj
}
func (rcv *Matrix2x4_u64) _1(obj *Vector4_u64) *Vector4_u64 {
	if obj == nil {
		obj = new(Vector4_u64)
	}
	obj.Init(rcv._tab.Bytes, rcv._tab.Pos+32)
	return obj
}

func CreateMatrix2x4_u64(builder *flatbuffers.Builder, _0_x uint64, _0_y uint64, _0_z uint64, _0_w uint64, _1_x uint64, _1_y uint64, _1_z uint64, _1_w uint64) flatbuffers.UOffsetT {
	builder.Prep(8, 64)
	builder.Prep(8, 32)
	builder.PrependUint64(_1_w)
	builder.PrependUint64(_1_z)
	builder.PrependUint64(_1_y)
	builder.PrependUint64(_1_x)
	builder.Prep(8, 32)
	builder.PrependUint64(_0_w)
	builder.PrependUint64(_0_z)
	builder.PrependUint64(_0_y)
	builder.PrependUint64(_0_x)
	return builder.Offset()
}
