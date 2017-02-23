// automatically generated by the FlatBuffers compiler, do not modify

package flatmath

import (
	flatbuffers "github.com/google/flatbuffers/go"
)

/// RGB color of long components
type ColorRGB_i64 struct {
	_tab flatbuffers.Struct
}

func (rcv *ColorRGB_i64) Init(buf []byte, i flatbuffers.UOffsetT) {
	rcv._tab.Bytes = buf
	rcv._tab.Pos = i
}

func (rcv *ColorRGB_i64) Table() flatbuffers.Table {
	return rcv._tab.Table
}

func (rcv *ColorRGB_i64) R() int64 {
	return rcv._tab.GetInt64(rcv._tab.Pos + flatbuffers.UOffsetT(0))
}
func (rcv *ColorRGB_i64) MutateR(n int64) bool {
	return rcv._tab.MutateInt64(rcv._tab.Pos+flatbuffers.UOffsetT(0), n)
}

func (rcv *ColorRGB_i64) G() int64 {
	return rcv._tab.GetInt64(rcv._tab.Pos + flatbuffers.UOffsetT(8))
}
func (rcv *ColorRGB_i64) MutateG(n int64) bool {
	return rcv._tab.MutateInt64(rcv._tab.Pos+flatbuffers.UOffsetT(8), n)
}

func (rcv *ColorRGB_i64) B() int64 {
	return rcv._tab.GetInt64(rcv._tab.Pos + flatbuffers.UOffsetT(16))
}
func (rcv *ColorRGB_i64) MutateB(n int64) bool {
	return rcv._tab.MutateInt64(rcv._tab.Pos+flatbuffers.UOffsetT(16), n)
}

func CreateColorRGB_i64(builder *flatbuffers.Builder, r int64, g int64, b int64) flatbuffers.UOffsetT {
	builder.Prep(8, 24)
	builder.PrependInt64(b)
	builder.PrependInt64(g)
	builder.PrependInt64(r)
	return builder.Offset()
}
