#include "glm_conversion.hpp"
#include "../mutable/flatmath_generated.h"
#include "typedefs.hpp"

#define KHUTILS_ASSERTION_INLINE
#include <khutils/assertion.hpp>

#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>

namespace flatmath
{

	ColorRGB_f32 color_from_glm(const glm::f32vec3& v)
	{
		return ColorRGB_f32{v.x, v.y, v.z};
	}
	ColorRGB_f64 color_from_glm(const glm::f64vec3& v)
	{
		return ColorRGB_f64{v.x, v.y, v.z};
	}
	ColorRGB_i16 color_from_glm(const glm::i16vec3& v)
	{
		return ColorRGB_i16{v.x, v.y, v.z};
	}
	ColorRGB_i32 color_from_glm(const glm::i32vec3& v)
	{
		return ColorRGB_i32{v.x, v.y, v.z};
	}
	ColorRGB_i64 color_from_glm(const glm::i64vec3& v)
	{
		return ColorRGB_i64{v.x, v.y, v.z};
	}
	ColorRGB_i8 color_from_glm(const glm::i8vec3& v)
	{
		return ColorRGB_i8{v.x, v.y, v.z};
	}
	ColorRGB_u16 color_from_glm(const glm::u16vec3& v)
	{
		return ColorRGB_u16{v.x, v.y, v.z};
	}
	ColorRGB_u32 color_from_glm(const glm::u32vec3& v)
	{
		return ColorRGB_u32{v.x, v.y, v.z};
	}
	ColorRGB_u64 color_from_glm(const glm::u64vec3& v)
	{
		return ColorRGB_u64{v.x, v.y, v.z};
	}
	ColorRGB_u8 color_from_glm(const glm::u8vec3& v)
	{
		return ColorRGB_u8{v.x, v.y, v.z};
	}
	ColorRGBA_f32 color_from_glm(const glm::f32vec4& v)
	{
		return ColorRGBA_f32{v.x, v.y, v.z, v.w};
	}
	ColorRGBA_f64 color_from_glm(const glm::f64vec4& v)
	{
		return ColorRGBA_f64{v.x, v.y, v.z, v.w};
	}
	ColorRGBA_i16 color_from_glm(const glm::i16vec4& v)
	{
		return ColorRGBA_i16{v.x, v.y, v.z, v.w};
	}
	ColorRGBA_i32 color_from_glm(const glm::i32vec4& v)
	{
		return ColorRGBA_i32{v.x, v.y, v.z, v.w};
	}
	ColorRGBA_i64 color_from_glm(const glm::i64vec4& v)
	{
		return ColorRGBA_i64{v.x, v.y, v.z, v.w};
	}
	ColorRGBA_i8 color_from_glm(const glm::i8vec4& v)
	{
		return ColorRGBA_i8{v.x, v.y, v.z, v.w};
	}
	ColorRGBA_u16 color_from_glm(const glm::u16vec4& v)
	{
		return ColorRGBA_u16{v.x, v.y, v.z, v.w};
	}
	ColorRGBA_u32 color_from_glm(const glm::u32vec4& v)
	{
		return ColorRGBA_u32{v.x, v.y, v.z, v.w};
	}
	ColorRGBA_u64 color_from_glm(const glm::u64vec4& v)
	{
		return ColorRGBA_u64{v.x, v.y, v.z, v.w};
	}
	ColorRGBA_u8 color_from_glm(const glm::u8vec4& v)
	{
		return ColorRGBA_u8{v.x, v.y, v.z, v.w};
	}
	Matrix2x2_f32 from_glm(const glm::f32mat2x2& v)
	{
		return Matrix2x2_f32{from_glm(v[0]), from_glm(v[1])};
	}
	Matrix2x2_f64 from_glm(const glm::f64mat2x2& v)
	{
		return Matrix2x2_f64{from_glm(v[0]), from_glm(v[1])};
	}
	//	Matrix2x2_i16 from_glm(const glm::i16mat2x2& v)
	//	{
	//		return Matrix2x2_i16{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x2_i32 from_glm(const glm::i32mat2x2& v)
	//	{
	//		return Matrix2x2_i32{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x2_i64 from_glm(const glm::i64mat2x2& v)
	//	{
	//		return Matrix2x2_i64{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x2_i8 from_glm(const glm::i8mat2x2& v)
	//	{
	//		return Matrix2x2_i8{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x2_u16 from_glm(const glm::u16mat2x2& v)
	//	{
	//		return Matrix2x2_u16{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x2_u32 from_glm(const glm::u32mat2x2& v)
	//	{
	//		return Matrix2x2_u32{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x2_u64 from_glm(const glm::u64mat2x2& v)
	//	{
	//		return Matrix2x2_u64{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x2_u8 from_glm(const glm::u8mat2x2& v)
	//	{
	//		return Matrix2x2_u8{from_glm(v[0]), from_glm(v[1])};
	//	}
	Matrix2x3_f32 from_glm(const glm::f32mat2x3& v)
	{
		return Matrix2x3_f32{from_glm(v[0]), from_glm(v[1])};
	}
	Matrix2x3_f64 from_glm(const glm::f64mat2x3& v)
	{
		return Matrix2x3_f64{from_glm(v[0]), from_glm(v[1])};
	}
	//	Matrix2x3_i16 from_glm(const glm::i16mat2x3& v)
	//	{
	//		return Matrix2x3_i16{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x3_i32 from_glm(const glm::i32mat2x3& v)
	//	{
	//		return Matrix2x3_i32{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x3_i64 from_glm(const glm::i64mat2x3& v)
	//	{
	//		return Matrix2x3_i64{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x3_i8 from_glm(const glm::i8mat2x3& v)
	//	{
	//		return Matrix2x3_i8{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x3_u16 from_glm(const glm::u16mat2x3& v)
	//	{
	//		return Matrix2x3_u16{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x3_u32 from_glm(const glm::u32mat2x3& v)
	//	{
	//		return Matrix2x3_u32{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x3_u64 from_glm(const glm::u64mat2x3& v)
	//	{
	//		return Matrix2x3_u64{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x3_u8 from_glm(const glm::u8mat2x3& v)
	//	{
	//		return Matrix2x3_u8{from_glm(v[0]), from_glm(v[1])};
	//	}
	Matrix2x4_f32 from_glm(const glm::f32mat2x4& v)
	{
		return Matrix2x4_f32{from_glm(v[0]), from_glm(v[1])};
	}
	Matrix2x4_f64 from_glm(const glm::f64mat2x4& v)
	{
		return Matrix2x4_f64{from_glm(v[0]), from_glm(v[1])};
	}
	//	Matrix2x4_i16 from_glm(const glm::i16mat2x4& v)
	//	{
	//		return Matrix2x4_i16{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x4_i32 from_glm(const glm::i32mat2x4& v)
	//	{
	//		return Matrix2x4_i32{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x4_i64 from_glm(const glm::i64mat2x4& v)
	//	{
	//		return Matrix2x4_i64{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x4_i8 from_glm(const glm::i8mat2x4& v)
	//	{
	//		return Matrix2x4_i8{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x4_u16 from_glm(const glm::u16mat2x4& v)
	//	{
	//		return Matrix2x4_u16{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x4_u32 from_glm(const glm::u32mat2x4& v)
	//	{
	//		return Matrix2x4_u32{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x4_u64 from_glm(const glm::u64mat2x4& v)
	//	{
	//		return Matrix2x4_u64{from_glm(v[0]), from_glm(v[1])};
	//	}
	//	Matrix2x4_u8 from_glm(const glm::u8mat2x4& v)
	//	{
	//		return Matrix2x4_u8{from_glm(v[0]), from_glm(v[1])};
	//	}
	Matrix3x2_f32 from_glm(const glm::f32mat3x2& v)
	{
		return Matrix3x2_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}
	Matrix3x2_f64 from_glm(const glm::f64mat3x2& v)
	{
		return Matrix3x2_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}
	//	Matrix3x2_i16 from_glm(const glm::i16mat3x2& v)
	//	{
	//		return Matrix3x2_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x2_i32 from_glm(const glm::i32mat3x2& v)
	//	{
	//		return Matrix3x2_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x2_i64 from_glm(const glm::i64mat3x2& v)
	//	{
	//		return Matrix3x2_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x2_i8 from_glm(const glm::i8mat3x2& v)
	//	{
	//		return Matrix3x2_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x2_u16 from_glm(const glm::u16mat3x2& v)
	//	{
	//		return Matrix3x2_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x2_u32 from_glm(const glm::u32mat3x2& v)
	//	{
	//		return Matrix3x2_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x2_u64 from_glm(const glm::u64mat3x2& v)
	//	{
	//		return Matrix3x2_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x2_u8 from_glm(const glm::u8mat3x2& v)
	//	{
	//		return Matrix3x2_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	Matrix3x3_f32 from_glm(const glm::f32mat3x3& v)
	{
		return Matrix3x3_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}
	Matrix3x3_f64 from_glm(const glm::f64mat3x3& v)
	{
		return Matrix3x3_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}
	//	Matrix3x3_i16 from_glm(const glm::i16mat3x3& v)
	//	{
	//		return Matrix3x3_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x3_i32 from_glm(const glm::i32mat3x3& v)
	//	{
	//		return Matrix3x3_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x3_i64 from_glm(const glm::i64mat3x3& v)
	//	{
	//		return Matrix3x3_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x3_i8 from_glm(const glm::i8mat3x3& v)
	//	{
	//		return Matrix3x3_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x3_u16 from_glm(const glm::u16mat3x3& v)
	//	{
	//		return Matrix3x3_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x3_u32 from_glm(const glm::u32mat3x3& v)
	//	{
	//		return Matrix3x3_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x3_u64 from_glm(const glm::u64mat3x3& v)
	//	{
	//		return Matrix3x3_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x3_u8 from_glm(const glm::u8mat3x3& v)
	//	{
	//		return Matrix3x3_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	Matrix3x4_f32 from_glm(const glm::f32mat3x4& v)
	{
		return Matrix3x4_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}
	Matrix3x4_f64 from_glm(const glm::f64mat3x4& v)
	{
		return Matrix3x4_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}
	//	Matrix3x4_i16 from_glm(const glm::i16mat3x4& v)
	//	{
	//		return Matrix3x4_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x4_i32 from_glm(const glm::i32mat3x4& v)
	//	{
	//		return Matrix3x4_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x4_i64 from_glm(const glm::i64mat3x4& v)
	//	{
	//		return Matrix3x4_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x4_i8 from_glm(const glm::i8mat3x4& v)
	//	{
	//		return Matrix3x4_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x4_u16 from_glm(const glm::u16mat3x4& v)
	//	{
	//		return Matrix3x4_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x4_u32 from_glm(const glm::u32mat3x4& v)
	//	{
	//		return Matrix3x4_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x4_u64 from_glm(const glm::u64mat3x4& v)
	//	{
	//		return Matrix3x4_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	//	Matrix3x4_u8 from_glm(const glm::u8mat3x4& v)
	//	{
	//		return Matrix3x4_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	//	}
	Matrix4x2_f32 from_glm(const glm::f32mat4x2& v)
	{
		return Matrix4x2_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}
	Matrix4x2_f64 from_glm(const glm::f64mat4x2& v)
	{
		return Matrix4x2_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}
	//	Matrix4x2_i16 from_glm(const glm::i16mat4x2& v)
	//	{
	//		return Matrix4x2_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x2_i32 from_glm(const glm::i32mat4x2& v)
	//	{
	//		return Matrix4x2_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x2_i64 from_glm(const glm::i64mat4x2& v)
	//	{
	//		return Matrix4x2_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x2_i8 from_glm(const glm::i8mat4x2& v)
	//	{
	//		return Matrix4x2_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x2_u16 from_glm(const glm::u16mat4x2& v)
	//	{
	//		return Matrix4x2_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x2_u32 from_glm(const glm::u32mat4x2& v)
	//	{
	//		return Matrix4x2_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x2_u64 from_glm(const glm::u64mat4x2& v)
	//	{
	//		return Matrix4x2_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x2_u8 from_glm(const glm::u8mat4x2& v)
	//	{
	//		return Matrix4x2_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	Matrix4x3_f32 from_glm(const glm::f32mat4x3& v)
	{
		return Matrix4x3_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}
	Matrix4x3_f64 from_glm(const glm::f64mat4x3& v)
	{
		return Matrix4x3_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}
	//	Matrix4x3_i16 from_glm(const glm::i16mat4x3& v)
	//	{
	//		return Matrix4x3_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x3_i32 from_glm(const glm::i32mat4x3& v)
	//	{
	//		return Matrix4x3_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x3_i64 from_glm(const glm::i64mat4x3& v)
	//	{
	//		return Matrix4x3_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x3_i8 from_glm(const glm::i8mat4x3& v)
	//	{
	//		return Matrix4x3_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x3_u16 from_glm(const glm::u16mat4x3& v)
	//	{
	//		return Matrix4x3_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x3_u32 from_glm(const glm::u32mat4x3& v)
	//	{
	//		return Matrix4x3_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x3_u64 from_glm(const glm::u64mat4x3& v)
	//	{
	//		return Matrix4x3_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x3_u8 from_glm(const glm::u8mat4x3& v)
	//	{
	//		return Matrix4x3_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	Matrix4x4_f32 from_glm(const glm::f32mat4x4& v)
	{
		return Matrix4x4_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}
	Matrix4x4_f64 from_glm(const glm::f64mat4x4& v)
	{
		return Matrix4x4_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}
	//	Matrix4x4_i16 from_glm(const glm::i16mat4x4& v)
	//	{
	//		return Matrix4x4_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x4_i32 from_glm(const glm::i32mat4x4& v)
	//	{
	//		return Matrix4x4_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x4_i64 from_glm(const glm::i64mat4x4& v)
	//	{
	//		return Matrix4x4_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x4_i8 from_glm(const glm::i8mat4x4& v)
	//	{
	//		return Matrix4x4_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x4_u16 from_glm(const glm::u16mat4x4& v)
	//	{
	//		return Matrix4x4_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x4_u32 from_glm(const glm::u32mat4x4& v)
	//	{
	//		return Matrix4x4_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x4_u64 from_glm(const glm::u64mat4x4& v)
	//	{
	//		return Matrix4x4_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	//	Matrix4x4_u8 from_glm(const glm::u8mat4x4& v)
	//	{
	//		return Matrix4x4_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	//	}
	Quaternion_f32 from_glm(const glm::f32quat& v)
	{
		return Quaternion_f32{v.x, v.y, v.z, v.w};
	}
	Quaternion_f64 from_glm(const glm::f64quat& v)
	{
		return Quaternion_f64{v.x, v.y, v.z, v.w};
	}
	//	Quaternion_i16 from_glm(const glm::i16quat& v)
	//	{
	//		return Quaternion_i16{v.x, v.y, v.z, v.w};
	//	}
	//	Quaternion_i32 from_glm(const glm::i32quat& v)
	//	{
	//		return Quaternion_i32{v.x, v.y, v.z, v.w};
	//	}
	//	Quaternion_i64 from_glm(const glm::i64quat& v)
	//	{
	//		return Quaternion_i64{v.x, v.y, v.z, v.w};
	//	}
	//	 Quaternion_i8  Vector4_i8 glm::i8quat & v)
	//	 {
	//		 return Quaternion_i8{v.x, v.y, v.z, v.w};
	//	 }
	//	 Quaternion_u16 from_glm(const glm::u16quat& v)
	//	 {
	//		 return Quaternion_u16{v.x, v.y, v.z, v.w};
	//	 }
	//	 Quaternion_u32 from_glm(const glm::u32quat& v)
	//	 {
	//		 return Quaternion_u32{v.x, v.y, v.z, v.w};
	//	 }
	//	 Quaternion_u64 from_glm(const glm::u64quat& v)
	//	 {
	//		 return Quaternion_u64{v.x, v.y, v.z, v.w};
	//	 }
	//	 Quaternion_u8  Vector4_u8 glm::u8quat & v)
	//	 {
	//		 return Quaternion_u8{v.x, v.y, v.z, v.w};
	//	 }
	Vector2_f32 from_glm(const glm::f32vec2& v)
	{
		return Vector2_f32{v.x, v.y};
	}
	Vector2_f64 from_glm(const glm::f64vec2& v)
	{
		return Vector2_f64{v.x, v.y};
	}
	Vector2_i16 from_glm(const glm::i16vec2& v)
	{
		return Vector2_i16{v.x, v.y};
	}
	Vector2_i32 from_glm(const glm::i32vec2& v)
	{
		return Vector2_i32{v.x, v.y};
	}
	Vector2_i64 from_glm(const glm::i64vec2& v)
	{
		return Vector2_i64{v.x, v.y};
	}
	Vector2_i8 from_glm(const glm::i8vec2& v)
	{
		return Vector2_i8{v.x, v.y};
	}
	Vector2_u16 from_glm(const glm::u16vec2& v)
	{
		return Vector2_u16{v.x, v.y};
	}
	Vector2_u32 from_glm(const glm::u32vec2& v)
	{
		return Vector2_u32{v.x, v.y};
	}
	Vector2_u64 from_glm(const glm::u64vec2& v)
	{
		return Vector2_u64{v.x, v.y};
	}
	Vector2_u8 from_glm(const glm::u8vec2& v)
	{
		return Vector2_u8{v.x, v.y};
	}
	Vector3_f32 from_glm(const glm::f32vec3& v)
	{
		return Vector3_f32{v.x, v.y, v.z};
	}
	Vector3_f64 from_glm(const glm::f64vec3& v)
	{
		return Vector3_f64{v.x, v.y, v.z};
	}
	Vector3_i16 from_glm(const glm::i16vec3& v)
	{
		return Vector3_i16{v.x, v.y, v.z};
	}
	Vector3_i32 from_glm(const glm::i32vec3& v)
	{
		return Vector3_i32{v.x, v.y, v.z};
	}
	Vector3_i64 from_glm(const glm::i64vec3& v)
	{
		return Vector3_i64{v.x, v.y, v.z};
	}
	Vector3_i8 from_glm(const glm::i8vec3& v)
	{
		return Vector3_i8{v.x, v.y, v.z};
	}
	Vector3_u16 from_glm(const glm::u16vec3& v)
	{
		return Vector3_u16{v.x, v.y, v.z};
	}
	Vector3_u32 from_glm(const glm::u32vec3& v)
	{
		return Vector3_u32{v.x, v.y, v.z};
	}
	Vector3_u64 from_glm(const glm::u64vec3& v)
	{
		return Vector3_u64{v.x, v.y, v.z};
	}
	Vector3_u8 from_glm(const glm::u8vec3& v)
	{
		return Vector3_u8{v.x, v.y, v.z};
	}
	Vector4_f32 from_glm(const glm::f32vec4& v)
	{
		return Vector4_f32{v.x, v.y, v.z, v.w};
	}
	Vector4_f64 from_glm(const glm::f64vec4& v)
	{
		return Vector4_f64{v.x, v.y, v.z, v.w};
	}
	Vector4_i16 from_glm(const glm::i16vec4& v)
	{
		return Vector4_i16{v.x, v.y, v.z, v.w};
	}
	Vector4_i32 from_glm(const glm::i32vec4& v)
	{
		return Vector4_i32{v.x, v.y, v.z, v.w};
	}
	Vector4_i64 from_glm(const glm::i64vec4& v)
	{
		return Vector4_i64{v.x, v.y, v.z, v.w};
	}
	Vector4_i8 from_glm(const glm::i8vec4& v)
	{
		return Vector4_i8{v.x, v.y, v.z, v.w};
	}
	Vector4_u16 from_glm(const glm::u16vec4& v)
	{
		return Vector4_u16{v.x, v.y, v.z, v.w};
	}
	Vector4_u32 from_glm(const glm::u32vec4& v)
	{
		return Vector4_u32{v.x, v.y, v.z, v.w};
	}
	Vector4_u64 from_glm(const glm::u64vec4& v)
	{
		return Vector4_u64{v.x, v.y, v.z, v.w};
	}
	Vector4_u8 from_glm(const glm::u8vec4& v)
	{
		return Vector4_u8{v.x, v.y, v.z, v.w};
	}
	glm::f32mat2x2 to_glm(const Matrix2x2_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32mat2x2 to_glm(const Matrix2x2_f32& v)
	{
		return glm::f32mat2x2{to_glm(v._0()), to_glm(v._1())};
	}
	glm::f64mat2x2 to_glm(const Matrix2x2_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64mat2x2 to_glm(const Matrix2x2_f64& v)
	{
		return glm::f64mat2x2{to_glm(v._0()), to_glm(v._1())};
	}
	//	 glm::i16mat2x2 to_glm(const Matrix2x2_i16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i16mat2x2 to_glm(const Matrix2x2_i16& v)
	//	 {
	//		 return glm::i16mat2x2{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::i32mat2x2 to_glm(const Matrix2x2_i32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i32mat2x2 to_glm(const Matrix2x2_i32& v)
	//	 {
	//		 return glm::i32mat2x2{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::i64mat2x2 to_glm(const Matrix2x2_i64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i64mat2x2 to_glm(const Matrix2x2_i64& v)
	//	 {
	//		 return glm::i64mat2x2{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::i8mat2x2 to_glm(const Matrix2x2_i8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i8mat2x2 to_glm(const Matrix2x2_i8& v)
	//	 {
	//		 return glm::i8mat2x2{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::u16mat2x2 to_glm(const Matrix2x2_u16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u16mat2x2 to_glm(const Matrix2x2_u16& v)
	//	 {
	//		 return glm::u16mat2x2{to_glm(v._0()), to_glm(v._1())};
	//	 }
	//	 glm::u32mat2x2 to_glm(const Matrix2x2_u32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u32mat2x2 to_glm(const Matrix2x2_u32& v)
	//	 {
	//		 return glm::u32mat2x2{to_glm(v._0()), to_glm(v._1())};
	//	 }
	//	 glm::u64mat2x2 to_glm(const Matrix2x2_u64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u64mat2x2 to_glm(const Matrix2x2_u64& v)
	//	 {
	//		 return glm::u64mat2x2{to_glm(v._0()), to_glm(v._1())};
	//	 }
	//	 glm::u8mat2x2 to_glm(const Matrix2x2_u8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u8mat2x2 to_glm(const Matrix2x2_u8& v)
	//	 {
	//		 return glm::u8mat2x2{to_glm(v._0()), to_glm(v._1())};
	//	 }
	glm::f32mat2x3 to_glm(const Matrix2x3_f32& v)
	{
		return glm::f32mat2x3{to_glm(v._0()), to_glm(v._1())};
	}
	glm::f32mat2x3 to_glm(const Matrix2x3_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64mat2x3 to_glm(const Matrix2x3_f64& v)
	{
		return glm::f64mat2x3{to_glm(v._0()), to_glm(v._1())};
	}
	glm::f64mat2x3 to_glm(const Matrix2x3_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	//	 glm::i16mat2x3 to_glm(const Matrix2x3_i16& v)
	//	 {
	//		 return glm::i16mat2x3{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::i16mat2x3 to_glm(const Matrix2x3_i16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i32mat2x3 to_glm(const Matrix2x3_i32& v)
	//	 {
	//		 return glm::i32mat2x3{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::i32mat2x3 to_glm(const Matrix2x3_i32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i64mat2x3 to_glm(const Matrix2x3_i64& v)
	//	 {
	//		 return glm::i64mat2x3{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::i64mat2x3 to_glm(const Matrix2x3_i64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i8mat2x3 to_glm(const Matrix2x3_i8& v)
	//	 {
	//		 return glm::i8mat2x3{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::i8mat2x3 to_glm(const Matrix2x3_i8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u16mat2x3 to_glm(const Matrix2x3_u16& v)
	//	 {
	//		 return glm::u16mat2x3{to_glm(v._0()), to_glm(v._1())};
	//	 }
	//	 glm::u16mat2x3 to_glm(const Matrix2x3_u16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u32mat2x3 to_glm(const Matrix2x3_u32& v)
	//	 {
	//		 return glm::u32mat2x3{to_glm(v._0()), to_glm(v._1())};
	//	 }
	//	 glm::u32mat2x3 to_glm(const Matrix2x3_u32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u64mat2x3 to_glm(const Matrix2x3_u64& v)
	//	 {
	//		 return glm::u64mat2x3{to_glm(v._0()), to_glm(v._1())};
	//	 }
	//	 glm::u64mat2x3 to_glm(const Matrix2x3_u64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u8mat2x3 to_glm(const Matrix2x3_u8& v)
	//	 {
	//		 return glm::u8mat2x3{to_glm(v._0()), to_glm(v._1())};
	//	 }
	//	 glm::u8mat2x3 to_glm(const Matrix2x3_u8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	glm::f32mat2x4 to_glm(const Matrix2x4_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
		;
	}
	glm::f32mat2x4 to_glm(const Matrix2x4_f32& v)
	{
		return glm::f32mat2x4{to_glm(v._0()), to_glm(v._1())};
	}
	glm::f64mat2x4 to_glm(const Matrix2x4_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
		;
	}
	glm::f64mat2x4 to_glm(const Matrix2x4_f64& v)
	{
		return glm::f64mat2x4{to_glm(v._0()), to_glm(v._1())};
	}
	//	 glm::i16mat2x4 to_glm(const Matrix2x4_i16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//}
	//	 glm::i16mat2x4 to_glm(const Matrix2x4_i16& v)
	//	 {
	//		 return glm::i16mat2x4{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::i32mat2x4 to_glm(const Matrix2x4_i32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//}
	//	 glm::i32mat2x4 to_glm(const Matrix2x4_i32& v)
	//	 {
	//		 return glm::i32mat2x4{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::i64mat2x4 to_glm(const Matrix2x4_i64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//}
	//	 glm::i64mat2x4 to_glm(const Matrix2x4_i64& v)
	//	 {
	//		 return glm::i64mat2x4{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::i8mat2x4 to_glm(const Matrix2x4_i8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//}
	//	 glm::i8mat2x4 to_glm(const Matrix2x4_i8& v)
	//	 {
	//		 return glm::i8mat2x4{to_glm(v._0()), to_glm(v._1())};
	//}
	//	 glm::u16mat2x4 to_glm(const Matrix2x4_u16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//}
	//	 glm::u16mat2x4 to_glm(const Matrix2x4_u16& v)
	//	 {
	//		 return glm::u16mat2x4{to_glm(v._0()), to_glm(v._1())};
	//	 }
	//	 glm::u32mat2x4 to_glm(const Matrix2x4_u32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//}
	//	 glm::u32mat2x4 to_glm(const Matrix2x4_u32& v)
	//	 {
	//		 return glm::u32mat2x4{to_glm(v._0()), to_glm(v._1())};
	//	 }
	//	 glm::u64mat2x4 to_glm(const Matrix2x4_u64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//}
	//	 glm::u64mat2x4 to_glm(const Matrix2x4_u64& v)
	//	 {
	//		 return glm::u64mat2x4{to_glm(v._0()), to_glm(v._1())};
	//	 }
	//	 glm::u8mat2x4 to_glm(const Matrix2x4_u8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//}
	//	 glm::u8mat2x4 to_glm(const Matrix2x4_u8& v)
	//	 {
	//		 return glm::u8mat2x4{to_glm(v._0()), to_glm(v._1())};
	//	 }
	glm::f32mat3x2 to_glm(const Matrix3x2_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32mat3x2 to_glm(const Matrix3x2_f32& v)
	{
		return glm::f32mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}
	glm::f64mat3x2 to_glm(const Matrix3x2_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64mat3x2 to_glm(const Matrix3x2_f64& v)
	{
		return glm::f64mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}
	//	 glm::i16mat3x2 to_glm(const Matrix3x2_i16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i16mat3x2 to_glm(const Matrix3x2_i16& v)
	//	 {
	//		 return glm::i16mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::i32mat3x2 to_glm(const Matrix3x2_i32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i32mat3x2 to_glm(const Matrix3x2_i32& v)
	//	 {
	//		 return glm::i32mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::i64mat3x2 to_glm(const Matrix3x2_i64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i64mat3x2 to_glm(const Matrix3x2_i64& v)
	//	 {
	//		 return glm::i64mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::i8mat3x2 to_glm(const Matrix3x2_i8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i8mat3x2 to_glm(const Matrix3x2_i8& v)
	//	 {
	//		 return glm::i8mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::u16mat3x2 to_glm(const Matrix3x2_u16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u16mat3x2 to_glm(const Matrix3x2_u16& v)
	//	 {
	//		 return glm::u16mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	//	 glm::u32mat3x2 to_glm(const Matrix3x2_u32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u32mat3x2 to_glm(const Matrix3x2_u32& v)
	//	 {
	//		 return glm::u32mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	//	 glm::u64mat3x2 to_glm(const Matrix3x2_u64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u64mat3x2 to_glm(const Matrix3x2_u64& v)
	//	 {
	//		 return glm::u64mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	//	 glm::u8mat3x2 to_glm(const Matrix3x2_u8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u8mat3x2 to_glm(const Matrix3x2_u8& v)
	//	 {
	//		 return glm::u8mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	glm::f32mat3x3 to_glm(const Matrix3x3_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32mat3x3 to_glm(const Matrix3x3_f32& v)
	{
		return glm::f32mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}
	glm::f64mat3x3 to_glm(const Matrix3x3_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64mat3x3 to_glm(const Matrix3x3_f64& v)
	{
		return glm::f64mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}
	//	 glm::i16mat3x3 to_glm(const Matrix3x3_i16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i16mat3x3 to_glm(const Matrix3x3_i16& v)
	//	 {
	//		 return glm::i16mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::i32mat3x3 to_glm(const Matrix3x3_i32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i32mat3x3 to_glm(const Matrix3x3_i32& v)
	//	 {
	//		 return glm::i32mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::i64mat3x3 to_glm(const Matrix3x3_i64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i64mat3x3 to_glm(const Matrix3x3_i64& v)
	//	 {
	//		 return glm::i64mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::i8mat3x3 to_glm(const Matrix3x3_i8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i8mat3x3 to_glm(const Matrix3x3_i8& v)
	//	 {
	//		 return glm::i8mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::u16mat3x3 to_glm(const Matrix3x3_u16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u16mat3x3 to_glm(const Matrix3x3_u16& v)
	//	 {
	//		 return glm::u16mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	//	 glm::u32mat3x3 to_glm(const Matrix3x3_u32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u32mat3x3 to_glm(const Matrix3x3_u32& v)
	//	 {
	//		 return glm::u32mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	//	 glm::u64mat3x3 to_glm(const Matrix3x3_u64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u64mat3x3 to_glm(const Matrix3x3_u64& v)
	//	 {
	//		 return glm::u64mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	//	 glm::u8mat3x3 to_glm(const Matrix3x3_u8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u8mat3x3 to_glm(const Matrix3x3_u8& v)
	//	 {
	//		 return glm::u8mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	glm::f32mat3x4 to_glm(const Matrix3x4_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32mat3x4 to_glm(const Matrix3x4_f32& v)
	{
		return glm::f32mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}
	glm::f64mat3x4 to_glm(const Matrix3x4_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64mat3x4 to_glm(const Matrix3x4_f64& v)
	{
		return glm::f64mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}
	//	 glm::i16mat3x4 to_glm(const Matrix3x4_i16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i16mat3x4 to_glm(const Matrix3x4_i16& v)
	//	 {
	//		 return glm::i16mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::i32mat3x4 to_glm(const Matrix3x4_i32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i32mat3x4 to_glm(const Matrix3x4_i32& v)
	//	 {
	//		 return glm::i32mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::i64mat3x4 to_glm(const Matrix3x4_i64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i64mat3x4 to_glm(const Matrix3x4_i64& v)
	//	 {
	//		 return glm::i64mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::i8mat3x4 to_glm(const Matrix3x4_i8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i8mat3x4 to_glm(const Matrix3x4_i8& v)
	//	 {
	//		 return glm::i8mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//}
	//	 glm::u16mat3x4 to_glm(const Matrix3x4_u16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u16mat3x4 to_glm(const Matrix3x4_u16& v)
	//	 {
	//		 return glm::u16mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	//	 glm::u32mat3x4 to_glm(const Matrix3x4_u32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u32mat3x4 to_glm(const Matrix3x4_u32& v)
	//	 {
	//		 return glm::u32mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	//	 glm::u64mat3x4 to_glm(const Matrix3x4_u64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u64mat3x4 to_glm(const Matrix3x4_u64& v)
	//	 {
	//		 return glm::u64mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	//	 glm::u8mat3x4 to_glm(const Matrix3x4_u8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u8mat3x4 to_glm(const Matrix3x4_u8& v)
	//	 {
	//		 return glm::u8mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	//	 }
	glm::f32mat4x2 to_glm(const Matrix4x2_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32mat4x2 to_glm(const Matrix4x2_f32& v)
	{
		return glm::f32mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}
	glm::f64mat4x2 to_glm(const Matrix4x2_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64mat4x2 to_glm(const Matrix4x2_f64& v)
	{
		return glm::f64mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}
	//	 glm::i16mat4x2 to_glm(const Matrix4x2_i16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i16mat4x2 to_glm(const Matrix4x2_i16& v)
	//	 {
	//		 return glm::i16mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::i32mat4x2 to_glm(const Matrix4x2_i32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i32mat4x2 to_glm(const Matrix4x2_i32& v)
	//	 {
	//		 return glm::i32mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::i64mat4x2 to_glm(const Matrix4x2_i64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i64mat4x2 to_glm(const Matrix4x2_i64& v)
	//	 {
	//		 return glm::i64mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::i8mat4x2 to_glm(const Matrix4x2_i8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i8mat4x2 to_glm(const Matrix4x2_i8& v)
	//	 {
	//		 return glm::i8mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::u16mat4x2 to_glm(const Matrix4x2_u16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u16mat4x2 to_glm(const Matrix4x2_u16& v)
	//	 {
	//		 return glm::u16mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	//	 glm::u32mat4x2 to_glm(const Matrix4x2_u32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u32mat4x2 to_glm(const Matrix4x2_u32& v)
	//	 {
	//		 return glm::u32mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	//	 glm::u64mat4x2 to_glm(const Matrix4x2_u64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u64mat4x2 to_glm(const Matrix4x2_u64& v)
	//	 {
	//		 return glm::u64mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	//	 glm::u8mat4x2 to_glm(const Matrix4x2_u8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u8mat4x2 to_glm(const Matrix4x2_u8& v)
	//	 {
	//		 return glm::u8mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	glm::f32mat4x3 to_glm(const Matrix4x3_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32mat4x3 to_glm(const Matrix4x3_f32& v)
	{
		return glm::f32mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}
	glm::f64mat4x3 to_glm(const Matrix4x3_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64mat4x3 to_glm(const Matrix4x3_f64& v)
	{
		return glm::f64mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}
	//	 glm::i16mat4x3 to_glm(const Matrix4x3_i16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i16mat4x3 to_glm(const Matrix4x3_i16& v)
	//	 {
	//		 return glm::i16mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::i32mat4x3 to_glm(const Matrix4x3_i32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i32mat4x3 to_glm(const Matrix4x3_i32& v)
	//	 {
	//		 return glm::i32mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::i64mat4x3 to_glm(const Matrix4x3_i64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i64mat4x3 to_glm(const Matrix4x3_i64& v)
	//	 {
	//		 return glm::i64mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::i8mat4x3 to_glm(const Matrix4x3_i8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i8mat4x3 to_glm(const Matrix4x3_i8& v)
	//	 {
	//		 return glm::i8mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::u16mat4x3 to_glm(const Matrix4x3_u16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u16mat4x3 to_glm(const Matrix4x3_u16& v)
	//	 {
	//		 return glm::u16mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	//	 glm::u32mat4x3 to_glm(const Matrix4x3_u32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u32mat4x3 to_glm(const Matrix4x3_u32& v)
	//	 {
	//		 return glm::u32mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	//	 glm::u64mat4x3 to_glm(const Matrix4x3_u64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u64mat4x3 to_glm(const Matrix4x3_u64& v)
	//	 {
	//		 return glm::u64mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	//	 glm::u8mat4x3 to_glm(const Matrix4x3_u8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u8mat4x3 to_glm(const Matrix4x3_u8& v)
	//	 {
	//		 return glm::u8mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	glm::f32mat4x4 to_glm(const Matrix4x4_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32mat4x4 to_glm(const Matrix4x4_f32& v)
	{
		return glm::f32mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}
	glm::f64mat4x4 to_glm(const Matrix4x4_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64mat4x4 to_glm(const Matrix4x4_f64& v)
	{
		return glm::f64mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}
	//	 glm::i16mat4x4 to_glm(const Matrix4x4_i16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i16mat4x4 to_glm(const Matrix4x4_i16& v)
	//	 {
	//		 return glm::i16mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::i32mat4x4 to_glm(const Matrix4x4_i32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i32mat4x4 to_glm(const Matrix4x4_i32& v)
	//	 {
	//		 return glm::i32mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::i64mat4x4 to_glm(const Matrix4x4_i64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i64mat4x4 to_glm(const Matrix4x4_i64& v)
	//	 {
	//		 return glm::i64mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::i8mat4x4 to_glm(const Matrix4x4_i8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i8mat4x4 to_glm(const Matrix4x4_i8& v)
	//	 {
	//		 return glm::i8mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//}
	//	 glm::u16mat4x4 to_glm(const Matrix4x4_u16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u16mat4x4 to_glm(const Matrix4x4_u16& v)
	//	 {
	//		 return glm::u16mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	//	 glm::u32mat4x4 to_glm(const Matrix4x4_u32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u32mat4x4 to_glm(const Matrix4x4_u32& v)
	//	 {
	//		 return glm::u32mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	//	 glm::u64mat4x4 to_glm(const Matrix4x4_u64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u64mat4x4 to_glm(const Matrix4x4_u64& v)
	//	 {
	//		 return glm::u64mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	//	 glm::u8mat4x4 to_glm(const Matrix4x4_u8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u8mat4x4 to_glm(const Matrix4x4_u8& v)
	//	 {
	//		 return glm::u8mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	//	 }
	glm::f32quat to_glm(const Quaternion_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32quat to_glm(const Quaternion_f32& v)
	{
		return glm::f32quat{v.x(), v.y(), v.z(), v.w()};
	}
	glm::f64quat to_glm(const Quaternion_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64quat to_glm(const Quaternion_f64& v)
	{
		return glm::f64quat{v.x(), v.y(), v.z(), v.w()};
	}
	//	 glm::i16quat to_glm(const Quaternion_i16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i16quat to_glm(const Quaternion_i16& v)
	//	 {
	//		 return glm::i16quat{v.x(), v.y(), v.z(), v.w()};
	//}
	//	 glm::i32quat to_glm(const Quaternion_i32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i32quat to_glm(const Quaternion_i32& v)
	//	 {
	//		 return glm::i32quat{v.x(), v.y(), v.z(), v.w()};
	//}
	//	 glm::i64quat to_glm(const Quaternion_i64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i64quat to_glm(const Quaternion_i64& v)
	//	 {
	//		 return glm::i64quat{v.x(), v.y(), v.z(), v.w()};
	//}
	//	 glm::i8quat to_glm(const Quaternion_i8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::i8quat to_glm(const Quaternion_i8& v)
	//	 {
	//		 return glm::i8quat{v.x(), v.y(), v.z(), v.w()};
	//}
	//	 glm::u16quat to_glm(const Quaternion_u16* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u16quat to_glm(const Quaternion_u16& v)
	//	 {
	//		 return glm::u16quat{v.x(), v.y(), v.z(), v.w()};
	//	 }
	//	 glm::u32quat to_glm(const Quaternion_u32* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u32quat to_glm(const Quaternion_u32& v)
	//	 {
	//		 return glm::u32quat{v.x(), v.y(), v.z(), v.w()};
	//	 }
	//	 glm::u64quat to_glm(const Quaternion_u64* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u64quat to_glm(const Quaternion_u64& v)
	//	 {
	//		 return glm::u64quat{v.x(), v.y(), v.z(), v.w()};
	//	 }
	//	 glm::u8quat to_glm(const Quaternion_u8* pv)
	//	 {
	//		 KHUTILS_ASSERT_PTR(pv);
	//		 return to_glm(*pv);
	//	 }
	//	 glm::u8quat to_glm(const Quaternion_u8& v)
	//	 {
	//		 return glm::u8quat{v.x(), v.y(), v.z(), v.w()};
	//	 }
	glm::f32vec2 to_glm(const Vector2_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32vec2 to_glm(const Vector2_f32& v)
	{
		return glm::f32vec2{v.x(), v.y()};
	}
	glm::f64vec2 to_glm(const Vector2_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64vec2 to_glm(const Vector2_f64& v)
	{
		return glm::f64vec2{v.x(), v.y()};
	}
	glm::i16vec2 to_glm(const Vector2_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i16vec2 to_glm(const Vector2_i16& v)
	{
		return glm::i16vec2{v.x(), v.y()};
	}
	glm::i32vec2 to_glm(const Vector2_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i32vec2 to_glm(const Vector2_i32& v)
	{
		return glm::i32vec2{v.x(), v.y()};
	}
	glm::i64vec2 to_glm(const Vector2_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i64vec2 to_glm(const Vector2_i64& v)
	{
		return glm::i64vec2{v.x(), v.y()};
	}
	glm::i8vec2 to_glm(const Vector2_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i8vec2 to_glm(const Vector2_i8& v)
	{
		return glm::i8vec2{v.x(), v.y()};
	}
	glm::u16vec2 to_glm(const Vector2_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u16vec2 to_glm(const Vector2_u16& v)
	{
		return glm::u16vec2{v.x(), v.y()};
	}
	glm::u32vec2 to_glm(const Vector2_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u32vec2 to_glm(const Vector2_u32& v)
	{
		return glm::u32vec2{v.x(), v.y()};
	}
	glm::u64vec2 to_glm(const Vector2_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u64vec2 to_glm(const Vector2_u64& v)
	{
		return glm::u64vec2{v.x(), v.y()};
	}
	glm::u8vec2 to_glm(const Vector2_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u8vec2 to_glm(const Vector2_u8& v)
	{
		return glm::u8vec2{v.x(), v.y()};
	}
	glm::f32vec3 to_glm(const ColorRGB_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32vec3 to_glm(const ColorRGB_f32& v)
	{
		return glm::f32vec3{v.r(), v.g(), v.b()};
	}
	glm::f32vec3 to_glm(const Vector3_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32vec3 to_glm(const Vector3_f32& v)
	{
		return glm::f32vec3{v.x(), v.y(), v.z()};
	}
	glm::f64vec3 to_glm(const ColorRGB_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64vec3 to_glm(const ColorRGB_f64& v)
	{
		return glm::f64vec3{v.r(), v.g(), v.b()};
	}
	glm::f64vec3 to_glm(const Vector3_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64vec3 to_glm(const Vector3_f64& v)
	{
		return glm::f64vec3{v.x(), v.y(), v.z()};
	}
	glm::i16vec3 to_glm(const ColorRGB_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i16vec3 to_glm(const ColorRGB_i16& v)
	{
		return glm::i16vec3{v.r(), v.g(), v.b()};
	}
	glm::i16vec3 to_glm(const Vector3_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i16vec3 to_glm(const Vector3_i16& v)
	{
		return glm::i16vec3{v.x(), v.y(), v.z()};
	}
	glm::i32vec3 to_glm(const ColorRGB_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i32vec3 to_glm(const ColorRGB_i32& v)
	{
		return glm::i32vec3{v.r(), v.g(), v.b()};
	}
	glm::i32vec3 to_glm(const Vector3_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i32vec3 to_glm(const Vector3_i32& v)
	{
		return glm::i32vec3{v.x(), v.y(), v.z()};
	}
	glm::i64vec3 to_glm(const ColorRGB_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i64vec3 to_glm(const ColorRGB_i64& v)
	{
		return glm::i64vec3{v.r(), v.g(), v.b()};
	}
	glm::i64vec3 to_glm(const Vector3_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i64vec3 to_glm(const Vector3_i64& v)
	{
		return glm::i64vec3{v.x(), v.y(), v.z()};
	}
	glm::i8vec3 to_glm(const ColorRGB_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i8vec3 to_glm(const ColorRGB_i8& v)
	{
		return glm::i8vec3{v.r(), v.g(), v.b()};
	}
	glm::i8vec3 to_glm(const Vector3_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i8vec3 to_glm(const Vector3_i8& v)
	{
		return glm::i8vec3{v.x(), v.y(), v.z()};
	}
	glm::u16vec3 to_glm(const ColorRGB_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u16vec3 to_glm(const ColorRGB_u16& v)
	{
		return glm::u16vec3{v.r(), v.g(), v.b()};
	}
	glm::u16vec3 to_glm(const Vector3_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u16vec3 to_glm(const Vector3_u16& v)
	{
		return glm::u16vec3{v.x(), v.y(), v.z()};
	}
	glm::u32vec3 to_glm(const ColorRGB_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u32vec3 to_glm(const ColorRGB_u32& v)
	{
		return glm::u32vec3{v.r(), v.g(), v.b()};
	}
	glm::u32vec3 to_glm(const Vector3_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u32vec3 to_glm(const Vector3_u32& v)
	{
		return glm::u32vec3{v.x(), v.y(), v.z()};
	}
	glm::u64vec3 to_glm(const ColorRGB_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u64vec3 to_glm(const ColorRGB_u64& v)
	{
		return glm::u64vec3{v.r(), v.g(), v.b()};
	}
	glm::u64vec3 to_glm(const Vector3_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u64vec3 to_glm(const Vector3_u64& v)
	{
		return glm::u64vec3{v.x(), v.y(), v.z()};
	}
	glm::u8vec3 to_glm(const ColorRGB_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u8vec3 to_glm(const ColorRGB_u8& v)
	{
		return glm::u8vec3{v.r(), v.g(), v.b()};
	}
	glm::u8vec3 to_glm(const Vector3_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u8vec3 to_glm(const Vector3_u8& v)
	{
		return glm::u8vec3{v.x(), v.y(), v.z()};
	}
	glm::f32vec4 to_glm(const ColorRGBA_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32vec4 to_glm(const ColorRGBA_f32& v)
	{
		return glm::f32vec4{v.r(), v.g(), v.b(), v.a()};
	}
	glm::f32vec4 to_glm(const Vector4_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f32vec4 to_glm(const Vector4_f32& v)
	{
		return glm::f32vec4{v.x(), v.y(), v.z(), v.w()};
	}
	glm::f64vec4 to_glm(const ColorRGBA_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64vec4 to_glm(const ColorRGBA_f64& v)
	{
		return glm::f64vec4{v.r(), v.g(), v.b(), v.a()};
	}
	glm::f64vec4 to_glm(const Vector4_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::f64vec4 to_glm(const Vector4_f64& v)
	{
		return glm::f64vec4{v.x(), v.y(), v.z(), v.w()};
	}
	glm::i16vec4 to_glm(const ColorRGBA_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i16vec4 to_glm(const ColorRGBA_i16& v)
	{
		return glm::i16vec4{v.r(), v.g(), v.b(), v.a()};
	}
	glm::i16vec4 to_glm(const Vector4_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i16vec4 to_glm(const Vector4_i16& v)
	{
		return glm::i16vec4{v.x(), v.y(), v.z(), v.w()};
	}
	glm::i32vec4 to_glm(const ColorRGBA_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i32vec4 to_glm(const ColorRGBA_i32& v)
	{
		return glm::i32vec4{v.r(), v.g(), v.b(), v.a()};
	}
	glm::i32vec4 to_glm(const Vector4_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i32vec4 to_glm(const Vector4_i32& v)
	{
		return glm::i32vec4{v.x(), v.y(), v.z(), v.w()};
	}
	glm::i64vec4 to_glm(const ColorRGBA_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i64vec4 to_glm(const ColorRGBA_i64& v)
	{
		return glm::i64vec4{v.r(), v.g(), v.b(), v.a()};
	}
	glm::i64vec4 to_glm(const Vector4_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i64vec4 to_glm(const Vector4_i64& v)
	{
		return glm::i64vec4{v.x(), v.y(), v.z(), v.w()};
	}
	glm::i8vec4 to_glm(const ColorRGBA_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i8vec4 to_glm(const ColorRGBA_i8& v)
	{
		return glm::i8vec4{v.r(), v.g(), v.b(), v.a()};
	}
	glm::i8vec4 to_glm(const Vector4_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::i8vec4 to_glm(const Vector4_i8& v)
	{
		return glm::i8vec4{v.x(), v.y(), v.z(), v.w()};
	}
	glm::u16vec4 to_glm(const ColorRGBA_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u16vec4 to_glm(const ColorRGBA_u16& v)
	{
		return glm::u16vec4{v.r(), v.g(), v.b(), v.a()};
	}
	glm::u16vec4 to_glm(const Vector4_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u16vec4 to_glm(const Vector4_u16& v)
	{
		return glm::u16vec4{v.x(), v.y(), v.z(), v.w()};
	}
	glm::u32vec4 to_glm(const ColorRGBA_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u32vec4 to_glm(const ColorRGBA_u32& v)
	{
		return glm::u32vec4{v.r(), v.g(), v.b(), v.a()};
	}
	glm::u32vec4 to_glm(const Vector4_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u32vec4 to_glm(const Vector4_u32& v)
	{
		return glm::u32vec4{v.x(), v.y(), v.z(), v.w()};
	}
	glm::u64vec4 to_glm(const ColorRGBA_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u64vec4 to_glm(const ColorRGBA_u64& v)
	{
		return glm::u64vec4{v.r(), v.g(), v.b(), v.a()};
	}
	glm::u64vec4 to_glm(const Vector4_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u64vec4 to_glm(const Vector4_u64& v)
	{
		return glm::u64vec4{v.x(), v.y(), v.z(), v.w()};
	}
	glm::u8vec4 to_glm(const ColorRGBA_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u8vec4 to_glm(const ColorRGBA_u8& v)
	{
		return glm::u8vec4{v.r(), v.g(), v.b(), v.a()};
	}
	glm::u8vec4 to_glm(const Vector4_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}
	glm::u8vec4 to_glm(const Vector4_u8& v)
	{
		return glm::u8vec4{v.x(), v.y(), v.z(), v.w()};
	}


}	// namespace flatmath
