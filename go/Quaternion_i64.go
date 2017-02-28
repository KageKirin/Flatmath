// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 4D hypercomplex of longs
type Quaternion_i64 struct {
	_tab flatbuffers.Struct
}

func (rcv *Quaternion_i64) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Quaternion_i64) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Quaternion_i64) X() int64 {
	return rcv._tab.GetInt64(rcv._tab.Pos + flatbuffers.UOffsetT(0))
}
func (rcv *Quaternion_i64) MutateX(n int64) bool {
	return rcv._tab.MutateInt64(rcv._tab.Pos+flatbuffers.UOffsetT(0), n)
}

func (rcv *Quaternion_i64) Y() int64 {
	return rcv._tab.GetInt64(rcv._tab.Pos + flatbuffers.UOffsetT(8))
}
func (rcv *Quaternion_i64) MutateY(n int64) bool {
	return rcv._tab.MutateInt64(rcv._tab.Pos+flatbuffers.UOffsetT(8), n)
}

func (rcv *Quaternion_i64) Z() int64 {
	return rcv._tab.GetInt64(rcv._tab.Pos + flatbuffers.UOffsetT(16))
}
func (rcv *Quaternion_i64) MutateZ(n int64) bool {
	return rcv._tab.MutateInt64(rcv._tab.Pos+flatbuffers.UOffsetT(16), n)
}

func (rcv *Quaternion_i64) W() int64 {
	return rcv._tab.GetInt64(rcv._tab.Pos + flatbuffers.UOffsetT(24))
}
func (rcv *Quaternion_i64) MutateW(n int64) bool {
	return rcv._tab.MutateInt64(rcv._tab.Pos+flatbuffers.UOffsetT(24), n)
}

func CreateQuaternion_i64(builder *flatbuffers.Builder, x int64, y int64, z int64, w int64) flatbuffers.UOffsetT {
	builder.Prep(8, 32)
	builder.PrependInt64(w)
	builder.PrependInt64(z)
	builder.PrependInt64(y)
	builder.PrependInt64(x)
	return builder.Offset()
}