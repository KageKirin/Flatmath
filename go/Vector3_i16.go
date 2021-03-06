// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// 3D vector of shorts
type Vector3_i16 struct {
	_tab flatbuffers.Struct
}

func (rcv *Vector3_i16) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Vector3_i16) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Vector3_i16) X() int16 {
	return rcv._tab.GetInt16(rcv._tab.Pos + flatbuffers.UOffsetT(0))
}
func (rcv *Vector3_i16) MutateX(n int16) bool {
	return rcv._tab.MutateInt16(rcv._tab.Pos+flatbuffers.UOffsetT(0), n)
}

func (rcv *Vector3_i16) Y() int16 {
	return rcv._tab.GetInt16(rcv._tab.Pos + flatbuffers.UOffsetT(2))
}
func (rcv *Vector3_i16) MutateY(n int16) bool {
	return rcv._tab.MutateInt16(rcv._tab.Pos+flatbuffers.UOffsetT(2), n)
}

func (rcv *Vector3_i16) Z() int16 {
	return rcv._tab.GetInt16(rcv._tab.Pos + flatbuffers.UOffsetT(4))
}
func (rcv *Vector3_i16) MutateZ(n int16) bool {
	return rcv._tab.MutateInt16(rcv._tab.Pos+flatbuffers.UOffsetT(4), n)
}

func CreateVector3_i16(builder *flatbuffers.Builder, x int16, y int16, z int16) flatbuffers.UOffsetT {
	builder.Prep(2, 6)
	builder.PrependInt16(z)
	builder.PrependInt16(y)
	builder.PrependInt16(x)
	return builder.Offset()
}
