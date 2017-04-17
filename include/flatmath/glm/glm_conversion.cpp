#include "glm_conversion.hpp"
#include "../mutable/flatmath_generated.h"
#include "../typedefs.hpp"

#define KHUTILS_ASSERTION_INLINE
#include <khutils/assertion.hpp>

#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>

namespace flatmath
{

	Matrix2x2_f32 from_glm(const glm::mat2x2& v)
	{
		return Matrix2x2_f32{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x2_f64 from_glm(const glm::dmat2x2& v)
	{
		return Matrix2x2_f64{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x2_i16 from_glm(const glm::i16mat2x2& v)
	{
		return Matrix2x2_i16{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x2_i32 from_glm(const glm::imat2x2& v)
	{
		return Matrix2x2_i32{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x2_i64 from_glm(const glm::i64mat2x2& v)
	{
		return Matrix2x2_i64{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x2_i8 from_glm(const glm::i8mat2x2& v)
	{
		return Matrix2x2_i8{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x2_u16 from_glm(const glm::u16mat2x2& v)
	{
		return Matrix2x2_u16{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x2_u32 from_glm(const glm::umat2x2& v)
	{
		return Matrix2x2_u32{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x2_u64 from_glm(const glm::u64mat2x2& v)
	{
		return Matrix2x2_u64{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x2_u8 from_glm(const glm::u8mat2x2& v)
	{
		return Matrix2x2_u8{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x3_f32 from_glm(const glm::mat2x3& v)
	{
		return Matrix2x3_f32{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x3_f64 from_glm(const glm::dmat2x3& v)
	{
		return Matrix2x3_f64{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x3_i16 from_glm(const glm::i16mat2x3& v)
	{
		return Matrix2x3_i16{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x3_i32 from_glm(const glm::imat2x3& v)
	{
		return Matrix2x3_i32{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x3_i64 from_glm(const glm::i64mat2x3& v)
	{
		return Matrix2x3_i64{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x3_i8 from_glm(const glm::i8mat2x3& v)
	{
		return Matrix2x3_i8{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x3_u16 from_glm(const glm::u16mat2x3& v)
	{
		return Matrix2x3_u16{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x3_u32 from_glm(const glm::umat2x3& v)
	{
		return Matrix2x3_u32{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x3_u64 from_glm(const glm::u64mat2x3& v)
	{
		return Matrix2x3_u64{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x3_u8 from_glm(const glm::u8mat2x3& v)
	{
		return Matrix2x3_u8{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x4_f32 from_glm(const glm::mat2x4& v)
	{
		return Matrix2x4_f32{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x4_f64 from_glm(const glm::dmat2x4& v)
	{
		return Matrix2x4_f64{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x4_i16 from_glm(const glm::i16mat2x4& v)
	{
		return Matrix2x4_i16{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x4_i32 from_glm(const glm::imat2x4& v)
	{
		return Matrix2x4_i32{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x4_i64 from_glm(const glm::i64mat2x4& v)
	{
		return Matrix2x4_i64{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x4_i8 from_glm(const glm::i8mat2x4& v)
	{
		return Matrix2x4_i8{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x4_u16 from_glm(const glm::u16mat2x4& v)
	{
		return Matrix2x4_u16{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x4_u32 from_glm(const glm::umat2x4& v)
	{
		return Matrix2x4_u32{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x4_u64 from_glm(const glm::u64mat2x4& v)
	{
		return Matrix2x4_u64{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix2x4_u8 from_glm(const glm::u8mat2x4& v)
	{
		return Matrix2x4_u8{from_glm(v[0]), from_glm(v[1])};
	}

	Matrix3x2_f32 from_glm(const glm::mat3x2& v)
	{
		return Matrix3x2_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x2_f64 from_glm(const glm::dmat3x2& v)
	{
		return Matrix3x2_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x2_i16 from_glm(const glm::i16mat3x2& v)
	{
		return Matrix3x2_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x2_i32 from_glm(const glm::imat3x2& v)
	{
		return Matrix3x2_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x2_i64 from_glm(const glm::i64mat3x2& v)
	{
		return Matrix3x2_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x2_i8 from_glm(const glm::i8mat3x2& v)
	{
		return Matrix3x2_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x2_u16 from_glm(const glm::u16mat3x2& v)
	{
		return Matrix3x2_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x2_u32 from_glm(const glm::umat3x2& v)
	{
		return Matrix3x2_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x2_u64 from_glm(const glm::u64mat3x2& v)
	{
		return Matrix3x2_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x2_u8 from_glm(const glm::u8mat3x2& v)
	{
		return Matrix3x2_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x3_f32 from_glm(const glm::mat3x3& v)
	{
		return Matrix3x3_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x3_f64 from_glm(const glm::dmat3x3& v)
	{
		return Matrix3x3_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x3_i16 from_glm(const glm::i16mat3x3& v)
	{
		return Matrix3x3_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x3_i32 from_glm(const glm::imat3x3& v)
	{
		return Matrix3x3_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x3_i64 from_glm(const glm::i64mat3x3& v)
	{
		return Matrix3x3_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x3_i8 from_glm(const glm::i8mat3x3& v)
	{
		return Matrix3x3_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x3_u16 from_glm(const glm::u16mat3x3& v)
	{
		return Matrix3x3_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x3_u32 from_glm(const glm::umat3x3& v)
	{
		return Matrix3x3_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x3_u64 from_glm(const glm::u64mat3x3& v)
	{
		return Matrix3x3_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x3_u8 from_glm(const glm::u8mat3x3& v)
	{
		return Matrix3x3_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x4_f32 from_glm(const glm::mat3x4& v)
	{
		return Matrix3x4_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x4_f64 from_glm(const glm::dmat3x4& v)
	{
		return Matrix3x4_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x4_i16 from_glm(const glm::i16mat3x4& v)
	{
		return Matrix3x4_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x4_i32 from_glm(const glm::imat3x4& v)
	{
		return Matrix3x4_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x4_i64 from_glm(const glm::i64mat3x4& v)
	{
		return Matrix3x4_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x4_i8 from_glm(const glm::i8mat3x4& v)
	{
		return Matrix3x4_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x4_u16 from_glm(const glm::u16mat3x4& v)
	{
		return Matrix3x4_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x4_u32 from_glm(const glm::umat3x4& v)
	{
		return Matrix3x4_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x4_u64 from_glm(const glm::u64mat3x4& v)
	{
		return Matrix3x4_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix3x4_u8 from_glm(const glm::u8mat3x4& v)
	{
		return Matrix3x4_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2])};
	}

	Matrix4x2_f32 from_glm(const glm::mat4x2& v)
	{
		return Matrix4x2_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x2_f64 from_glm(const glm::dmat4x2& v)
	{
		return Matrix4x2_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x2_i16 from_glm(const glm::i16mat4x2& v)
	{
		return Matrix4x2_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x2_i32 from_glm(const glm::imat4x2& v)
	{
		return Matrix4x2_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x2_i64 from_glm(const glm::i64mat4x2& v)
	{
		return Matrix4x2_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x2_i8 from_glm(const glm::i8mat4x2& v)
	{
		return Matrix4x2_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x2_u16 from_glm(const glm::u16mat4x2& v)
	{
		return Matrix4x2_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x2_u32 from_glm(const glm::umat4x2& v)
	{
		return Matrix4x2_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x2_u64 from_glm(const glm::u64mat4x2& v)
	{
		return Matrix4x2_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x2_u8 from_glm(const glm::u8mat4x2& v)
	{
		return Matrix4x2_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x3_f32 from_glm(const glm::mat4x3& v)
	{
		return Matrix4x3_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x3_f64 from_glm(const glm::dmat4x3& v)
	{
		return Matrix4x3_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x3_i16 from_glm(const glm::i16mat4x3& v)
	{
		return Matrix4x3_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x3_i32 from_glm(const glm::imat4x3& v)
	{
		return Matrix4x3_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x3_i64 from_glm(const glm::i64mat4x3& v)
	{
		return Matrix4x3_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x3_i8 from_glm(const glm::i8mat4x3& v)
	{
		return Matrix4x3_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x3_u16 from_glm(const glm::u16mat4x3& v)
	{
		return Matrix4x3_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x3_u32 from_glm(const glm::umat4x3& v)
	{
		return Matrix4x3_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x3_u64 from_glm(const glm::u64mat4x3& v)
	{
		return Matrix4x3_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x3_u8 from_glm(const glm::u8mat4x3& v)
	{
		return Matrix4x3_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x4_f32 from_glm(const glm::mat4x4& v)
	{
		return Matrix4x4_f32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x4_f64 from_glm(const glm::dmat4x4& v)
	{
		return Matrix4x4_f64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x4_i16 from_glm(const glm::i16mat4x4& v)
	{
		return Matrix4x4_i16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x4_i32 from_glm(const glm::imat4x4& v)
	{
		return Matrix4x4_i32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x4_i64 from_glm(const glm::i64mat4x4& v)
	{
		return Matrix4x4_i64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x4_i8 from_glm(const glm::i8mat4x4& v)
	{
		return Matrix4x4_i8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x4_u16 from_glm(const glm::u16mat4x4& v)
	{
		return Matrix4x4_u16{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x4_u32 from_glm(const glm::umat4x4& v)
	{
		return Matrix4x4_u32{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x4_u64 from_glm(const glm::u64mat4x4& v)
	{
		return Matrix4x4_u64{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Matrix4x4_u8 from_glm(const glm::u8mat4x4& v)
	{
		return Matrix4x4_u8{from_glm(v[0]), from_glm(v[1]), from_glm(v[2]), from_glm(v[3])};
	}

	Quaternion_f32 from_glm(const glm::quat& v)
	{
		return Quaternion_f32{v.x, v.y, v.z, v.w};
	}

	Quaternion_f64 from_glm(const glm::dquat& v)
	{
		return Quaternion_f64{v.x, v.y, v.z, v.w};
	}

	Quaternion_i16 from_glm(const glm::i16quat& v)
	{
		return Quaternion_i16{v.x, v.y, v.z, v.w};
	}

	Quaternion_i32 from_glm(const glm::iquat& v)
	{
		return Quaternion_i32{v.x, v.y, v.z, v.w};
	}

	Quaternion_i64 from_glm(const glm::i64quat& v)
	{
		return Quaternion_i64{v.x, v.y, v.z, v.w};
	}

	Quaternion_i8 from_glm(const glm::i8quat& v)
	{
		return Quaternion_i8{v.x, v.y, v.z, v.w};
	}

	Quaternion_u16 from_glm(const glm::u16quat& v)
	{
		return Quaternion_u16{v.x, v.y, v.z, v.w};
	}

	Quaternion_u32 from_glm(const glm::uquat& v)
	{
		return Quaternion_u32{v.x, v.y, v.z, v.w};
	}

	Quaternion_u64 from_glm(const glm::u64quat& v)
	{
		return Quaternion_u64{v.x, v.y, v.z, v.w};
	}

	Quaternion_u8 from_glm(const glm::u8quat& v)
	{
		return Quaternion_u8{v.x, v.y, v.z, v.w};
	}

	Vector2_f32 from_glm(const glm::vec2& v)
	{
		return Vector2_f32{v.x, v.y};
	}

	Vector2_f64 from_glm(const glm::dvec2& v)
	{
		return Vector2_f64{v.x, v.y};
	}

	Vector2_i16 from_glm(const glm::i16vec2& v)
	{
		return Vector2_i16{v.x, v.y};
	}

	Vector2_i32 from_glm(const glm::ivec2& v)
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

	Vector2_u32 from_glm(const glm::uvec2& v)
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

	Vector3_f32 from_glm(const glm::vec3& v)
	{
		return Vector3_f32{v.x, v.y, v.z};
	}

	Vector3_f64 from_glm(const glm::dvec3& v)
	{
		return Vector3_f64{v.x, v.y, v.z};
	}

	Vector3_i16 from_glm(const glm::i16vec3& v)
	{
		return Vector3_i16{v.x, v.y, v.z};
	}

	Vector3_i32 from_glm(const glm::ivec3& v)
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

	Vector3_u32 from_glm(const glm::uvec3& v)
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

	Vector4_f32 from_glm(const glm::vec4& v)
	{
		return Vector4_f32{v.x, v.y, v.z, v.w};
	}

	Vector4_f64 from_glm(const glm::dvec4& v)
	{
		return Vector4_f64{v.x, v.y, v.z, v.w};
	}

	Vector4_i16 from_glm(const glm::i16vec4& v)
	{
		return Vector4_i16{v.x, v.y, v.z, v.w};
	}

	Vector4_i32 from_glm(const glm::ivec4& v)
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

	Vector4_u32 from_glm(const glm::uvec4& v)
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

	glm::mat2x2 to_glm(const Matrix2x2_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::mat2x2 to_glm(const Matrix2x2_f32& v)
	{
		return glm::mat2x2{to_glm(v._0()), to_glm(v._1())};
	}

	glm::dmat2x2 to_glm(const Matrix2x2_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dmat2x2 to_glm(const Matrix2x2_f64& v)
	{
		return glm::dmat2x2{to_glm(v._0()), to_glm(v._1())};
	}

	glm::i16mat2x2 to_glm(const Matrix2x2_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i16mat2x2 to_glm(const Matrix2x2_i16& v)
	{
		return glm::i16mat2x2{to_glm(v._0()), to_glm(v._1())};
	}

	glm::imat2x2 to_glm(const Matrix2x2_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::imat2x2 to_glm(const Matrix2x2_i32& v)
	{
		return glm::imat2x2{to_glm(v._0()), to_glm(v._1())};
	}

	glm::i64mat2x2 to_glm(const Matrix2x2_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i64mat2x2 to_glm(const Matrix2x2_i64& v)
	{
		return glm::i64mat2x2{to_glm(v._0()), to_glm(v._1())};
	}

	glm::i8mat2x2 to_glm(const Matrix2x2_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8mat2x2 to_glm(const Matrix2x2_i8& v)
	{
		return glm::i8mat2x2{to_glm(v._0()), to_glm(v._1())};
	}

	glm::u16mat2x2 to_glm(const Matrix2x2_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u16mat2x2 to_glm(const Matrix2x2_u16& v)
	{
		return glm::u16mat2x2{to_glm(v._0()), to_glm(v._1())};
	}

	glm::umat2x2 to_glm(const Matrix2x2_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::umat2x2 to_glm(const Matrix2x2_u32& v)
	{
		return glm::umat2x2{to_glm(v._0()), to_glm(v._1())};
	}

	glm::u64mat2x2 to_glm(const Matrix2x2_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u64mat2x2 to_glm(const Matrix2x2_u64& v)
	{
		return glm::u64mat2x2{to_glm(v._0()), to_glm(v._1())};
	}

	glm::u8mat2x2 to_glm(const Matrix2x2_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u8mat2x2 to_glm(const Matrix2x2_u8& v)
	{
		return glm::u8mat2x2{to_glm(v._0()), to_glm(v._1())};
	}

	glm::mat2x3 to_glm(const Matrix2x3_f32& v)
	{
		return glm::mat2x3{to_glm(v._0()), to_glm(v._1())};
	}

	glm::mat2x3 to_glm(const Matrix2x3_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dmat2x3 to_glm(const Matrix2x3_f64& v)
	{
		return glm::dmat2x3{to_glm(v._0()), to_glm(v._1())};
	}

	glm::dmat2x3 to_glm(const Matrix2x3_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i16mat2x3 to_glm(const Matrix2x3_i16& v)
	{
		return glm::i16mat2x3{to_glm(v._0()), to_glm(v._1())};
	}

	glm::i16mat2x3 to_glm(const Matrix2x3_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::imat2x3 to_glm(const Matrix2x3_i32& v)
	{
		return glm::imat2x3{to_glm(v._0()), to_glm(v._1())};
	}

	glm::imat2x3 to_glm(const Matrix2x3_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i64mat2x3 to_glm(const Matrix2x3_i64& v)
	{
		return glm::i64mat2x3{to_glm(v._0()), to_glm(v._1())};
	}

	glm::i64mat2x3 to_glm(const Matrix2x3_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8mat2x3 to_glm(const Matrix2x3_i8& v)
	{
		return glm::i8mat2x3{to_glm(v._0()), to_glm(v._1())};
	}

	glm::i8mat2x3 to_glm(const Matrix2x3_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u16mat2x3 to_glm(const Matrix2x3_u16& v)
	{
		return glm::u16mat2x3{to_glm(v._0()), to_glm(v._1())};
	}

	glm::u16mat2x3 to_glm(const Matrix2x3_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::umat2x3 to_glm(const Matrix2x3_u32& v)
	{
		return glm::umat2x3{to_glm(v._0()), to_glm(v._1())};
	}

	glm::umat2x3 to_glm(const Matrix2x3_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u64mat2x3 to_glm(const Matrix2x3_u64& v)
	{
		return glm::u64mat2x3{to_glm(v._0()), to_glm(v._1())};
	}

	glm::u64mat2x3 to_glm(const Matrix2x3_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u8mat2x3 to_glm(const Matrix2x3_u8& v)
	{
		return glm::u8mat2x3{to_glm(v._0()), to_glm(v._1())};
	}

	glm::u8mat2x3 to_glm(const Matrix2x3_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::mat2x4 to_glm(const Matrix2x4_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
		;
	}

	glm::mat2x4 to_glm(const Matrix2x4_f32& v)
	{
		return glm::mat2x4{to_glm(v._0()), to_glm(v._1())};
	}

	glm::dmat2x4 to_glm(const Matrix2x4_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
		;
	}

	glm::dmat2x4 to_glm(const Matrix2x4_f64& v)
	{
		return glm::dmat2x4{to_glm(v._0()), to_glm(v._1())};
	}

	glm::i16mat2x4 to_glm(const Matrix2x4_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i16mat2x4 to_glm(const Matrix2x4_i16& v)
	{
		return glm::i16mat2x4{to_glm(v._0()), to_glm(v._1())};
	}

	glm::imat2x4 to_glm(const Matrix2x4_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::imat2x4 to_glm(const Matrix2x4_i32& v)
	{
		return glm::imat2x4{to_glm(v._0()), to_glm(v._1())};
	}

	glm::i64mat2x4 to_glm(const Matrix2x4_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i64mat2x4 to_glm(const Matrix2x4_i64& v)
	{
		return glm::i64mat2x4{to_glm(v._0()), to_glm(v._1())};
	}

	glm::i8mat2x4 to_glm(const Matrix2x4_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8mat2x4 to_glm(const Matrix2x4_i8& v)
	{
		return glm::i8mat2x4{to_glm(v._0()), to_glm(v._1())};
	}

	glm::u16mat2x4 to_glm(const Matrix2x4_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u16mat2x4 to_glm(const Matrix2x4_u16& v)
	{
		return glm::u16mat2x4{to_glm(v._0()), to_glm(v._1())};
	}

	glm::umat2x4 to_glm(const Matrix2x4_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::umat2x4 to_glm(const Matrix2x4_u32& v)
	{
		return glm::umat2x4{to_glm(v._0()), to_glm(v._1())};
	}

	glm::u64mat2x4 to_glm(const Matrix2x4_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u64mat2x4 to_glm(const Matrix2x4_u64& v)
	{
		return glm::u64mat2x4{to_glm(v._0()), to_glm(v._1())};
	}

	glm::u8mat2x4 to_glm(const Matrix2x4_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u8mat2x4 to_glm(const Matrix2x4_u8& v)
	{
		return glm::u8mat2x4{to_glm(v._0()), to_glm(v._1())};
	}

	glm::mat3x2 to_glm(const Matrix3x2_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::mat3x2 to_glm(const Matrix3x2_f32& v)
	{
		return glm::mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::dmat3x2 to_glm(const Matrix3x2_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dmat3x2 to_glm(const Matrix3x2_f64& v)
	{
		return glm::dmat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::i16mat3x2 to_glm(const Matrix3x2_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i16mat3x2 to_glm(const Matrix3x2_i16& v)
	{
		return glm::i16mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::imat3x2 to_glm(const Matrix3x2_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::imat3x2 to_glm(const Matrix3x2_i32& v)
	{
		return glm::imat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::i64mat3x2 to_glm(const Matrix3x2_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i64mat3x2 to_glm(const Matrix3x2_i64& v)
	{
		return glm::i64mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::i8mat3x2 to_glm(const Matrix3x2_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8mat3x2 to_glm(const Matrix3x2_i8& v)
	{
		return glm::i8mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::u16mat3x2 to_glm(const Matrix3x2_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u16mat3x2 to_glm(const Matrix3x2_u16& v)
	{
		return glm::u16mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::umat3x2 to_glm(const Matrix3x2_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::umat3x2 to_glm(const Matrix3x2_u32& v)
	{
		return glm::umat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::u64mat3x2 to_glm(const Matrix3x2_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u64mat3x2 to_glm(const Matrix3x2_u64& v)
	{
		return glm::u64mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::u8mat3x2 to_glm(const Matrix3x2_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u8mat3x2 to_glm(const Matrix3x2_u8& v)
	{
		return glm::u8mat3x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::mat3x3 to_glm(const Matrix3x3_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::mat3x3 to_glm(const Matrix3x3_f32& v)
	{
		return glm::mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::dmat3x3 to_glm(const Matrix3x3_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dmat3x3 to_glm(const Matrix3x3_f64& v)
	{
		return glm::dmat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::i16mat3x3 to_glm(const Matrix3x3_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i16mat3x3 to_glm(const Matrix3x3_i16& v)
	{
		return glm::i16mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::imat3x3 to_glm(const Matrix3x3_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::imat3x3 to_glm(const Matrix3x3_i32& v)
	{
		return glm::imat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::i64mat3x3 to_glm(const Matrix3x3_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i64mat3x3 to_glm(const Matrix3x3_i64& v)
	{
		return glm::i64mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::i8mat3x3 to_glm(const Matrix3x3_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8mat3x3 to_glm(const Matrix3x3_i8& v)
	{
		return glm::i8mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::u16mat3x3 to_glm(const Matrix3x3_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u16mat3x3 to_glm(const Matrix3x3_u16& v)
	{
		return glm::u16mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::umat3x3 to_glm(const Matrix3x3_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::umat3x3 to_glm(const Matrix3x3_u32& v)
	{
		return glm::umat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::u64mat3x3 to_glm(const Matrix3x3_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u64mat3x3 to_glm(const Matrix3x3_u64& v)
	{
		return glm::u64mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::u8mat3x3 to_glm(const Matrix3x3_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u8mat3x3 to_glm(const Matrix3x3_u8& v)
	{
		return glm::u8mat3x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::mat3x4 to_glm(const Matrix3x4_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::mat3x4 to_glm(const Matrix3x4_f32& v)
	{
		return glm::mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::dmat3x4 to_glm(const Matrix3x4_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dmat3x4 to_glm(const Matrix3x4_f64& v)
	{
		return glm::dmat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::i16mat3x4 to_glm(const Matrix3x4_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i16mat3x4 to_glm(const Matrix3x4_i16& v)
	{
		return glm::i16mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::imat3x4 to_glm(const Matrix3x4_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::imat3x4 to_glm(const Matrix3x4_i32& v)
	{
		return glm::imat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::i64mat3x4 to_glm(const Matrix3x4_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i64mat3x4 to_glm(const Matrix3x4_i64& v)
	{
		return glm::i64mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::i8mat3x4 to_glm(const Matrix3x4_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8mat3x4 to_glm(const Matrix3x4_i8& v)
	{
		return glm::i8mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::u16mat3x4 to_glm(const Matrix3x4_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u16mat3x4 to_glm(const Matrix3x4_u16& v)
	{
		return glm::u16mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::umat3x4 to_glm(const Matrix3x4_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::umat3x4 to_glm(const Matrix3x4_u32& v)
	{
		return glm::umat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::u64mat3x4 to_glm(const Matrix3x4_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u64mat3x4 to_glm(const Matrix3x4_u64& v)
	{
		return glm::u64mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::u8mat3x4 to_glm(const Matrix3x4_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u8mat3x4 to_glm(const Matrix3x4_u8& v)
	{
		return glm::u8mat3x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2())};
	}

	glm::mat4x2 to_glm(const Matrix4x2_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::mat4x2 to_glm(const Matrix4x2_f32& v)
	{
		return glm::mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::dmat4x2 to_glm(const Matrix4x2_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dmat4x2 to_glm(const Matrix4x2_f64& v)
	{
		return glm::dmat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::i16mat4x2 to_glm(const Matrix4x2_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i16mat4x2 to_glm(const Matrix4x2_i16& v)
	{
		return glm::i16mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::imat4x2 to_glm(const Matrix4x2_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::imat4x2 to_glm(const Matrix4x2_i32& v)
	{
		return glm::imat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::i64mat4x2 to_glm(const Matrix4x2_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i64mat4x2 to_glm(const Matrix4x2_i64& v)
	{
		return glm::i64mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::i8mat4x2 to_glm(const Matrix4x2_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8mat4x2 to_glm(const Matrix4x2_i8& v)
	{
		return glm::i8mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::u16mat4x2 to_glm(const Matrix4x2_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u16mat4x2 to_glm(const Matrix4x2_u16& v)
	{
		return glm::u16mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::umat4x2 to_glm(const Matrix4x2_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::umat4x2 to_glm(const Matrix4x2_u32& v)
	{
		return glm::umat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::u64mat4x2 to_glm(const Matrix4x2_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u64mat4x2 to_glm(const Matrix4x2_u64& v)
	{
		return glm::u64mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::u8mat4x2 to_glm(const Matrix4x2_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u8mat4x2 to_glm(const Matrix4x2_u8& v)
	{
		return glm::u8mat4x2{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::mat4x3 to_glm(const Matrix4x3_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::mat4x3 to_glm(const Matrix4x3_f32& v)
	{
		return glm::mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::dmat4x3 to_glm(const Matrix4x3_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dmat4x3 to_glm(const Matrix4x3_f64& v)
	{
		return glm::dmat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::i16mat4x3 to_glm(const Matrix4x3_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i16mat4x3 to_glm(const Matrix4x3_i16& v)
	{
		return glm::i16mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::imat4x3 to_glm(const Matrix4x3_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::imat4x3 to_glm(const Matrix4x3_i32& v)
	{
		return glm::imat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::i64mat4x3 to_glm(const Matrix4x3_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i64mat4x3 to_glm(const Matrix4x3_i64& v)
	{
		return glm::i64mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::i8mat4x3 to_glm(const Matrix4x3_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8mat4x3 to_glm(const Matrix4x3_i8& v)
	{
		return glm::i8mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::u16mat4x3 to_glm(const Matrix4x3_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u16mat4x3 to_glm(const Matrix4x3_u16& v)
	{
		return glm::u16mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::umat4x3 to_glm(const Matrix4x3_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::umat4x3 to_glm(const Matrix4x3_u32& v)
	{
		return glm::umat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::u64mat4x3 to_glm(const Matrix4x3_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u64mat4x3 to_glm(const Matrix4x3_u64& v)
	{
		return glm::u64mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::u8mat4x3 to_glm(const Matrix4x3_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u8mat4x3 to_glm(const Matrix4x3_u8& v)
	{
		return glm::u8mat4x3{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::mat4x4 to_glm(const Matrix4x4_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::mat4x4 to_glm(const Matrix4x4_f32& v)
	{
		return glm::mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::dmat4x4 to_glm(const Matrix4x4_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dmat4x4 to_glm(const Matrix4x4_f64& v)
	{
		return glm::dmat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::i16mat4x4 to_glm(const Matrix4x4_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i16mat4x4 to_glm(const Matrix4x4_i16& v)
	{
		return glm::i16mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::imat4x4 to_glm(const Matrix4x4_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::imat4x4 to_glm(const Matrix4x4_i32& v)
	{
		return glm::imat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::i64mat4x4 to_glm(const Matrix4x4_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i64mat4x4 to_glm(const Matrix4x4_i64& v)
	{
		return glm::i64mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::i8mat4x4 to_glm(const Matrix4x4_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8mat4x4 to_glm(const Matrix4x4_i8& v)
	{
		return glm::i8mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::u16mat4x4 to_glm(const Matrix4x4_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u16mat4x4 to_glm(const Matrix4x4_u16& v)
	{
		return glm::u16mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::umat4x4 to_glm(const Matrix4x4_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::umat4x4 to_glm(const Matrix4x4_u32& v)
	{
		return glm::umat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::u64mat4x4 to_glm(const Matrix4x4_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u64mat4x4 to_glm(const Matrix4x4_u64& v)
	{
		return glm::u64mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::u8mat4x4 to_glm(const Matrix4x4_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u8mat4x4 to_glm(const Matrix4x4_u8& v)
	{
		return glm::u8mat4x4{to_glm(v._0()), to_glm(v._1()), to_glm(v._2()), to_glm(v._3())};
	}

	glm::quat to_glm(const Quaternion_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::quat to_glm(const Quaternion_f32& v)
	{
		return glm::quat{v.x(), v.y(), v.z(), v.w()};
	}

	glm::dquat to_glm(const Quaternion_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dquat to_glm(const Quaternion_f64& v)
	{
		return glm::dquat{v.x(), v.y(), v.z(), v.w()};
	}

	glm::i16quat to_glm(const Quaternion_i16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i16quat to_glm(const Quaternion_i16& v)
	{
		return glm::i16quat{v.x(), v.y(), v.z(), v.w()};
	}

	glm::iquat to_glm(const Quaternion_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::iquat to_glm(const Quaternion_i32& v)
	{
		return glm::iquat{v.x(), v.y(), v.z(), v.w()};
	}

	glm::i64quat to_glm(const Quaternion_i64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i64quat to_glm(const Quaternion_i64& v)
	{
		return glm::i64quat{v.x(), v.y(), v.z(), v.w()};
	}

	glm::i8quat to_glm(const Quaternion_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8quat to_glm(const Quaternion_i8& v)
	{
		return glm::i8quat{v.x(), v.y(), v.z(), v.w()};
	}

	glm::u16quat to_glm(const Quaternion_u16* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u16quat to_glm(const Quaternion_u16& v)
	{
		return glm::u16quat{v.x(), v.y(), v.z(), v.w()};
	}

	glm::uquat to_glm(const Quaternion_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::uquat to_glm(const Quaternion_u32& v)
	{
		return glm::uquat{v.x(), v.y(), v.z(), v.w()};
	}

	glm::u64quat to_glm(const Quaternion_u64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u64quat to_glm(const Quaternion_u64& v)
	{
		return glm::u64quat{v.x(), v.y(), v.z(), v.w()};
	}

	glm::u8quat to_glm(const Quaternion_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u8quat to_glm(const Quaternion_u8& v)
	{
		return glm::u8quat{v.x(), v.y(), v.z(), v.w()};
	}

	glm::vec2 to_glm(const Vector2_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::vec2 to_glm(const Vector2_f32& v)
	{
		return glm::vec2{v.x(), v.y()};
	}

	glm::dvec2 to_glm(const Vector2_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dvec2 to_glm(const Vector2_f64& v)
	{
		return glm::dvec2{v.x(), v.y()};
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

	glm::ivec2 to_glm(const Vector2_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::ivec2 to_glm(const Vector2_i32& v)
	{
		return glm::ivec2{v.x(), v.y()};
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

	glm::uvec2 to_glm(const Vector2_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::uvec2 to_glm(const Vector2_u32& v)
	{
		return glm::uvec2{v.x(), v.y()};
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

	glm::vec3 to_glm(const Vector3_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::vec3 to_glm(const Vector3_f32& v)
	{
		return glm::vec3{v.x(), v.y(), v.z()};
	}

	glm::dvec3 to_glm(const Vector3_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dvec3 to_glm(const Vector3_f64& v)
	{
		return glm::dvec3{v.x(), v.y(), v.z()};
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

	glm::ivec3 to_glm(const Vector3_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::ivec3 to_glm(const Vector3_i32& v)
	{
		return glm::ivec3{v.x(), v.y(), v.z()};
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

	glm::i8vec3 to_glm(const Vector3_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8vec3 to_glm(const Vector3_i8& v)
	{
		return glm::i8vec3{v.x(), v.y(), v.z()};
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

	glm::uvec3 to_glm(const Vector3_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::uvec3 to_glm(const Vector3_u32& v)
	{
		return glm::uvec3{v.x(), v.y(), v.z()};
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

	glm::u8vec3 to_glm(const Vector3_u8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::u8vec3 to_glm(const Vector3_u8& v)
	{
		return glm::u8vec3{v.x(), v.y(), v.z()};
	}

	glm::vec4 to_glm(const Vector4_f32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::vec4 to_glm(const Vector4_f32& v)
	{
		return glm::vec4{v.x(), v.y(), v.z(), v.w()};
	}

	glm::dvec4 to_glm(const Vector4_f64* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::dvec4 to_glm(const Vector4_f64& v)
	{
		return glm::dvec4{v.x(), v.y(), v.z(), v.w()};
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

	glm::ivec4 to_glm(const Vector4_i32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::ivec4 to_glm(const Vector4_i32& v)
	{
		return glm::ivec4{v.x(), v.y(), v.z(), v.w()};
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

	glm::i8vec4 to_glm(const Vector4_i8* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::i8vec4 to_glm(const Vector4_i8& v)
	{
		return glm::i8vec4{v.x(), v.y(), v.z(), v.w()};
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

	glm::uvec4 to_glm(const Vector4_u32* pv)
	{
		KHUTILS_ASSERT_PTR(pv);
		return to_glm(*pv);
	}

	glm::uvec4 to_glm(const Vector4_u32& v)
	{
		return glm::uvec4{v.x(), v.y(), v.z(), v.w()};
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
