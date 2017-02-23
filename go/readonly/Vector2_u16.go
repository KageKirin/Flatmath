// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// ushort types
/// 2D vector of ushorts
type Vector2_u16 struct {
	_tab flatbuffers.Struct
}

func (rcv *Vector2_u16) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *Vector2_u16) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *Vector2_u16) X() uint16 {
	return rcv._tab.GetUint16(rcv._tab.Pos + flatbuffers.UOffsetT(0))
}
func (rcv *Vector2_u16) MutateX(n uint16) bool {
	return rcv._tab.MutateUint16(rcv._tab.Pos+flatbuffers.UOffsetT(0), n)
}

func (rcv *Vector2_u16) Y() uint16 {
	return rcv._tab.GetUint16(rcv._tab.Pos + flatbuffers.UOffsetT(2))
}
func (rcv *Vector2_u16) MutateY(n uint16) bool {
	return rcv._tab.MutateUint16(rcv._tab.Pos+flatbuffers.UOffsetT(2), n)
}

func CreateVector2_u16(builder *flatbuffers.Builder, x uint16, y uint16) flatbuffers.UOffsetT {
	builder.Prep(2, 4)
	builder.PrependUint16(y)
	builder.PrependUint16(x)
	return builder.Offset()
}
