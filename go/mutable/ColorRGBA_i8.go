// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// RGBA color of byte components
type ColorRGBA_i8 struct {
	_tab flatbuffers.Struct
}

func (rcv *ColorRGBA_i8) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *ColorRGBA_i8) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *ColorRGBA_i8) R() int8 {
	return rcv._tab.GetInt8(rcv._tab.Pos + flatbuffers.UOffsetT(0))
}
func (rcv *ColorRGBA_i8) MutateR(n int8) bool {
	return rcv._tab.MutateInt8(rcv._tab.Pos+flatbuffers.UOffsetT(0), n)
}

func (rcv *ColorRGBA_i8) G() int8 {
	return rcv._tab.GetInt8(rcv._tab.Pos + flatbuffers.UOffsetT(1))
}
func (rcv *ColorRGBA_i8) MutateG(n int8) bool {
	return rcv._tab.MutateInt8(rcv._tab.Pos+flatbuffers.UOffsetT(1), n)
}

func (rcv *ColorRGBA_i8) B() int8 {
	return rcv._tab.GetInt8(rcv._tab.Pos + flatbuffers.UOffsetT(2))
}
func (rcv *ColorRGBA_i8) MutateB(n int8) bool {
	return rcv._tab.MutateInt8(rcv._tab.Pos+flatbuffers.UOffsetT(2), n)
}

func (rcv *ColorRGBA_i8) A() int8 {
	return rcv._tab.GetInt8(rcv._tab.Pos + flatbuffers.UOffsetT(3))
}
func (rcv *ColorRGBA_i8) MutateA(n int8) bool {
	return rcv._tab.MutateInt8(rcv._tab.Pos+flatbuffers.UOffsetT(3), n)
}

func CreateColorRGBA_i8(builder *flatbuffers.Builder, r int8, g int8, b int8, a int8) flatbuffers.UOffsetT {
	builder.Prep(1, 4)
	builder.PrependInt8(a)
	builder.PrependInt8(b)
	builder.PrependInt8(g)
	builder.PrependInt8(r)
	return builder.Offset()
}
