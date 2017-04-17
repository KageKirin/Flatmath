#include "glm_pack.hpp"
#include "glm_conversion.hpp"

#include "../mutable/flatmath_generated.h"
#include "../typedefs.hpp"

#define KHUTILS_ASSERTION_INLINE
#include <khutils/assertion.hpp>

#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>

namespace flatbuffers
{
	using namespace flatmath;

	glm::vec2 UnPack(const Vector2_f32& v)
	{
		return to_glm(v);
	}

	glm::vec3 UnPack(const Vector3_f32& v)
	{
		return to_glm(v);
	}

	glm::vec4 UnPack(const Vector4_f32& v)
	{
		return to_glm(v);
	}

	glm::quat UnPack(const Quaternion_f32& v)
	{
		return to_glm(v);
	}

	glm::mat2x2 UnPack(const Matrix2x2_f32& v)
	{
		return to_glm(v);
	}

	glm::mat2x3 UnPack(const Matrix2x3_f32& v)
	{
		return to_glm(v);
	}

	glm::mat2x4 UnPack(const Matrix2x4_f32& v)
	{
		return to_glm(v);
	}

	glm::mat3x2 UnPack(const Matrix3x2_f32& v)
	{
		return to_glm(v);
	}

	glm::mat3x3 UnPack(const Matrix3x3_f32& v)
	{
		return to_glm(v);
	}

	glm::mat3x4 UnPack(const Matrix3x4_f32& v)
	{
		return to_glm(v);
	}

	glm::mat4x2 UnPack(const Matrix4x2_f32& v)
	{
		return to_glm(v);
	}

	glm::mat4x3 UnPack(const Matrix4x3_f32& v)
	{
		return to_glm(v);
	}

	glm::mat4x4 UnPack(const Matrix4x4_f32& v)
	{
		return to_glm(v);
	}

	glm::ivec2 UnPack(const Vector2_i32& v)
	{
		return to_glm(v);
	}

	glm::ivec3 UnPack(const Vector3_i32& v)
	{
		return to_glm(v);
	}

	glm::ivec4 UnPack(const Vector4_i32& v)
	{
		return to_glm(v);
	}

	glm::iquat UnPack(const Quaternion_i32& v)
	{
		return to_glm(v);
	}

	glm::imat2x2 UnPack(const Matrix2x2_i32& v)
	{
		return to_glm(v);
	}

	glm::imat2x3 UnPack(const Matrix2x3_i32& v)
	{
		return to_glm(v);
	}

	glm::imat2x4 UnPack(const Matrix2x4_i32& v)
	{
		return to_glm(v);
	}

	glm::imat3x2 UnPack(const Matrix3x2_i32& v)
	{
		return to_glm(v);
	}

	glm::imat3x3 UnPack(const Matrix3x3_i32& v)
	{
		return to_glm(v);
	}

	glm::imat3x4 UnPack(const Matrix3x4_i32& v)
	{
		return to_glm(v);
	}

	glm::imat4x2 UnPack(const Matrix4x2_i32& v)
	{
		return to_glm(v);
	}

	glm::imat4x3 UnPack(const Matrix4x3_i32& v)
	{
		return to_glm(v);
	}

	glm::imat4x4 UnPack(const Matrix4x4_i32& v)
	{
		return to_glm(v);
	}

	glm::uvec2 UnPack(const Vector2_u32& v)
	{
		return to_glm(v);
	}

	glm::uvec3 UnPack(const Vector3_u32& v)
	{
		return to_glm(v);
	}

	glm::uvec4 UnPack(const Vector4_u32& v)
	{
		return to_glm(v);
	}

	glm::uquat UnPack(const Quaternion_u32& v)
	{
		return to_glm(v);
	}

	glm::umat2x2 UnPack(const Matrix2x2_u32& v)
	{
		return to_glm(v);
	}

	glm::umat2x3 UnPack(const Matrix2x3_u32& v)
	{
		return to_glm(v);
	}

	glm::umat2x4 UnPack(const Matrix2x4_u32& v)
	{
		return to_glm(v);
	}

	glm::umat3x2 UnPack(const Matrix3x2_u32& v)
	{
		return to_glm(v);
	}

	glm::umat3x3 UnPack(const Matrix3x3_u32& v)
	{
		return to_glm(v);
	}

	glm::umat3x4 UnPack(const Matrix3x4_u32& v)
	{
		return to_glm(v);
	}

	glm::umat4x2 UnPack(const Matrix4x2_u32& v)
	{
		return to_glm(v);
	}

	glm::umat4x3 UnPack(const Matrix4x3_u32& v)
	{
		return to_glm(v);
	}

	glm::umat4x4 UnPack(const Matrix4x4_u32& v)
	{
		return to_glm(v);
	}

	glm::i16vec2 UnPack(const Vector2_i16& v)
	{
		return to_glm(v);
	}

	glm::i16vec3 UnPack(const Vector3_i16& v)
	{
		return to_glm(v);
	}

	glm::i16vec4 UnPack(const Vector4_i16& v)
	{
		return to_glm(v);
	}

	glm::i16quat UnPack(const Quaternion_i16& v)
	{
		return to_glm(v);
	}

	glm::i16mat2x2 UnPack(const Matrix2x2_i16& v)
	{
		return to_glm(v);
	}

	glm::i16mat2x3 UnPack(const Matrix2x3_i16& v)
	{
		return to_glm(v);
	}

	glm::i16mat2x4 UnPack(const Matrix2x4_i16& v)
	{
		return to_glm(v);
	}

	glm::i16mat3x2 UnPack(const Matrix3x2_i16& v)
	{
		return to_glm(v);
	}

	glm::i16mat3x3 UnPack(const Matrix3x3_i16& v)
	{
		return to_glm(v);
	}

	glm::i16mat3x4 UnPack(const Matrix3x4_i16& v)
	{
		return to_glm(v);
	}

	glm::i16mat4x2 UnPack(const Matrix4x2_i16& v)
	{
		return to_glm(v);
	}

	glm::i16mat4x3 UnPack(const Matrix4x3_i16& v)
	{
		return to_glm(v);
	}

	glm::i16mat4x4 UnPack(const Matrix4x4_i16& v)
	{
		return to_glm(v);
	}

	glm::u16vec2 UnPack(const Vector2_u16& v)
	{
		return to_glm(v);
	}

	glm::u16vec3 UnPack(const Vector3_u16& v)
	{
		return to_glm(v);
	}

	glm::u16vec4 UnPack(const Vector4_u16& v)
	{
		return to_glm(v);
	}

	glm::u16quat UnPack(const Quaternion_u16& v)
	{
		return to_glm(v);
	}

	glm::u16mat2x2 UnPack(const Matrix2x2_u16& v)
	{
		return to_glm(v);
	}

	glm::u16mat2x3 UnPack(const Matrix2x3_u16& v)
	{
		return to_glm(v);
	}

	glm::u16mat2x4 UnPack(const Matrix2x4_u16& v)
	{
		return to_glm(v);
	}

	glm::u16mat3x2 UnPack(const Matrix3x2_u16& v)
	{
		return to_glm(v);
	}

	glm::u16mat3x3 UnPack(const Matrix3x3_u16& v)
	{
		return to_glm(v);
	}

	glm::u16mat3x4 UnPack(const Matrix3x4_u16& v)
	{
		return to_glm(v);
	}

	glm::u16mat4x2 UnPack(const Matrix4x2_u16& v)
	{
		return to_glm(v);
	}

	glm::u16mat4x3 UnPack(const Matrix4x3_u16& v)
	{
		return to_glm(v);
	}

	glm::u16mat4x4 UnPack(const Matrix4x4_u16& v)
	{
		return to_glm(v);
	}

	glm::i8vec2 UnPack(const Vector2_i8& v)
	{
		return to_glm(v);
	}

	glm::i8vec3 UnPack(const Vector3_i8& v)
	{
		return to_glm(v);
	}

	glm::i8vec4 UnPack(const Vector4_i8& v)
	{
		return to_glm(v);
	}

	glm::i8quat UnPack(const Quaternion_i8& v)
	{
		return to_glm(v);
	}

	glm::i8mat2x2 UnPack(const Matrix2x2_i8& v)
	{
		return to_glm(v);
	}

	glm::i8mat2x3 UnPack(const Matrix2x3_i8& v)
	{
		return to_glm(v);
	}

	glm::i8mat2x4 UnPack(const Matrix2x4_i8& v)
	{
		return to_glm(v);
	}

	glm::i8mat3x2 UnPack(const Matrix3x2_i8& v)
	{
		return to_glm(v);
	}

	glm::i8mat3x3 UnPack(const Matrix3x3_i8& v)
	{
		return to_glm(v);
	}

	glm::i8mat3x4 UnPack(const Matrix3x4_i8& v)
	{
		return to_glm(v);
	}

	glm::i8mat4x2 UnPack(const Matrix4x2_i8& v)
	{
		return to_glm(v);
	}

	glm::i8mat4x3 UnPack(const Matrix4x3_i8& v)
	{
		return to_glm(v);
	}

	glm::i8mat4x4 UnPack(const Matrix4x4_i8& v)
	{
		return to_glm(v);
	}

	glm::u8vec2 UnPack(const Vector2_u8& v)
	{
		return to_glm(v);
	}

	glm::u8vec3 UnPack(const Vector3_u8& v)
	{
		return to_glm(v);
	}

	glm::u8vec4 UnPack(const Vector4_u8& v)
	{
		return to_glm(v);
	}

	glm::u8quat UnPack(const Quaternion_u8& v)
	{
		return to_glm(v);
	}

	glm::u8mat2x2 UnPack(const Matrix2x2_u8& v)
	{
		return to_glm(v);
	}

	glm::u8mat2x3 UnPack(const Matrix2x3_u8& v)
	{
		return to_glm(v);
	}

	glm::u8mat2x4 UnPack(const Matrix2x4_u8& v)
	{
		return to_glm(v);
	}

	glm::u8mat3x2 UnPack(const Matrix3x2_u8& v)
	{
		return to_glm(v);
	}

	glm::u8mat3x3 UnPack(const Matrix3x3_u8& v)
	{
		return to_glm(v);
	}

	glm::u8mat3x4 UnPack(const Matrix3x4_u8& v)
	{
		return to_glm(v);
	}

	glm::u8mat4x2 UnPack(const Matrix4x2_u8& v)
	{
		return to_glm(v);
	}

	glm::u8mat4x3 UnPack(const Matrix4x3_u8& v)
	{
		return to_glm(v);
	}

	glm::u8mat4x4 UnPack(const Matrix4x4_u8& v)
	{
		return to_glm(v);
	}

	glm::i64vec2 UnPack(const Vector2_i64& v)
	{
		return to_glm(v);
	}

	glm::i64vec3 UnPack(const Vector3_i64& v)
	{
		return to_glm(v);
	}

	glm::i64vec4 UnPack(const Vector4_i64& v)
	{
		return to_glm(v);
	}

	glm::i64quat UnPack(const Quaternion_i64& v)
	{
		return to_glm(v);
	}

	glm::i64mat2x2 UnPack(const Matrix2x2_i64& v)
	{
		return to_glm(v);
	}

	glm::i64mat2x3 UnPack(const Matrix2x3_i64& v)
	{
		return to_glm(v);
	}

	glm::i64mat2x4 UnPack(const Matrix2x4_i64& v)
	{
		return to_glm(v);
	}

	glm::i64mat3x2 UnPack(const Matrix3x2_i64& v)
	{
		return to_glm(v);
	}

	glm::i64mat3x3 UnPack(const Matrix3x3_i64& v)
	{
		return to_glm(v);
	}

	glm::i64mat3x4 UnPack(const Matrix3x4_i64& v)
	{
		return to_glm(v);
	}

	glm::i64mat4x2 UnPack(const Matrix4x2_i64& v)
	{
		return to_glm(v);
	}

	glm::i64mat4x3 UnPack(const Matrix4x3_i64& v)
	{
		return to_glm(v);
	}

	glm::i64mat4x4 UnPack(const Matrix4x4_i64& v)
	{
		return to_glm(v);
	}

	glm::u64vec2 UnPack(const Vector2_u64& v)
	{
		return to_glm(v);
	}

	glm::u64vec3 UnPack(const Vector3_u64& v)
	{
		return to_glm(v);
	}

	glm::u64vec4 UnPack(const Vector4_u64& v)
	{
		return to_glm(v);
	}

	glm::u64quat UnPack(const Quaternion_u64& v)
	{
		return to_glm(v);
	}

	glm::u64mat2x2 UnPack(const Matrix2x2_u64& v)
	{
		return to_glm(v);
	}

	glm::u64mat2x3 UnPack(const Matrix2x3_u64& v)
	{
		return to_glm(v);
	}

	glm::u64mat2x4 UnPack(const Matrix2x4_u64& v)
	{
		return to_glm(v);
	}

	glm::u64mat3x2 UnPack(const Matrix3x2_u64& v)
	{
		return to_glm(v);
	}

	glm::u64mat3x3 UnPack(const Matrix3x3_u64& v)
	{
		return to_glm(v);
	}

	glm::u64mat3x4 UnPack(const Matrix3x4_u64& v)
	{
		return to_glm(v);
	}

	glm::u64mat4x2 UnPack(const Matrix4x2_u64& v)
	{
		return to_glm(v);
	}

	glm::u64mat4x3 UnPack(const Matrix4x3_u64& v)
	{
		return to_glm(v);
	}

	glm::u64mat4x4 UnPack(const Matrix4x4_u64& v)
	{
		return to_glm(v);
	}

	glm::dvec2 UnPack(const Vector2_f64& v)
	{
		return to_glm(v);
	}

	glm::dvec3 UnPack(const Vector3_f64& v)
	{
		return to_glm(v);
	}

	glm::dvec4 UnPack(const Vector4_f64& v)
	{
		return to_glm(v);
	}

	glm::dquat UnPack(const Quaternion_f64& v)
	{
		return to_glm(v);
	}

	glm::dmat2x2 UnPack(const Matrix2x2_f64& v)
	{
		return to_glm(v);
	}

	glm::dmat2x3 UnPack(const Matrix2x3_f64& v)
	{
		return to_glm(v);
	}

	glm::dmat2x4 UnPack(const Matrix2x4_f64& v)
	{
		return to_glm(v);
	}

	glm::dmat3x2 UnPack(const Matrix3x2_f64& v)
	{
		return to_glm(v);
	}

	glm::dmat3x3 UnPack(const Matrix3x3_f64& v)
	{
		return to_glm(v);
	}

	glm::dmat3x4 UnPack(const Matrix3x4_f64& v)
	{
		return to_glm(v);
	}

	glm::dmat4x2 UnPack(const Matrix4x2_f64& v)
	{
		return to_glm(v);
	}

	glm::dmat4x3 UnPack(const Matrix4x3_f64& v)
	{
		return to_glm(v);
	}

	glm::dmat4x4 UnPack(const Matrix4x4_f64& v)
	{
		return to_glm(v);
	}


	glm::vec2 UnPack(const Vector2_f32* v)
	{
		return to_glm(v);
	}

	glm::vec3 UnPack(const Vector3_f32* v)
	{
		return to_glm(v);
	}

	glm::vec4 UnPack(const Vector4_f32* v)
	{
		return to_glm(v);
	}

	glm::quat UnPack(const Quaternion_f32* v)
	{
		return to_glm(v);
	}

	glm::mat2x2 UnPack(const Matrix2x2_f32* v)
	{
		return to_glm(v);
	}

	glm::mat2x3 UnPack(const Matrix2x3_f32* v)
	{
		return to_glm(v);
	}

	glm::mat2x4 UnPack(const Matrix2x4_f32* v)
	{
		return to_glm(v);
	}

	glm::mat3x2 UnPack(const Matrix3x2_f32* v)
	{
		return to_glm(v);
	}

	glm::mat3x3 UnPack(const Matrix3x3_f32* v)
	{
		return to_glm(v);
	}

	glm::mat3x4 UnPack(const Matrix3x4_f32* v)
	{
		return to_glm(v);
	}

	glm::mat4x2 UnPack(const Matrix4x2_f32* v)
	{
		return to_glm(v);
	}

	glm::mat4x3 UnPack(const Matrix4x3_f32* v)
	{
		return to_glm(v);
	}

	glm::mat4x4 UnPack(const Matrix4x4_f32* v)
	{
		return to_glm(v);
	}

	glm::ivec2 UnPack(const Vector2_i32* v)
	{
		return to_glm(v);
	}

	glm::ivec3 UnPack(const Vector3_i32* v)
	{
		return to_glm(v);
	}

	glm::ivec4 UnPack(const Vector4_i32* v)
	{
		return to_glm(v);
	}

	glm::iquat UnPack(const Quaternion_i32* v)
	{
		return to_glm(v);
	}

	glm::imat2x2 UnPack(const Matrix2x2_i32* v)
	{
		return to_glm(v);
	}

	glm::imat2x3 UnPack(const Matrix2x3_i32* v)
	{
		return to_glm(v);
	}

	glm::imat2x4 UnPack(const Matrix2x4_i32* v)
	{
		return to_glm(v);
	}

	glm::imat3x2 UnPack(const Matrix3x2_i32* v)
	{
		return to_glm(v);
	}

	glm::imat3x3 UnPack(const Matrix3x3_i32* v)
	{
		return to_glm(v);
	}

	glm::imat3x4 UnPack(const Matrix3x4_i32* v)
	{
		return to_glm(v);
	}

	glm::imat4x2 UnPack(const Matrix4x2_i32* v)
	{
		return to_glm(v);
	}

	glm::imat4x3 UnPack(const Matrix4x3_i32* v)
	{
		return to_glm(v);
	}

	glm::imat4x4 UnPack(const Matrix4x4_i32* v)
	{
		return to_glm(v);
	}

	glm::uvec2 UnPack(const Vector2_u32* v)
	{
		return to_glm(v);
	}

	glm::uvec3 UnPack(const Vector3_u32* v)
	{
		return to_glm(v);
	}

	glm::uvec4 UnPack(const Vector4_u32* v)
	{
		return to_glm(v);
	}

	glm::uquat UnPack(const Quaternion_u32* v)
	{
		return to_glm(v);
	}

	glm::umat2x2 UnPack(const Matrix2x2_u32* v)
	{
		return to_glm(v);
	}

	glm::umat2x3 UnPack(const Matrix2x3_u32* v)
	{
		return to_glm(v);
	}

	glm::umat2x4 UnPack(const Matrix2x4_u32* v)
	{
		return to_glm(v);
	}

	glm::umat3x2 UnPack(const Matrix3x2_u32* v)
	{
		return to_glm(v);
	}

	glm::umat3x3 UnPack(const Matrix3x3_u32* v)
	{
		return to_glm(v);
	}

	glm::umat3x4 UnPack(const Matrix3x4_u32* v)
	{
		return to_glm(v);
	}

	glm::umat4x2 UnPack(const Matrix4x2_u32* v)
	{
		return to_glm(v);
	}

	glm::umat4x3 UnPack(const Matrix4x3_u32* v)
	{
		return to_glm(v);
	}

	glm::umat4x4 UnPack(const Matrix4x4_u32* v)
	{
		return to_glm(v);
	}

	glm::i16vec2 UnPack(const Vector2_i16* v)
	{
		return to_glm(v);
	}

	glm::i16vec3 UnPack(const Vector3_i16* v)
	{
		return to_glm(v);
	}

	glm::i16vec4 UnPack(const Vector4_i16* v)
	{
		return to_glm(v);
	}

	glm::i16quat UnPack(const Quaternion_i16* v)
	{
		return to_glm(v);
	}

	glm::i16mat2x2 UnPack(const Matrix2x2_i16* v)
	{
		return to_glm(v);
	}

	glm::i16mat2x3 UnPack(const Matrix2x3_i16* v)
	{
		return to_glm(v);
	}

	glm::i16mat2x4 UnPack(const Matrix2x4_i16* v)
	{
		return to_glm(v);
	}

	glm::i16mat3x2 UnPack(const Matrix3x2_i16* v)
	{
		return to_glm(v);
	}

	glm::i16mat3x3 UnPack(const Matrix3x3_i16* v)
	{
		return to_glm(v);
	}

	glm::i16mat3x4 UnPack(const Matrix3x4_i16* v)
	{
		return to_glm(v);
	}

	glm::i16mat4x2 UnPack(const Matrix4x2_i16* v)
	{
		return to_glm(v);
	}

	glm::i16mat4x3 UnPack(const Matrix4x3_i16* v)
	{
		return to_glm(v);
	}

	glm::i16mat4x4 UnPack(const Matrix4x4_i16* v)
	{
		return to_glm(v);
	}

	glm::u16vec2 UnPack(const Vector2_u16* v)
	{
		return to_glm(v);
	}

	glm::u16vec3 UnPack(const Vector3_u16* v)
	{
		return to_glm(v);
	}

	glm::u16vec4 UnPack(const Vector4_u16* v)
	{
		return to_glm(v);
	}

	glm::u16quat UnPack(const Quaternion_u16* v)
	{
		return to_glm(v);
	}

	glm::u16mat2x2 UnPack(const Matrix2x2_u16* v)
	{
		return to_glm(v);
	}

	glm::u16mat2x3 UnPack(const Matrix2x3_u16* v)
	{
		return to_glm(v);
	}

	glm::u16mat2x4 UnPack(const Matrix2x4_u16* v)
	{
		return to_glm(v);
	}

	glm::u16mat3x2 UnPack(const Matrix3x2_u16* v)
	{
		return to_glm(v);
	}

	glm::u16mat3x3 UnPack(const Matrix3x3_u16* v)
	{
		return to_glm(v);
	}

	glm::u16mat3x4 UnPack(const Matrix3x4_u16* v)
	{
		return to_glm(v);
	}

	glm::u16mat4x2 UnPack(const Matrix4x2_u16* v)
	{
		return to_glm(v);
	}

	glm::u16mat4x3 UnPack(const Matrix4x3_u16* v)
	{
		return to_glm(v);
	}

	glm::u16mat4x4 UnPack(const Matrix4x4_u16* v)
	{
		return to_glm(v);
	}

	glm::i8vec2 UnPack(const Vector2_i8* v)
	{
		return to_glm(v);
	}

	glm::i8vec3 UnPack(const Vector3_i8* v)
	{
		return to_glm(v);
	}

	glm::i8vec4 UnPack(const Vector4_i8* v)
	{
		return to_glm(v);
	}

	glm::i8quat UnPack(const Quaternion_i8* v)
	{
		return to_glm(v);
	}

	glm::i8mat2x2 UnPack(const Matrix2x2_i8* v)
	{
		return to_glm(v);
	}

	glm::i8mat2x3 UnPack(const Matrix2x3_i8* v)
	{
		return to_glm(v);
	}

	glm::i8mat2x4 UnPack(const Matrix2x4_i8* v)
	{
		return to_glm(v);
	}

	glm::i8mat3x2 UnPack(const Matrix3x2_i8* v)
	{
		return to_glm(v);
	}

	glm::i8mat3x3 UnPack(const Matrix3x3_i8* v)
	{
		return to_glm(v);
	}

	glm::i8mat3x4 UnPack(const Matrix3x4_i8* v)
	{
		return to_glm(v);
	}

	glm::i8mat4x2 UnPack(const Matrix4x2_i8* v)
	{
		return to_glm(v);
	}

	glm::i8mat4x3 UnPack(const Matrix4x3_i8* v)
	{
		return to_glm(v);
	}

	glm::i8mat4x4 UnPack(const Matrix4x4_i8* v)
	{
		return to_glm(v);
	}

	glm::u8vec2 UnPack(const Vector2_u8* v)
	{
		return to_glm(v);
	}

	glm::u8vec3 UnPack(const Vector3_u8* v)
	{
		return to_glm(v);
	}

	glm::u8vec4 UnPack(const Vector4_u8* v)
	{
		return to_glm(v);
	}

	glm::u8quat UnPack(const Quaternion_u8* v)
	{
		return to_glm(v);
	}

	glm::u8mat2x2 UnPack(const Matrix2x2_u8* v)
	{
		return to_glm(v);
	}

	glm::u8mat2x3 UnPack(const Matrix2x3_u8* v)
	{
		return to_glm(v);
	}

	glm::u8mat2x4 UnPack(const Matrix2x4_u8* v)
	{
		return to_glm(v);
	}

	glm::u8mat3x2 UnPack(const Matrix3x2_u8* v)
	{
		return to_glm(v);
	}

	glm::u8mat3x3 UnPack(const Matrix3x3_u8* v)
	{
		return to_glm(v);
	}

	glm::u8mat3x4 UnPack(const Matrix3x4_u8* v)
	{
		return to_glm(v);
	}

	glm::u8mat4x2 UnPack(const Matrix4x2_u8* v)
	{
		return to_glm(v);
	}

	glm::u8mat4x3 UnPack(const Matrix4x3_u8* v)
	{
		return to_glm(v);
	}

	glm::u8mat4x4 UnPack(const Matrix4x4_u8* v)
	{
		return to_glm(v);
	}

	glm::i64vec2 UnPack(const Vector2_i64* v)
	{
		return to_glm(v);
	}

	glm::i64vec3 UnPack(const Vector3_i64* v)
	{
		return to_glm(v);
	}

	glm::i64vec4 UnPack(const Vector4_i64* v)
	{
		return to_glm(v);
	}

	glm::i64quat UnPack(const Quaternion_i64* v)
	{
		return to_glm(v);
	}

	glm::i64mat2x2 UnPack(const Matrix2x2_i64* v)
	{
		return to_glm(v);
	}

	glm::i64mat2x3 UnPack(const Matrix2x3_i64* v)
	{
		return to_glm(v);
	}

	glm::i64mat2x4 UnPack(const Matrix2x4_i64* v)
	{
		return to_glm(v);
	}

	glm::i64mat3x2 UnPack(const Matrix3x2_i64* v)
	{
		return to_glm(v);
	}

	glm::i64mat3x3 UnPack(const Matrix3x3_i64* v)
	{
		return to_glm(v);
	}

	glm::i64mat3x4 UnPack(const Matrix3x4_i64* v)
	{
		return to_glm(v);
	}

	glm::i64mat4x2 UnPack(const Matrix4x2_i64* v)
	{
		return to_glm(v);
	}

	glm::i64mat4x3 UnPack(const Matrix4x3_i64* v)
	{
		return to_glm(v);
	}

	glm::i64mat4x4 UnPack(const Matrix4x4_i64* v)
	{
		return to_glm(v);
	}

	glm::u64vec2 UnPack(const Vector2_u64* v)
	{
		return to_glm(v);
	}

	glm::u64vec3 UnPack(const Vector3_u64* v)
	{
		return to_glm(v);
	}

	glm::u64vec4 UnPack(const Vector4_u64* v)
	{
		return to_glm(v);
	}

	glm::u64quat UnPack(const Quaternion_u64* v)
	{
		return to_glm(v);
	}

	glm::u64mat2x2 UnPack(const Matrix2x2_u64* v)
	{
		return to_glm(v);
	}

	glm::u64mat2x3 UnPack(const Matrix2x3_u64* v)
	{
		return to_glm(v);
	}

	glm::u64mat2x4 UnPack(const Matrix2x4_u64* v)
	{
		return to_glm(v);
	}

	glm::u64mat3x2 UnPack(const Matrix3x2_u64* v)
	{
		return to_glm(v);
	}

	glm::u64mat3x3 UnPack(const Matrix3x3_u64* v)
	{
		return to_glm(v);
	}

	glm::u64mat3x4 UnPack(const Matrix3x4_u64* v)
	{
		return to_glm(v);
	}

	glm::u64mat4x2 UnPack(const Matrix4x2_u64* v)
	{
		return to_glm(v);
	}

	glm::u64mat4x3 UnPack(const Matrix4x3_u64* v)
	{
		return to_glm(v);
	}

	glm::u64mat4x4 UnPack(const Matrix4x4_u64* v)
	{
		return to_glm(v);
	}

	glm::dvec2 UnPack(const Vector2_f64* v)
	{
		return to_glm(v);
	}

	glm::dvec3 UnPack(const Vector3_f64* v)
	{
		return to_glm(v);
	}

	glm::dvec4 UnPack(const Vector4_f64* v)
	{
		return to_glm(v);
	}

	glm::dquat UnPack(const Quaternion_f64* v)
	{
		return to_glm(v);
	}

	glm::dmat2x2 UnPack(const Matrix2x2_f64* v)
	{
		return to_glm(v);
	}

	glm::dmat2x3 UnPack(const Matrix2x3_f64* v)
	{
		return to_glm(v);
	}

	glm::dmat2x4 UnPack(const Matrix2x4_f64* v)
	{
		return to_glm(v);
	}

	glm::dmat3x2 UnPack(const Matrix3x2_f64* v)
	{
		return to_glm(v);
	}

	glm::dmat3x3 UnPack(const Matrix3x3_f64* v)
	{
		return to_glm(v);
	}

	glm::dmat3x4 UnPack(const Matrix3x4_f64* v)
	{
		return to_glm(v);
	}

	glm::dmat4x2 UnPack(const Matrix4x2_f64* v)
	{
		return to_glm(v);
	}

	glm::dmat4x3 UnPack(const Matrix4x3_f64* v)
	{
		return to_glm(v);
	}

	glm::dmat4x4 UnPack(const Matrix4x4_f64* v)
	{
		return to_glm(v);
	}


	Vector2_f32 Pack(const glm::vec2& v)
	{
		return from_glm(v);
	}

	Vector3_f32 Pack(const glm::vec3& v)
	{
		return from_glm(v);
	}

	Vector4_f32 Pack(const glm::vec4& v)
	{
		return from_glm(v);
	}

	Quaternion_f32 Pack(const glm::quat& v)
	{
		return from_glm(v);
	}

	Matrix2x2_f32 Pack(const glm::mat2x2& v)
	{
		return from_glm(v);
	}

	Matrix2x3_f32 Pack(const glm::mat2x3& v)
	{
		return from_glm(v);
	}

	Matrix2x4_f32 Pack(const glm::mat2x4& v)
	{
		return from_glm(v);
	}

	Matrix3x2_f32 Pack(const glm::mat3x2& v)
	{
		return from_glm(v);
	}

	Matrix3x3_f32 Pack(const glm::mat3x3& v)
	{
		return from_glm(v);
	}

	Matrix3x4_f32 Pack(const glm::mat3x4& v)
	{
		return from_glm(v);
	}

	Matrix4x2_f32 Pack(const glm::mat4x2& v)
	{
		return from_glm(v);
	}

	Matrix4x3_f32 Pack(const glm::mat4x3& v)
	{
		return from_glm(v);
	}

	Matrix4x4_f32 Pack(const glm::mat4x4& v)
	{
		return from_glm(v);
	}

	Vector2_i32 Pack(const glm::ivec2& v)
	{
		return from_glm(v);
	}

	Vector3_i32 Pack(const glm::ivec3& v)
	{
		return from_glm(v);
	}

	Vector4_i32 Pack(const glm::ivec4& v)
	{
		return from_glm(v);
	}

	Quaternion_i32 Pack(const glm::iquat& v)
	{
		return from_glm(v);
	}

	Matrix2x2_i32 Pack(const glm::imat2x2& v)
	{
		return from_glm(v);
	}

	Matrix2x3_i32 Pack(const glm::imat2x3& v)
	{
		return from_glm(v);
	}

	Matrix2x4_i32 Pack(const glm::imat2x4& v)
	{
		return from_glm(v);
	}

	Matrix3x2_i32 Pack(const glm::imat3x2& v)
	{
		return from_glm(v);
	}

	Matrix3x3_i32 Pack(const glm::imat3x3& v)
	{
		return from_glm(v);
	}

	Matrix3x4_i32 Pack(const glm::imat3x4& v)
	{
		return from_glm(v);
	}

	Matrix4x2_i32 Pack(const glm::imat4x2& v)
	{
		return from_glm(v);
	}

	Matrix4x3_i32 Pack(const glm::imat4x3& v)
	{
		return from_glm(v);
	}

	Matrix4x4_i32 Pack(const glm::imat4x4& v)
	{
		return from_glm(v);
	}

	Vector2_u32 Pack(const glm::uvec2& v)
	{
		return from_glm(v);
	}

	Vector3_u32 Pack(const glm::uvec3& v)
	{
		return from_glm(v);
	}

	Vector4_u32 Pack(const glm::uvec4& v)
	{
		return from_glm(v);
	}

	Quaternion_u32 Pack(const glm::uquat& v)
	{
		return from_glm(v);
	}

	Matrix2x2_u32 Pack(const glm::umat2x2& v)
	{
		return from_glm(v);
	}

	Matrix2x3_u32 Pack(const glm::umat2x3& v)
	{
		return from_glm(v);
	}

	Matrix2x4_u32 Pack(const glm::umat2x4& v)
	{
		return from_glm(v);
	}

	Matrix3x2_u32 Pack(const glm::umat3x2& v)
	{
		return from_glm(v);
	}

	Matrix3x3_u32 Pack(const glm::umat3x3& v)
	{
		return from_glm(v);
	}

	Matrix3x4_u32 Pack(const glm::umat3x4& v)
	{
		return from_glm(v);
	}

	Matrix4x2_u32 Pack(const glm::umat4x2& v)
	{
		return from_glm(v);
	}

	Matrix4x3_u32 Pack(const glm::umat4x3& v)
	{
		return from_glm(v);
	}

	Matrix4x4_u32 Pack(const glm::umat4x4& v)
	{
		return from_glm(v);
	}

	Vector2_i16 Pack(const glm::i16vec2& v)
	{
		return from_glm(v);
	}

	Vector3_i16 Pack(const glm::i16vec3& v)
	{
		return from_glm(v);
	}

	Vector4_i16 Pack(const glm::i16vec4& v)
	{
		return from_glm(v);
	}

	Quaternion_i16 Pack(const glm::i16quat& v)
	{
		return from_glm(v);
	}

	Matrix2x2_i16 Pack(const glm::i16mat2x2& v)
	{
		return from_glm(v);
	}

	Matrix2x3_i16 Pack(const glm::i16mat2x3& v)
	{
		return from_glm(v);
	}

	Matrix2x4_i16 Pack(const glm::i16mat2x4& v)
	{
		return from_glm(v);
	}

	Matrix3x2_i16 Pack(const glm::i16mat3x2& v)
	{
		return from_glm(v);
	}

	Matrix3x3_i16 Pack(const glm::i16mat3x3& v)
	{
		return from_glm(v);
	}

	Matrix3x4_i16 Pack(const glm::i16mat3x4& v)
	{
		return from_glm(v);
	}

	Matrix4x2_i16 Pack(const glm::i16mat4x2& v)
	{
		return from_glm(v);
	}

	Matrix4x3_i16 Pack(const glm::i16mat4x3& v)
	{
		return from_glm(v);
	}

	Matrix4x4_i16 Pack(const glm::i16mat4x4& v)
	{
		return from_glm(v);
	}

	Vector2_u16 Pack(const glm::u16vec2& v)
	{
		return from_glm(v);
	}

	Vector3_u16 Pack(const glm::u16vec3& v)
	{
		return from_glm(v);
	}

	Vector4_u16 Pack(const glm::u16vec4& v)
	{
		return from_glm(v);
	}

	Quaternion_u16 Pack(const glm::u16quat& v)
	{
		return from_glm(v);
	}

	Matrix2x2_u16 Pack(const glm::u16mat2x2& v)
	{
		return from_glm(v);
	}

	Matrix2x3_u16 Pack(const glm::u16mat2x3& v)
	{
		return from_glm(v);
	}

	Matrix2x4_u16 Pack(const glm::u16mat2x4& v)
	{
		return from_glm(v);
	}

	Matrix3x2_u16 Pack(const glm::u16mat3x2& v)
	{
		return from_glm(v);
	}

	Matrix3x3_u16 Pack(const glm::u16mat3x3& v)
	{
		return from_glm(v);
	}

	Matrix3x4_u16 Pack(const glm::u16mat3x4& v)
	{
		return from_glm(v);
	}

	Matrix4x2_u16 Pack(const glm::u16mat4x2& v)
	{
		return from_glm(v);
	}

	Matrix4x3_u16 Pack(const glm::u16mat4x3& v)
	{
		return from_glm(v);
	}

	Matrix4x4_u16 Pack(const glm::u16mat4x4& v)
	{
		return from_glm(v);
	}

	Vector2_i8 Pack(const glm::i8vec2& v)
	{
		return from_glm(v);
	}

	Vector3_i8 Pack(const glm::i8vec3& v)
	{
		return from_glm(v);
	}

	Vector4_i8 Pack(const glm::i8vec4& v)
	{
		return from_glm(v);
	}

	Quaternion_i8 Pack(const glm::i8quat& v)
	{
		return from_glm(v);
	}

	Matrix2x2_i8 Pack(const glm::i8mat2x2& v)
	{
		return from_glm(v);
	}

	Matrix2x3_i8 Pack(const glm::i8mat2x3& v)
	{
		return from_glm(v);
	}

	Matrix2x4_i8 Pack(const glm::i8mat2x4& v)
	{
		return from_glm(v);
	}

	Matrix3x2_i8 Pack(const glm::i8mat3x2& v)
	{
		return from_glm(v);
	}

	Matrix3x3_i8 Pack(const glm::i8mat3x3& v)
	{
		return from_glm(v);
	}

	Matrix3x4_i8 Pack(const glm::i8mat3x4& v)
	{
		return from_glm(v);
	}

	Matrix4x2_i8 Pack(const glm::i8mat4x2& v)
	{
		return from_glm(v);
	}

	Matrix4x3_i8 Pack(const glm::i8mat4x3& v)
	{
		return from_glm(v);
	}

	Matrix4x4_i8 Pack(const glm::i8mat4x4& v)
	{
		return from_glm(v);
	}

	Vector2_u8 Pack(const glm::u8vec2& v)
	{
		return from_glm(v);
	}

	Vector3_u8 Pack(const glm::u8vec3& v)
	{
		return from_glm(v);
	}

	Vector4_u8 Pack(const glm::u8vec4& v)
	{
		return from_glm(v);
	}

	Quaternion_u8 Pack(const glm::u8quat& v)
	{
		return from_glm(v);
	}

	Matrix2x2_u8 Pack(const glm::u8mat2x2& v)
	{
		return from_glm(v);
	}

	Matrix2x3_u8 Pack(const glm::u8mat2x3& v)
	{
		return from_glm(v);
	}

	Matrix2x4_u8 Pack(const glm::u8mat2x4& v)
	{
		return from_glm(v);
	}

	Matrix3x2_u8 Pack(const glm::u8mat3x2& v)
	{
		return from_glm(v);
	}

	Matrix3x3_u8 Pack(const glm::u8mat3x3& v)
	{
		return from_glm(v);
	}

	Matrix3x4_u8 Pack(const glm::u8mat3x4& v)
	{
		return from_glm(v);
	}

	Matrix4x2_u8 Pack(const glm::u8mat4x2& v)
	{
		return from_glm(v);
	}

	Matrix4x3_u8 Pack(const glm::u8mat4x3& v)
	{
		return from_glm(v);
	}

	Matrix4x4_u8 Pack(const glm::u8mat4x4& v)
	{
		return from_glm(v);
	}

	Vector2_i64 Pack(const glm::i64vec2& v)
	{
		return from_glm(v);
	}

	Vector3_i64 Pack(const glm::i64vec3& v)
	{
		return from_glm(v);
	}

	Vector4_i64 Pack(const glm::i64vec4& v)
	{
		return from_glm(v);
	}

	Quaternion_i64 Pack(const glm::i64quat& v)
	{
		return from_glm(v);
	}

	Matrix2x2_i64 Pack(const glm::i64mat2x2& v)
	{
		return from_glm(v);
	}

	Matrix2x3_i64 Pack(const glm::i64mat2x3& v)
	{
		return from_glm(v);
	}

	Matrix2x4_i64 Pack(const glm::i64mat2x4& v)
	{
		return from_glm(v);
	}

	Matrix3x2_i64 Pack(const glm::i64mat3x2& v)
	{
		return from_glm(v);
	}

	Matrix3x3_i64 Pack(const glm::i64mat3x3& v)
	{
		return from_glm(v);
	}

	Matrix3x4_i64 Pack(const glm::i64mat3x4& v)
	{
		return from_glm(v);
	}

	Matrix4x2_i64 Pack(const glm::i64mat4x2& v)
	{
		return from_glm(v);
	}

	Matrix4x3_i64 Pack(const glm::i64mat4x3& v)
	{
		return from_glm(v);
	}

	Matrix4x4_i64 Pack(const glm::i64mat4x4& v)
	{
		return from_glm(v);
	}

	Vector2_u64 Pack(const glm::u64vec2& v)
	{
		return from_glm(v);
	}

	Vector3_u64 Pack(const glm::u64vec3& v)
	{
		return from_glm(v);
	}

	Vector4_u64 Pack(const glm::u64vec4& v)
	{
		return from_glm(v);
	}

	Quaternion_u64 Pack(const glm::u64quat& v)
	{
		return from_glm(v);
	}

	Matrix2x2_u64 Pack(const glm::u64mat2x2& v)
	{
		return from_glm(v);
	}

	Matrix2x3_u64 Pack(const glm::u64mat2x3& v)
	{
		return from_glm(v);
	}

	Matrix2x4_u64 Pack(const glm::u64mat2x4& v)
	{
		return from_glm(v);
	}

	Matrix3x2_u64 Pack(const glm::u64mat3x2& v)
	{
		return from_glm(v);
	}

	Matrix3x3_u64 Pack(const glm::u64mat3x3& v)
	{
		return from_glm(v);
	}

	Matrix3x4_u64 Pack(const glm::u64mat3x4& v)
	{
		return from_glm(v);
	}

	Matrix4x2_u64 Pack(const glm::u64mat4x2& v)
	{
		return from_glm(v);
	}

	Matrix4x3_u64 Pack(const glm::u64mat4x3& v)
	{
		return from_glm(v);
	}

	Matrix4x4_u64 Pack(const glm::u64mat4x4& v)
	{
		return from_glm(v);
	}

	Vector2_f64 Pack(const glm::dvec2& v)
	{
		return from_glm(v);
	}

	Vector3_f64 Pack(const glm::dvec3& v)
	{
		return from_glm(v);
	}

	Vector4_f64 Pack(const glm::dvec4& v)
	{
		return from_glm(v);
	}

	Quaternion_f64 Pack(const glm::dquat& v)
	{
		return from_glm(v);
	}

	Matrix2x2_f64 Pack(const glm::dmat2x2& v)
	{
		return from_glm(v);
	}

	Matrix2x3_f64 Pack(const glm::dmat2x3& v)
	{
		return from_glm(v);
	}

	Matrix2x4_f64 Pack(const glm::dmat2x4& v)
	{
		return from_glm(v);
	}

	Matrix3x2_f64 Pack(const glm::dmat3x2& v)
	{
		return from_glm(v);
	}

	Matrix3x3_f64 Pack(const glm::dmat3x3& v)
	{
		return from_glm(v);
	}

	Matrix3x4_f64 Pack(const glm::dmat3x4& v)
	{
		return from_glm(v);
	}

	Matrix4x2_f64 Pack(const glm::dmat4x2& v)
	{
		return from_glm(v);
	}

	Matrix4x3_f64 Pack(const glm::dmat4x3& v)
	{
		return from_glm(v);
	}

	Matrix4x4_f64 Pack(const glm::dmat4x4& v)
	{
		return from_glm(v);
	}

}	// namespace flatbuffers
