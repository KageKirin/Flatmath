#include <string>

extern const std::string flatmath_schema; // for linker happiness
const std::string flatmath_schema(
R"(// Flatbuffer schema for generic math types (Linear Algebra)

namespace flatmath;

///-----------------------------------------------------------------------------
/// float types

/// 2D vector of floats
struct Vector2_f32(native_inline, native_type: "glm::vec2") {
	x: float(native_default: "0");
	y: float(native_default: "0");
}

/// 3D vector of floats
struct Vector3_f32(native_inline, native_type: "glm::vec3") {
	x: float(native_default: "0");
	y: float(native_default: "0");
	z: float(native_default: "0");
}

/// 4D vector of floats (homogenous coordinates)
struct Vector4_f32(native_inline, native_type: "glm::vec4") {
	x: float(native_default: "0");
	y: float(native_default: "0");
	z: float(native_default: "0");
	w: float(native_default: "0");
}

/// 4D hypercomplex of floats
struct Quaternion_f32(native_inline, native_type: "glm::quat") {
	x: float(native_default: "0");
	y: float(native_default: "0");
	z: float(native_default: "0");
	w: float(native_default: "0");
}

/// 2x2 matrix of floats
struct Matrix2x2_f32(native_inline, native_type: "glm::mat2x2") {
	_0: Vector2_f32(native_default: "1,0");
	_1: Vector2_f32(native_default: "0,1");
}

/// 2x3 matrix of floats
struct Matrix2x3_f32(native_inline, native_type: "glm::mat2x3") {
	_0: Vector3_f32(native_default: "1,0,0");
	_1: Vector3_f32(native_default: "0,1,0");
}

/// 2x4 matrix of floats
struct Matrix2x4_f32(native_inline, native_type: "glm::mat2x4") {
	_0: Vector4_f32(native_default: "1,0,0,0");
	_1: Vector4_f32(native_default: "0,1,0,0");
}

/// 3x2 matrix of floats
struct Matrix3x2_f32(native_inline, native_type: "glm::mat3x2") {
	_0: Vector2_f32(native_default: "1,0");
	_1: Vector2_f32(native_default: "0,1");
	_2: Vector2_f32(native_default: "0,0");
}

/// 3x3 matrix of floats
struct Matrix3x3_f32(native_inline, native_type: "glm::mat3x3") {
	_0: Vector3_f32(native_default: "1,0,0");
	_1: Vector3_f32(native_default: "0,1,0");
	_2: Vector3_f32(native_default: "0,0,1");
}

/// 3x4 matrix of floats
struct Matrix3x4_f32(native_inline, native_type: "glm::mat3x4") {
	_0: Vector4_f32(native_default: "1,0,0,0");
	_1: Vector4_f32(native_default: "0,1,0,0");
	_2: Vector4_f32(native_default: "0,0,1,0");
}

/// 4x2 matrix of floats
struct Matrix4x2_f32(native_inline, native_type: "glm::mat4x2") {
	_0: Vector2_f32(native_default: "1,0");
	_1: Vector2_f32(native_default: "0,1");
	_2: Vector2_f32(native_default: "0,0");
	_3: Vector2_f32(native_default: "0,0");
}

/// 4x3 matrix of floats
struct Matrix4x3_f32(native_inline, native_type: "glm::mat4x3") {
	_0: Vector3_f32(native_default: "1,0,0");
	_1: Vector3_f32(native_default: "0,1,0");
	_2: Vector3_f32(native_default: "0,0,1");
	_3: Vector3_f32(native_default: "0,0,0");
}

/// 4x4 matrix of floats
struct Matrix4x4_f32(native_inline, native_type: "glm::mat4x4") {
	_0: Vector4_f32(native_default: "1,0,0,0");
	_1: Vector4_f32(native_default: "0,1,0,0");
	_2: Vector4_f32(native_default: "0,0,1,0");
	_3: Vector4_f32(native_default: "0,0,0,1");
}

/// RGB color of float components
struct ColorRGB_f32(native_inline, native_type: "glm::vec3") {
	r: float(native_default: "0");
	g: float(native_default: "0");
	b: float(native_default: "0");
}

/// RGBA color of float components
struct ColorRGBA_f32(native_inline, native_type: "glm::vec4") {
	r: float(native_default: "0");
	g: float(native_default: "0");
	b: float(native_default: "0");
	a: float(native_default: "0");
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// int types

/// 2D vector of ints
struct Vector2_i32(native_inline, native_type: "glm::ivec2") {
	x: int(native_default: "0");
	y: int(native_default: "0");
}

/// 3D vector of ints
struct Vector3_i32(native_inline, native_type: "glm::ivec3") {
	x: int(native_default: "0");
	y: int(native_default: "0");
	z: int(native_default: "0");
}

/// 4D vector of ints (homogenous coordinates)
struct Vector4_i32(native_inline, native_type: "glm::ivec4") {
	x: int(native_default: "0");
	y: int(native_default: "0");
	z: int(native_default: "0");
	w: int(native_default: "0");
}

/// 4D hypercomplex of ints
struct Quaternion_i32(native_inline, native_type: "glm::i32quat") {
	x: int(native_default: "0");
	y: int(native_default: "0");
	z: int(native_default: "0");
	w: int(native_default: "0");
}

/// 2x2 matrix of ints
struct Matrix2x2_i32(native_inline, native_type: "glm::imat2x2") {
	_0: Vector2_i32(native_default: "1,0");
	_1: Vector2_i32(native_default: "0,1");
}

/// 2x3 matrix of ints
struct Matrix2x3_i32(native_inline, native_type: "glm::imat2x3") {
	_0: Vector3_i32(native_default: "1,0,0");
	_1: Vector3_i32(native_default: "0,1,0");
}

/// 2x4 matrix of ints
struct Matrix2x4_i32(native_inline, native_type: "glm::imat2x4") {
	_0: Vector4_i32(native_default: "1,0,0,0");
	_1: Vector4_i32(native_default: "0,1,0,0");
}

/// 3x2 matrix of ints
struct Matrix3x2_i32(native_inline, native_type: "glm::imat3x2") {
	_0: Vector2_i32(native_default: "1,0");
	_1: Vector2_i32(native_default: "0,1");
	_2: Vector2_i32(native_default: "0,0");
}

/// 3x3 matrix of ints
struct Matrix3x3_i32(native_inline, native_type: "glm::imat3x3") {
	_0: Vector3_i32(native_default: "1,0,0");
	_1: Vector3_i32(native_default: "0,1,0");
	_2: Vector3_i32(native_default: "0,0,1");
}

/// 3x4 matrix of ints
struct Matrix3x4_i32(native_inline, native_type: "glm::imat3x4") {
	_0: Vector4_i32(native_default: "1,0,0,0");
	_1: Vector4_i32(native_default: "0,1,0,0");
	_2: Vector4_i32(native_default: "0,0,1,0");
}

/// 4x2 matrix of ints
struct Matrix4x2_i32(native_inline, native_type: "glm::imat4x2") {
	_0: Vector2_i32(native_default: "1,0");
	_1: Vector2_i32(native_default: "0,1");
	_2: Vector2_i32(native_default: "0,0");
	_3: Vector2_i32(native_default: "0,0");
}

/// 4x3 matrix of ints
struct Matrix4x3_i32(native_inline, native_type: "glm::imat4x3") {
	_0: Vector3_i32(native_default: "1,0,0");
	_1: Vector3_i32(native_default: "0,1,0");
	_2: Vector3_i32(native_default: "0,0,1");
	_3: Vector3_i32(native_default: "0,0,0");
}

/// 4x4 matrix of ints
struct Matrix4x4_i32(native_inline, native_type: "glm::imat4x4") {
	_0: Vector4_i32(native_default: "1,0,0,0");
	_1: Vector4_i32(native_default: "0,1,0,0");
	_2: Vector4_i32(native_default: "0,0,1,0");
	_3: Vector4_i32(native_default: "0,0,0,1");
}

/// RGB color of int components
struct ColorRGB_i32(native_inline, native_type: "glm::ivec3") {
	r: int(native_default: "0");
	g: int(native_default: "0");
	b: int(native_default: "0");
}

/// RGBA color of int components
struct ColorRGBA_i32(native_inline, native_type: "glm::ivec4") {
	r: int(native_default: "0");
	g: int(native_default: "0");
	b: int(native_default: "0");
	a: int(native_default: "0");
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// uint types

/// 2D vector of uints
struct Vector2_u32(native_inline, native_type: "glm::uvec2") {
	x: uint(native_default: "0");
	y: uint(native_default: "0");
}

/// 3D vector of uints
struct Vector3_u32(native_inline, native_type: "glm::uvec3") {
	x: uint(native_default: "0");
	y: uint(native_default: "0");
	z: uint(native_default: "0");
}

/// 4D vector of uints (homogenous coordinates)
struct Vector4_u32(native_inline, native_type: "glm::uvec4") {
	x: uint(native_default: "0");
	y: uint(native_default: "0");
	z: uint(native_default: "0");
	w: uint(native_default: "0");
}

/// 4D hypercomplex of uints
struct Quaternion_u32(native_inline, native_type: "glm::uquat") {
	x: uint(native_default: "0");
	y: uint(native_default: "0");
	z: uint(native_default: "0");
	w: uint(native_default: "0");
}

/// 2x2 matrix of uints
struct Matrix2x2_u32(native_inline, native_type: "glm::umat2x2") {
	_0: Vector2_u32(native_default: "1,0");
	_1: Vector2_u32(native_default: "0,1");
}

/// 2x3 matrix of uints
struct Matrix2x3_u32(native_inline, native_type: "glm::umat2x3") {
	_0: Vector3_u32(native_default: "1,0,0");
	_1: Vector3_u32(native_default: "0,1,0");
}

/// 2x4 matrix of uints
struct Matrix2x4_u32(native_inline, native_type: "glm::umat2x4") {
	_0: Vector4_u32(native_default: "1,0,0,0");
	_1: Vector4_u32(native_default: "0,1,0,0");
}

/// 3x2 matrix of uints
struct Matrix3x2_u32(native_inline, native_type: "glm::umat3x2") {
	_0: Vector2_u32(native_default: "1,0");
	_1: Vector2_u32(native_default: "0,1");
	_2: Vector2_u32(native_default: "0,0");
}

/// 3x3 matrix of uints
struct Matrix3x3_u32(native_inline, native_type: "glm::umat3x3") {
	_0: Vector3_u32(native_default: "1,0,0");
	_1: Vector3_u32(native_default: "0,1,0");
	_2: Vector3_u32(native_default: "0,0,1");
}

/// 3x4 matrix of uints
struct Matrix3x4_u32(native_inline, native_type: "glm::umat3x4") {
	_0: Vector4_u32(native_default: "1,0,0,0");
	_1: Vector4_u32(native_default: "0,1,0,0");
	_2: Vector4_u32(native_default: "0,0,1,0");
}

/// 4x2 matrix of uints
struct Matrix4x2_u32(native_inline, native_type: "glm::umat4x2") {
	_0: Vector2_u32(native_default: "1,0");
	_1: Vector2_u32(native_default: "0,1");
	_2: Vector2_u32(native_default: "0,0");
	_3: Vector2_u32(native_default: "0,0");
}

/// 4x3 matrix of uints
struct Matrix4x3_u32(native_inline, native_type: "glm::umat4x3") {
	_0: Vector3_u32(native_default: "1,0,0");
	_1: Vector3_u32(native_default: "0,1,0");
	_2: Vector3_u32(native_default: "0,0,1");
	_3: Vector3_u32(native_default: "0,0,0");
}

/// 4x4 matrix of uints
struct Matrix4x4_u32(native_inline, native_type: "glm::umat4x4") {
	_0: Vector4_u32(native_default: "1,0,0,0");
	_1: Vector4_u32(native_default: "0,1,0,0");
	_2: Vector4_u32(native_default: "0,0,1,0");
	_3: Vector4_u32(native_default: "0,0,0,1");
}

/// RGB color of uint components
struct ColorRGB_u32(native_inline, native_type: "glm::uvec3") {
	r: uint(native_default: "0");
	g: uint(native_default: "0");
	b: uint(native_default: "0");
}

/// RGBA color of uint components
struct ColorRGBA_u32(native_inline, native_type: "glm::uvec4") {
	r: uint(native_default: "0");
	g: uint(native_default: "0");
	b: uint(native_default: "0");
	a: uint(native_default: "0");
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// short types

/// 2D vector of shorts
struct Vector2_i16(native_inline, native_type: "glm::i16vec2") {
	x: short(native_default: "0");
	y: short(native_default: "0");
}

/// 3D vector of shorts
struct Vector3_i16(native_inline, native_type: "glm::i16vec3") {
	x: short(native_default: "0");
	y: short(native_default: "0");
	z: short(native_default: "0");
}

/// 4D vector of shorts (homogenous coordinates)
struct Vector4_i16(native_inline, native_type: "glm::i16vec4") {
	x: short(native_default: "0");
	y: short(native_default: "0");
	z: short(native_default: "0");
	w: short(native_default: "0");
}

/// 4D hypercomplex of shorts
struct Quaternion_i16(native_inline, native_type: "glm::i16quat") {
	x: short(native_default: "0");
	y: short(native_default: "0");
	z: short(native_default: "0");
	w: short(native_default: "0");
}

/// 2x2 matrix of shorts
struct Matrix2x2_i16(native_inline, native_type: "glm::i16mat2x2") {
	_0: Vector2_i16(native_default: "1,0");
	_1: Vector2_i16(native_default: "0,1");
}

/// 2x3 matrix of shorts
struct Matrix2x3_i16(native_inline, native_type: "glm::i16mat2x3") {
	_0: Vector3_i16(native_default: "1,0,0");
	_1: Vector3_i16(native_default: "0,1,0");
}

/// 2x4 matrix of shorts
struct Matrix2x4_i16(native_inline, native_type: "glm::i16mat2x4") {
	_0: Vector4_i16(native_default: "1,0,0,0");
	_1: Vector4_i16(native_default: "0,1,0,0");
}

/// 3x2 matrix of shorts
struct Matrix3x2_i16(native_inline, native_type: "glm::i16mat3x2") {
	_0: Vector2_i16(native_default: "1,0");
	_1: Vector2_i16(native_default: "0,1");
	_2: Vector2_i16(native_default: "0,0");
}

/// 3x3 matrix of shorts
struct Matrix3x3_i16(native_inline, native_type: "glm::i16mat3x3") {
	_0: Vector3_i16(native_default: "1,0,0");
	_1: Vector3_i16(native_default: "0,1,0");
	_2: Vector3_i16(native_default: "0,0,1");
}

/// 3x4 matrix of shorts
struct Matrix3x4_i16(native_inline, native_type: "glm::i16mat3x4") {
	_0: Vector4_i16(native_default: "1,0,0,0");
	_1: Vector4_i16(native_default: "0,1,0,0");
	_2: Vector4_i16(native_default: "0,0,1,0");
}

/// 4x2 matrix of shorts
struct Matrix4x2_i16(native_inline, native_type: "glm::i16mat4x2") {
	_0: Vector2_i16(native_default: "1,0");
	_1: Vector2_i16(native_default: "0,1");
	_2: Vector2_i16(native_default: "0,0");
	_3: Vector2_i16(native_default: "0,0");
}

/// 4x3 matrix of shorts
struct Matrix4x3_i16(native_inline, native_type: "glm::i16mat4x3") {
	_0: Vector3_i16(native_default: "1,0,0");
	_1: Vector3_i16(native_default: "0,1,0");
	_2: Vector3_i16(native_default: "0,0,1");
	_3: Vector3_i16(native_default: "0,0,0");
}

/// 4x4 matrix of shorts
struct Matrix4x4_i16(native_inline, native_type: "glm::i16mat4x4") {
	_0: Vector4_i16(native_default: "1,0,0,0");
	_1: Vector4_i16(native_default: "0,1,0,0");
	_2: Vector4_i16(native_default: "0,0,1,0");
	_3: Vector4_i16(native_default: "0,0,0,1");
}

/// RGB color of short components
struct ColorRGB_i16(native_inline, native_type: "glm::i16vec3") {
	r: short(native_default: "0");
	g: short(native_default: "0");
	b: short(native_default: "0");
}

/// RGBA color of short components
struct ColorRGBA_i16(native_inline, native_type: "glm::i16vec4") {
	r: short(native_default: "0");
	g: short(native_default: "0");
	b: short(native_default: "0");
	a: short(native_default: "0");
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// ushort types

/// 2D vector of ushorts
struct Vector2_u16(native_inline, native_type: "glm::u16vec2") {
	x: ushort(native_default: "0");
	y: ushort(native_default: "0");
}

/// 3D vector of ushorts
struct Vector3_u16(native_inline, native_type: "glm::u16vec3") {
	x: ushort(native_default: "0");
	y: ushort(native_default: "0");
	z: ushort(native_default: "0");
}

/// 4D vector of ushorts (homogenous coordinates)
struct Vector4_u16(native_inline, native_type: "glm::u16vec4") {
	x: ushort(native_default: "0");
	y: ushort(native_default: "0");
	z: ushort(native_default: "0");
	w: ushort(native_default: "0");
}

/// 4D hypercomplex of ushorts
struct Quaternion_u16(native_inline, native_type: "glm::u16quat") {
	x: ushort(native_default: "0");
	y: ushort(native_default: "0");
	z: ushort(native_default: "0");
	w: ushort(native_default: "0");
}

/// 2x2 matrix of ushorts
struct Matrix2x2_u16(native_inline, native_type: "glm::u16mat2x2") {
	_0: Vector2_u16(native_default: "1,0");
	_1: Vector2_u16(native_default: "0,1");
}

/// 2x3 matrix of ushorts
struct Matrix2x3_u16(native_inline, native_type: "glm::u16mat2x3") {
	_0: Vector3_u16(native_default: "1,0,0");
	_1: Vector3_u16(native_default: "0,1,0");
}

/// 2x4 matrix of ushorts
struct Matrix2x4_u16(native_inline, native_type: "glm::u16mat2x4") {
	_0: Vector4_u16(native_default: "1,0,0,0");
	_1: Vector4_u16(native_default: "0,1,0,0");
}

/// 3x2 matrix of ushorts
struct Matrix3x2_u16(native_inline, native_type: "glm::u16mat3x2") {
	_0: Vector2_u16(native_default: "1,0");
	_1: Vector2_u16(native_default: "0,1");
	_2: Vector2_u16(native_default: "0,0");
}

/// 3x3 matrix of ushorts
struct Matrix3x3_u16(native_inline, native_type: "glm::u16mat3x3") {
	_0: Vector3_u16(native_default: "1,0,0");
	_1: Vector3_u16(native_default: "0,1,0");
	_2: Vector3_u16(native_default: "0,0,1");
}

/// 3x4 matrix of ushorts
struct Matrix3x4_u16(native_inline, native_type: "glm::u16mat3x4") {
	_0: Vector4_u16(native_default: "1,0,0,0");
	_1: Vector4_u16(native_default: "0,1,0,0");
	_2: Vector4_u16(native_default: "0,0,1,0");
}

/// 4x2 matrix of ushorts
struct Matrix4x2_u16(native_inline, native_type: "glm::u16mat4x2") {
	_0: Vector2_u16(native_default: "1,0");
	_1: Vector2_u16(native_default: "0,1");
	_2: Vector2_u16(native_default: "0,0");
	_3: Vector2_u16(native_default: "0,0");
}

/// 4x3 matrix of ushorts
struct Matrix4x3_u16(native_inline, native_type: "glm::u16mat4x3") {
	_0: Vector3_u16(native_default: "1,0,0");
	_1: Vector3_u16(native_default: "0,1,0");
	_2: Vector3_u16(native_default: "0,0,1");
	_3: Vector3_u16(native_default: "0,0,0");
}

/// 4x4 matrix of ushorts
struct Matrix4x4_u16(native_inline, native_type: "glm::u16mat4x4") {
	_0: Vector4_u16(native_default: "1,0,0,0");
	_1: Vector4_u16(native_default: "0,1,0,0");
	_2: Vector4_u16(native_default: "0,0,1,0");
	_3: Vector4_u16(native_default: "0,0,0,1");
}

/// RGB color of ushort components
struct ColorRGB_u16(native_inline, native_type: "glm::u16vec3") {
	r: ushort(native_default: "0");
	g: ushort(native_default: "0");
	b: ushort(native_default: "0");
}

/// RGBA color of ushort components
struct ColorRGBA_u16(native_inline, native_type: "glm::u16vec4") {
	r: ushort(native_default: "0");
	g: ushort(native_default: "0");
	b: ushort(native_default: "0");
	a: ushort(native_default: "0");
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// byte types

/// 2D vector of bytes
struct Vector2_i8(native_inline, native_type: "glm::i8(vec2") {
	x: byte(native_default: "0");
	y: byte(native_default: "0");
}

/// 3D vector of bytes
struct Vector3_i8(native_inline, native_type: "glm::i8(vec3") {
	x: byte(native_default: "0");
	y: byte(native_default: "0");
	z: byte(native_default: "0");
}

/// 4D vector of bytes (homogenous coordinates)
struct Vector4_i8(native_inline, native_type: "glm::i8(vec4") {
	x: byte(native_default: "0");
	y: byte(native_default: "0");
	z: byte(native_default: "0");
	w: byte(native_default: "0");
}

/// 4D hypercomplex of bytes
struct Quaternion_i8(native_inline, native_type: "glm::i8quat") {
	x: byte(native_default: "0");
	y: byte(native_default: "0");
	z: byte(native_default: "0");
	w: byte(native_default: "0");
}

/// 2x2 matrix of bytes
struct Matrix2x2_i8(native_inline, native_type: "glm::i8mat2x2") {
	_0: Vector2_i8(native_default: "1,0");
	_1: Vector2_i8(native_default: "0,1");
}

/// 2x3 matrix of bytes
struct Matrix2x3_i8(native_inline, native_type: "glm::i8mat2x3") {
	_0: Vector3_i8(native_default: "1,0,0");
	_1: Vector3_i8(native_default: "0,1,0");
}

/// 2x4 matrix of bytes
struct Matrix2x4_i8(native_inline, native_type: "glm::i8mat2x4") {
	_0: Vector4_i8(native_default: "1,0,0,0");
	_1: Vector4_i8(native_default: "0,1,0,0");
}

/// 3x2 matrix of bytes
struct Matrix3x2_i8(native_inline, native_type: "glm::i8mat3x2") {
	_0: Vector2_i8(native_default: "1,0");
	_1: Vector2_i8(native_default: "0,1");
	_2: Vector2_i8(native_default: "0,0");
}

/// 3x3 matrix of bytes
struct Matrix3x3_i8(native_inline, native_type: "glm::i8mat3x3") {
	_0: Vector3_i8(native_default: "1,0,0");
	_1: Vector3_i8(native_default: "0,1,0");
	_2: Vector3_i8(native_default: "0,0,1");
}

/// 3x4 matrix of bytes
struct Matrix3x4_i8(native_inline, native_type: "glm::i8mat3x4") {
	_0: Vector4_i8(native_default: "1,0,0,0");
	_1: Vector4_i8(native_default: "0,1,0,0");
	_2: Vector4_i8(native_default: "0,0,1,0");
}

/// 4x2 matrix of bytes
struct Matrix4x2_i8(native_inline, native_type: "glm::i8mat4x2") {
	_0: Vector2_i8(native_default: "1,0");
	_1: Vector2_i8(native_default: "0,1");
	_2: Vector2_i8(native_default: "0,0");
	_3: Vector2_i8(native_default: "0,0");
}

/// 4x3 matrix of bytes
struct Matrix4x3_i8(native_inline, native_type: "glm::i8mat4x3") {
	_0: Vector3_i8(native_default: "1,0,0");
	_1: Vector3_i8(native_default: "0,1,0");
	_2: Vector3_i8(native_default: "0,0,1");
	_3: Vector3_i8(native_default: "0,0,0");
}

/// 4x4 matrix of bytes
struct Matrix4x4_i8(native_inline, native_type: "glm::i8mat4x4") {
	_0: Vector4_i8(native_default: "1,0,0,0");
	_1: Vector4_i8(native_default: "0,1,0,0");
	_2: Vector4_i8(native_default: "0,0,1,0");
	_3: Vector4_i8(native_default: "0,0,0,1");
}

/// RGB color of byte components
struct ColorRGB_i8(native_inline, native_type: "glm::i8vec3") {
	r: byte(native_default: "0");
	g: byte(native_default: "0");
	b: byte(native_default: "0");
}

/// RGBA color of byte components
struct ColorRGBA_i8(native_inline, native_type: "glm::i8vec4") {
	r: byte(native_default: "0");
	g: byte(native_default: "0");
	b: byte(native_default: "0");
	a: byte(native_default: "0");
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// ubyte types

/// 2D vector of ubytes
struct Vector2_u8(native_inline, native_type: "glm::u8(vec2") {
	x: ubyte(native_default: "0");
	y: ubyte(native_default: "0");
}

/// 3D vector of ubytes
struct Vector3_u8(native_inline, native_type: "glm::u8(vec3") {
	x: ubyte(native_default: "0");
	y: ubyte(native_default: "0");
	z: ubyte(native_default: "0");
}

/// 4D vector of ubytes (homogenous coordinates)
struct Vector4_u8(native_inline, native_type: "glm::u8(vec4") {
	x: ubyte(native_default: "0");
	y: ubyte(native_default: "0");
	z: ubyte(native_default: "0");
	w: ubyte(native_default: "0");
}

/// 4D hypercomplex of ubytes
struct Quaternion_u8(native_inline, native_type: "glm::u8quat") {
	x: ubyte(native_default: "0");
	y: ubyte(native_default: "0");
	z: ubyte(native_default: "0");
	w: ubyte(native_default: "0");
}

/// 2x2 matrix of ubytes
struct Matrix2x2_u8(native_inline, native_type: "glm::u8mat2x2") {
	_0: Vector2_u8(native_default: "1,0");
	_1: Vector2_u8(native_default: "0,1");
}

/// 2x3 matrix of ubytes
struct Matrix2x3_u8(native_inline, native_type: "glm::u8mat2x3") {
	_0: Vector3_u8(native_default: "1,0,0");
	_1: Vector3_u8(native_default: "0,1,0");
}

/// 2x4 matrix of ubytes
struct Matrix2x4_u8(native_inline, native_type: "glm::u8mat2x4") {
	_0: Vector4_u8(native_default: "1,0,0,0");
	_1: Vector4_u8(native_default: "0,1,0,0");
}

/// 3x2 matrix of ubytes
struct Matrix3x2_u8(native_inline, native_type: "glm::u8mat3x2") {
	_0: Vector2_u8(native_default: "1,0");
	_1: Vector2_u8(native_default: "0,1");
	_2: Vector2_u8(native_default: "0,0");
}

/// 3x3 matrix of ubytes
struct Matrix3x3_u8(native_inline, native_type: "glm::u8mat3x3") {
	_0: Vector3_u8(native_default: "1,0,0");
	_1: Vector3_u8(native_default: "0,1,0");
	_2: Vector3_u8(native_default: "0,0,1");
}

/// 3x4 matrix of ubytes
struct Matrix3x4_u8(native_inline, native_type: "glm::u8mat3x4") {
	_0: Vector4_u8(native_default: "1,0,0,0");
	_1: Vector4_u8(native_default: "0,1,0,0");
	_2: Vector4_u8(native_default: "0,0,1,0");
}

/// 4x2 matrix of ubytes
struct Matrix4x2_u8(native_inline, native_type: "glm::u8mat4x2") {
	_0: Vector2_u8(native_default: "1,0");
	_1: Vector2_u8(native_default: "0,1");
	_2: Vector2_u8(native_default: "0,0");
	_3: Vector2_u8(native_default: "0,0");
}

/// 4x3 matrix of ubytes
struct Matrix4x3_u8(native_inline, native_type: "glm::u8mat4x3") {
	_0: Vector3_u8(native_default: "1,0,0");
	_1: Vector3_u8(native_default: "0,1,0");
	_2: Vector3_u8(native_default: "0,0,1");
	_3: Vector3_u8(native_default: "0,0,0");
}

/// 4x4 matrix of ubytes
struct Matrix4x4_u8(native_inline, native_type: "glm::u8mat4x4") {
	_0: Vector4_u8(native_default: "1,0,0,0");
	_1: Vector4_u8(native_default: "0,1,0,0");
	_2: Vector4_u8(native_default: "0,0,1,0");
	_3: Vector4_u8(native_default: "0,0,0,1");
}

/// RGB color of ubyte components
struct ColorRGB_u8(native_inline, native_type: "glm::u8vec3") {
	r: ubyte(native_default: "0");
	g: ubyte(native_default: "0");
	b: ubyte(native_default: "0");
}

/// RGBA color of ubyte components
struct ColorRGBA_u8(native_inline, native_type: "glm::u8vec4") {
	r: ubyte(native_default: "0");
	g: ubyte(native_default: "0");
	b: ubyte(native_default: "0");
	a: ubyte(native_default: "0");
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// long types

/// 2D vector of longs
struct Vector2_i64(native_inline, native_type: "glm::i64vec2") {
	x: long(native_default: "0");
	y: long(native_default: "0");
}

/// 3D vector of longs
struct Vector3_i64(native_inline, native_type: "glm::i64vec3") {
	x: long(native_default: "0");
	y: long(native_default: "0");
	z: long(native_default: "0");
}

/// 4D vector of longs (homogenous coordinates)
struct Vector4_i64(native_inline, native_type: "glm::i64vec4") {
	x: long(native_default: "0");
	y: long(native_default: "0");
	z: long(native_default: "0");
	w: long(native_default: "0");
}

/// 4D hypercomplex of longs
struct Quaternion_i64(native_inline, native_type: "glm::i64quat") {
	x: long(native_default: "0");
	y: long(native_default: "0");
	z: long(native_default: "0");
	w: long(native_default: "0");
}

/// 2x2 matrix of longs
struct Matrix2x2_i64(native_inline, native_type: "glm::i64mat2x2") {
	_0: Vector2_i64(native_default: "1,0");
	_1: Vector2_i64(native_default: "0,1");
}

/// 2x3 matrix of longs
struct Matrix2x3_i64(native_inline, native_type: "glm::i64mat2x3") {
	_0: Vector3_i64(native_default: "1,0,0");
	_1: Vector3_i64(native_default: "0,1,0");
}

/// 2x4 matrix of longs
struct Matrix2x4_i64(native_inline, native_type: "glm::i64mat2x4") {
	_0: Vector4_i64(native_default: "1,0,0,0");
	_1: Vector4_i64(native_default: "0,1,0,0");
}

/// 3x2 matrix of longs
struct Matrix3x2_i64(native_inline, native_type: "glm::i64mat3x2") {
	_0: Vector2_i64(native_default: "1,0");
	_1: Vector2_i64(native_default: "0,1");
	_2: Vector2_i64(native_default: "0,0");
}

/// 3x3 matrix of longs
struct Matrix3x3_i64(native_inline, native_type: "glm::i64mat3x3") {
	_0: Vector3_i64(native_default: "1,0,0");
	_1: Vector3_i64(native_default: "0,1,0");
	_2: Vector3_i64(native_default: "0,0,1");
}

/// 3x4 matrix of longs
struct Matrix3x4_i64(native_inline, native_type: "glm::i64mat3x4") {
	_0: Vector4_i64(native_default: "1,0,0,0");
	_1: Vector4_i64(native_default: "0,1,0,0");
	_2: Vector4_i64(native_default: "0,0,1,0");
}

/// 4x2 matrix of longs
struct Matrix4x2_i64(native_inline, native_type: "glm::i64mat4x2") {
	_0: Vector2_i64(native_default: "1,0");
	_1: Vector2_i64(native_default: "0,1");
	_2: Vector2_i64(native_default: "0,0");
	_3: Vector2_i64(native_default: "0,0");
}

/// 4x3 matrix of longs
struct Matrix4x3_i64(native_inline, native_type: "glm::i64mat4x3") {
	_0: Vector3_i64(native_default: "1,0,0");
	_1: Vector3_i64(native_default: "0,1,0");
	_2: Vector3_i64(native_default: "0,0,1");
	_3: Vector3_i64(native_default: "0,0,0");
}

/// 4x4 matrix of longs
struct Matrix4x4_i64(native_inline, native_type: "glm::i64mat4x4") {
	_0: Vector4_i64(native_default: "1,0,0,0");
	_1: Vector4_i64(native_default: "0,1,0,0");
	_2: Vector4_i64(native_default: "0,0,1,0");
	_3: Vector4_i64(native_default: "0,0,0,1");
}

/// RGB color of long components
struct ColorRGB_i64(native_inline, native_type: "glm::i64vec3") {
	r: long(native_default: "0");
	g: long(native_default: "0");
	b: long(native_default: "0");
}

/// RGBA color of long components
struct ColorRGBA_i64(native_inline, native_type: "glm::i64vec4") {
	r: long(native_default: "0");
	g: long(native_default: "0");
	b: long(native_default: "0");
	a: long(native_default: "0");
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// ulong types

/// 2D vector of ulongs
struct Vector2_u64(native_inline, native_type: "glm::u64vec2") {
	x: ulong(native_default: "0");
	y: ulong(native_default: "0");
}

/// 3D vector of ulongs
struct Vector3_u64(native_inline, native_type: "glm::u64vec3") {
	x: ulong(native_default: "0");
	y: ulong(native_default: "0");
	z: ulong(native_default: "0");
}

/// 4D vector of ulongs (homogenous coordinates)
struct Vector4_u64(native_inline, native_type: "glm::u64vec4") {
	x: ulong(native_default: "0");
	y: ulong(native_default: "0");
	z: ulong(native_default: "0");
	w: ulong(native_default: "0");
}

/// 4D hypercomplex of ulongs
struct Quaternion_u64(native_inline, native_type: "glm::u64quat") {
	x: ulong(native_default: "0");
	y: ulong(native_default: "0");
	z: ulong(native_default: "0");
	w: ulong(native_default: "0");
}

/// 2x2 matrix of ulongs
struct Matrix2x2_u64(native_inline, native_type: "glm::u64mat2x2") {
	_0: Vector2_u64(native_default: "1,0");
	_1: Vector2_u64(native_default: "0,1");
}

/// 2x3 matrix of ulongs
struct Matrix2x3_u64(native_inline, native_type: "glm::u64mat2x3") {
	_0: Vector3_u64(native_default: "1,0,0");
	_1: Vector3_u64(native_default: "0,1,0");
}

/// 2x4 matrix of ulongs
struct Matrix2x4_u64(native_inline, native_type: "glm::u64mat2x4") {
	_0: Vector4_u64(native_default: "1,0,0,0");
	_1: Vector4_u64(native_default: "0,1,0,0");
}

/// 3x2 matrix of ulongs
struct Matrix3x2_u64(native_inline, native_type: "glm::u64mat3x2") {
	_0: Vector2_u64(native_default: "1,0");
	_1: Vector2_u64(native_default: "0,1");
	_2: Vector2_u64(native_default: "0,0");
}

/// 3x3 matrix of ulongs
struct Matrix3x3_u64(native_inline, native_type: "glm::u64mat3x3") {
	_0: Vector3_u64(native_default: "1,0,0");
	_1: Vector3_u64(native_default: "0,1,0");
	_2: Vector3_u64(native_default: "0,0,1");
}

/// 3x4 matrix of ulongs
struct Matrix3x4_u64(native_inline, native_type: "glm::u64mat3x4") {
	_0: Vector4_u64(native_default: "1,0,0,0");
	_1: Vector4_u64(native_default: "0,1,0,0");
	_2: Vector4_u64(native_default: "0,0,1,0");
}

/// 4x2 matrix of ulongs
struct Matrix4x2_u64(native_inline, native_type: "glm::u64mat4x2") {
	_0: Vector2_u64(native_default: "1,0");
	_1: Vector2_u64(native_default: "0,1");
	_2: Vector2_u64(native_default: "0,0");
	_3: Vector2_u64(native_default: "0,0");
}

/// 4x3 matrix of ulongs
struct Matrix4x3_u64(native_inline, native_type: "glm::u64mat4x3") {
	_0: Vector3_u64(native_default: "1,0,0");
	_1: Vector3_u64(native_default: "0,1,0");
	_2: Vector3_u64(native_default: "0,0,1");
	_3: Vector3_u64(native_default: "0,0,0");
}

/// 4x4 matrix of ulongs
struct Matrix4x4_u64(native_inline, native_type: "glm::u64mat4x4") {
	_0: Vector4_u64(native_default: "1,0,0,0");
	_1: Vector4_u64(native_default: "0,1,0,0");
	_2: Vector4_u64(native_default: "0,0,1,0");
	_3: Vector4_u64(native_default: "0,0,0,1");
}

/// RGB color of ulong components
struct ColorRGB_u64(native_inline, native_type: "glm::u64vec3") {
	r: ulong(native_default: "0");
	g: ulong(native_default: "0");
	b: ulong(native_default: "0");
}

/// RGBA color of ulong components
struct ColorRGBA_u64(native_inline, native_type: "glm::u64vec4") {
	r: ulong(native_default: "0");
	g: ulong(native_default: "0");
	b: ulong(native_default: "0");
	a: ulong(native_default: "0");
}

///-----------------------------------------------------------------------------
///-----------------------------------------------------------------------------
/// double types

/// 2D vector of doubles
struct Vector2_f64(native_inline, native_type: "glm::dvec2") {
	x: double(native_default: "0");
	y: double(native_default: "0");
}

/// 3D vector of doubles
struct Vector3_f64(native_inline, native_type: "glm::dvec3") {
	x: double(native_default: "0");
	y: double(native_default: "0");
	z: double(native_default: "0");
}

/// 4D vector of doubles (homogenous coordinates)
struct Vector4_f64(native_inline, native_type: "glm::dvec4") {
	x: double(native_default: "0");
	y: double(native_default: "0");
	z: double(native_default: "0");
	w: double(native_default: "0");
}

/// 4D hypercomplex of doubles
struct Quaternion_f64(native_inline, native_type: "glm::dquat") {
	x: double(native_default: "0");
	y: double(native_default: "0");
	z: double(native_default: "0");
	w: double(native_default: "0");
}

/// 2x2 matrix of doubles
struct Matrix2x2_f64(native_inline, native_type: "glm::dmat2x2") {
	_0: Vector2_f64(native_default: "1,0");
	_1: Vector2_f64(native_default: "0,1");
}

/// 2x3 matrix of doubles
struct Matrix2x3_f64(native_inline, native_type: "glm::dmat2x3") {
	_0: Vector3_f64(native_default: "1,0,0");
	_1: Vector3_f64(native_default: "0,1,0");
}

/// 2x4 matrix of doubles
struct Matrix2x4_f64(native_inline, native_type: "glm::dmat2x4") {
	_0: Vector4_f64(native_default: "1,0,0,0");
	_1: Vector4_f64(native_default: "0,1,0,0");
}

/// 3x2 matrix of doubles
struct Matrix3x2_f64(native_inline, native_type: "glm::dmat3x2") {
	_0: Vector2_f64(native_default: "1,0");
	_1: Vector2_f64(native_default: "0,1");
	_2: Vector2_f64(native_default: "0,0");
}

/// 3x3 matrix of doubles
struct Matrix3x3_f64(native_inline, native_type: "glm::dmat3x3") {
	_0: Vector3_f64(native_default: "1,0,0");
	_1: Vector3_f64(native_default: "0,1,0");
	_2: Vector3_f64(native_default: "0,0,1");
}

/// 3x4 matrix of doubles
struct Matrix3x4_f64(native_inline, native_type: "glm::dmat3x4") {
	_0: Vector4_f64(native_default: "1,0,0,0");
	_1: Vector4_f64(native_default: "0,1,0,0");
	_2: Vector4_f64(native_default: "0,0,1,0");
}

/// 4x2 matrix of doubles
struct Matrix4x2_f64(native_inline, native_type: "glm::dmat4x2") {
	_0: Vector2_f64(native_default: "1,0");
	_1: Vector2_f64(native_default: "0,1");
	_2: Vector2_f64(native_default: "0,0");
	_3: Vector2_f64(native_default: "0,0");
}

/// 4x3 matrix of doubles
struct Matrix4x3_f64(native_inline, native_type: "glm::dmat4x3") {
	_0: Vector3_f64(native_default: "1,0,0");
	_1: Vector3_f64(native_default: "0,1,0");
	_2: Vector3_f64(native_default: "0,0,1");
	_3: Vector3_f64(native_default: "0,0,0");
}

/// 4x4 matrix of doubles
struct Matrix4x4_f64(native_inline, native_type: "glm::dmat4x4") {
	_0: Vector4_f64(native_default: "1,0,0,0");
	_1: Vector4_f64(native_default: "0,1,0,0");
	_2: Vector4_f64(native_default: "0,0,1,0");
	_3: Vector4_f64(native_default: "0,0,0,1");
}

/// RGB color of double components
struct ColorRGB_f64(native_inline, native_type: "glm::dvec3") {
	r: double(native_default: "0");
	g: double(native_default: "0");
	b: double(native_default: "0");
}

/// RGBA color of double components
struct ColorRGBA_f64(native_inline, native_type: "glm::dvec4") {
	r: double(native_default: "0");
	g: double(native_default: "0");
	b: double(native_default: "0");
	a: double(native_default: "0");
}

///-----------------------------------------------------------------------------

)");
