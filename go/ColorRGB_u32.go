// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// RGB color of uint components
type ColorRGB_u32 struct {
	_tab flatbuffers.Struct
}

func (rcv *ColorRGB_u32) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *ColorRGB_u32) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *ColorRGB_u32) R() uint32 {
	return rcv._tab.GetUint32(rcv._tab.Pos + flatbuffers.UOffsetT(0))
}
func (rcv *ColorRGB_u32) MutateR(n uint32) bool {
	return rcv._tab.MutateUint32(rcv._tab.Pos+flatbuffers.UOffsetT(0), n)
}

func (rcv *ColorRGB_u32) G() uint32 {
	return rcv._tab.GetUint32(rcv._tab.Pos + flatbuffers.UOffsetT(4))
}
func (rcv *ColorRGB_u32) MutateG(n uint32) bool {
	return rcv._tab.MutateUint32(rcv._tab.Pos+flatbuffers.UOffsetT(4), n)
}

func (rcv *ColorRGB_u32) B() uint32 {
	return rcv._tab.GetUint32(rcv._tab.Pos + flatbuffers.UOffsetT(8))
}
func (rcv *ColorRGB_u32) MutateB(n uint32) bool {
	return rcv._tab.MutateUint32(rcv._tab.Pos+flatbuffers.UOffsetT(8), n)
}

func CreateColorRGB_u32(builder *flatbuffers.Builder, r uint32, g uint32, b uint32) flatbuffers.UOffsetT {
	builder.Prep(4, 12)
	builder.PrependUint32(b)
	builder.PrependUint32(g)
	builder.PrependUint32(r)
	return builder.Offset()
}
