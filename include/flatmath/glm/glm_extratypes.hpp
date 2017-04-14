#ifndef FLATMATH_GLM_EXTRA_TYPES_HPP_INC
#define FLATMATH_GLM_EXTRA_TYPES_HPP_INC

#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>


#define TYPEDEF_GLM_TYPE_1(_tpltype, _valuetype, tp)                                                                   \
	typedef _tpltype<_valuetype, lowp>	lowp_##tp;                                                                   \
	typedef _tpltype<_valuetype, mediump> mediump_##tp;                                                                \
	typedef _tpltype<_valuetype, highp>   highp_##tp;


#if (defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
#define TYPEDEF_GLM_TYPE_2(_tpltype, _valuetype, tp) typedef highp_##tp tp;
#elif (!defined(GLM_PRECISION_HIGHP_FLOAT) && defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
#define TYPEDEF_GLM_TYPE_2(_tpltype, _valuetype, tp) typedef mediump_##tp tp;
#elif (!defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && defined(GLM_PRECISION_LOWP_FLOAT))
#define TYPEDEF_GLM_TYPE_2(_tpltype, _valuetype, tp) typedef lowp_##tp tp;
#elif (!defined(GLM_PRECISION_HIGHP_FLOAT) && !defined(GLM_PRECISION_MEDIUMP_FLOAT) && !defined(GLM_PRECISION_LOWP_FLOAT))
#define TYPEDEF_GLM_TYPE_2(_tpltype, _valuetype, tp) typedef highp_##tp tp;
#endif


#define TYPEDEF_GLM_TYPE(_tpltype, _valuetype, tp)                                                                     \
	TYPEDEF_GLM_TYPE_1(_tpltype, _valuetype, tp)                                                                       \
	TYPEDEF_GLM_TYPE_2(_tpltype, _valuetype, tp)

namespace glm
{
	TYPEDEF_GLM_TYPE(tquat, int32_t, iquat);
	TYPEDEF_GLM_TYPE(tquat, uint32_t, uquat);

	TYPEDEF_GLM_TYPE(tquat, int64_t, i64quat);
	TYPEDEF_GLM_TYPE(tquat, uint64_t, u64quat);
	TYPEDEF_GLM_TYPE(tquat, int32_t, i32quat);
	TYPEDEF_GLM_TYPE(tquat, uint32_t, u32quat);
	TYPEDEF_GLM_TYPE(tquat, int16_t, i16quat);
	TYPEDEF_GLM_TYPE(tquat, uint16_t, u16quat);
	TYPEDEF_GLM_TYPE(tquat, int8_t, i8quat);
	TYPEDEF_GLM_TYPE(tquat, uint8_t, u8quat);

	//---

	TYPEDEF_GLM_TYPE(tmat2x2, int32_t, imat2x2);
	TYPEDEF_GLM_TYPE(tmat2x2, uint32_t, umat2x2);

	TYPEDEF_GLM_TYPE(tmat2x2, int64_t, i64mat2x2);
	TYPEDEF_GLM_TYPE(tmat2x2, uint64_t, u64mat2x2);
	TYPEDEF_GLM_TYPE(tmat2x2, int32_t, i32mat2x2);
	TYPEDEF_GLM_TYPE(tmat2x2, uint32_t, u32mat2x2);
	TYPEDEF_GLM_TYPE(tmat2x2, int16_t, i16mat2x2);
	TYPEDEF_GLM_TYPE(tmat2x2, uint16_t, u16mat2x2);
	TYPEDEF_GLM_TYPE(tmat2x2, int8_t, i8mat2x2);
	TYPEDEF_GLM_TYPE(tmat2x2, uint8_t, u8mat2x2);

	//---

	TYPEDEF_GLM_TYPE(tmat2x3, int32_t, imat2x3);
	TYPEDEF_GLM_TYPE(tmat2x3, uint32_t, umat2x3);

	TYPEDEF_GLM_TYPE(tmat2x3, int64_t, i64mat2x3);
	TYPEDEF_GLM_TYPE(tmat2x3, uint64_t, u64mat2x3);
	TYPEDEF_GLM_TYPE(tmat2x3, int32_t, i32mat2x3);
	TYPEDEF_GLM_TYPE(tmat2x3, uint32_t, u32mat2x3);
	TYPEDEF_GLM_TYPE(tmat2x3, int16_t, i16mat2x3);
	TYPEDEF_GLM_TYPE(tmat2x3, uint16_t, u16mat2x3);
	TYPEDEF_GLM_TYPE(tmat2x3, int8_t, i8mat2x3);
	TYPEDEF_GLM_TYPE(tmat2x3, uint8_t, u8mat2x3);

	//---

	TYPEDEF_GLM_TYPE(tmat2x4, int32_t, imat2x4);
	TYPEDEF_GLM_TYPE(tmat2x4, uint32_t, umat2x4);

	TYPEDEF_GLM_TYPE(tmat2x4, int64_t, i64mat2x4);
	TYPEDEF_GLM_TYPE(tmat2x4, uint64_t, u64mat2x4);
	TYPEDEF_GLM_TYPE(tmat2x4, int32_t, i32mat2x4);
	TYPEDEF_GLM_TYPE(tmat2x4, uint32_t, u32mat2x4);
	TYPEDEF_GLM_TYPE(tmat2x4, int16_t, i16mat2x4);
	TYPEDEF_GLM_TYPE(tmat2x4, uint16_t, u16mat2x4);
	TYPEDEF_GLM_TYPE(tmat2x4, int8_t, i8mat2x4);
	TYPEDEF_GLM_TYPE(tmat2x4, uint8_t, u8mat2x4);

	//---

	TYPEDEF_GLM_TYPE(tmat3x2, int32_t, imat3x2);
	TYPEDEF_GLM_TYPE(tmat3x2, uint32_t, umat3x2);

	TYPEDEF_GLM_TYPE(tmat3x2, int64_t, i64mat3x2);
	TYPEDEF_GLM_TYPE(tmat3x2, uint64_t, u64mat3x2);
	TYPEDEF_GLM_TYPE(tmat3x2, int32_t, i32mat3x2);
	TYPEDEF_GLM_TYPE(tmat3x2, uint32_t, u32mat3x2);
	TYPEDEF_GLM_TYPE(tmat3x2, int16_t, i16mat3x2);
	TYPEDEF_GLM_TYPE(tmat3x2, uint16_t, u16mat3x2);
	TYPEDEF_GLM_TYPE(tmat3x2, int8_t, i8mat3x2);
	TYPEDEF_GLM_TYPE(tmat3x2, uint8_t, u8mat3x2);

	//---

	TYPEDEF_GLM_TYPE(tmat3x3, int32_t, imat3x3);
	TYPEDEF_GLM_TYPE(tmat3x3, uint32_t, umat3x3);

	TYPEDEF_GLM_TYPE(tmat3x3, int64_t, i64mat3x3);
	TYPEDEF_GLM_TYPE(tmat3x3, uint64_t, u64mat3x3);
	TYPEDEF_GLM_TYPE(tmat3x3, int32_t, i32mat3x3);
	TYPEDEF_GLM_TYPE(tmat3x3, uint32_t, u32mat3x3);
	TYPEDEF_GLM_TYPE(tmat3x3, int16_t, i16mat3x3);
	TYPEDEF_GLM_TYPE(tmat3x3, uint16_t, u16mat3x3);
	TYPEDEF_GLM_TYPE(tmat3x3, int8_t, i8mat3x3);
	TYPEDEF_GLM_TYPE(tmat3x3, uint8_t, u8mat3x3);

	//---

	TYPEDEF_GLM_TYPE(tmat3x4, int32_t, imat3x4);
	TYPEDEF_GLM_TYPE(tmat3x4, uint32_t, umat3x4);

	TYPEDEF_GLM_TYPE(tmat3x4, int64_t, i64mat3x4);
	TYPEDEF_GLM_TYPE(tmat3x4, uint64_t, u64mat3x4);
	TYPEDEF_GLM_TYPE(tmat3x4, int32_t, i32mat3x4);
	TYPEDEF_GLM_TYPE(tmat3x4, uint32_t, u32mat3x4);
	TYPEDEF_GLM_TYPE(tmat3x4, int16_t, i16mat3x4);
	TYPEDEF_GLM_TYPE(tmat3x4, uint16_t, u16mat3x4);
	TYPEDEF_GLM_TYPE(tmat3x4, int8_t, i8mat3x4);
	TYPEDEF_GLM_TYPE(tmat3x4, uint8_t, u8mat3x4);

	//---

	TYPEDEF_GLM_TYPE(tmat4x2, int32_t, imat4x2);
	TYPEDEF_GLM_TYPE(tmat4x2, uint32_t, umat4x2);

	TYPEDEF_GLM_TYPE(tmat4x2, int64_t, i64mat4x2);
	TYPEDEF_GLM_TYPE(tmat4x2, uint64_t, u64mat4x2);
	TYPEDEF_GLM_TYPE(tmat4x2, int32_t, i32mat4x2);
	TYPEDEF_GLM_TYPE(tmat4x2, uint32_t, u32mat4x2);
	TYPEDEF_GLM_TYPE(tmat4x2, int16_t, i16mat4x2);
	TYPEDEF_GLM_TYPE(tmat4x2, uint16_t, u16mat4x2);
	TYPEDEF_GLM_TYPE(tmat4x2, int8_t, i8mat4x2);
	TYPEDEF_GLM_TYPE(tmat4x2, uint8_t, u8mat4x2);

	//---

	TYPEDEF_GLM_TYPE(tmat4x3, int32_t, imat4x3);
	TYPEDEF_GLM_TYPE(tmat4x3, uint32_t, umat4x3);

	TYPEDEF_GLM_TYPE(tmat4x3, int64_t, i64mat4x3);
	TYPEDEF_GLM_TYPE(tmat4x3, uint64_t, u64mat4x3);
	TYPEDEF_GLM_TYPE(tmat4x3, int32_t, i32mat4x3);
	TYPEDEF_GLM_TYPE(tmat4x3, uint32_t, u32mat4x3);
	TYPEDEF_GLM_TYPE(tmat4x3, int16_t, i16mat4x3);
	TYPEDEF_GLM_TYPE(tmat4x3, uint16_t, u16mat4x3);
	TYPEDEF_GLM_TYPE(tmat4x3, int8_t, i8mat4x3);
	TYPEDEF_GLM_TYPE(tmat4x3, uint8_t, u8mat4x3);

	//---

	TYPEDEF_GLM_TYPE(tmat4x4, int32_t, imat4x4);
	TYPEDEF_GLM_TYPE(tmat4x4, uint32_t, umat4x4);

	TYPEDEF_GLM_TYPE(tmat4x4, int64_t, i64mat4x4);
	TYPEDEF_GLM_TYPE(tmat4x4, uint64_t, u64mat4x4);
	TYPEDEF_GLM_TYPE(tmat4x4, int32_t, i32mat4x4);
	TYPEDEF_GLM_TYPE(tmat4x4, uint32_t, u32mat4x4);
	TYPEDEF_GLM_TYPE(tmat4x4, int16_t, i16mat4x4);
	TYPEDEF_GLM_TYPE(tmat4x4, uint16_t, u16mat4x4);
	TYPEDEF_GLM_TYPE(tmat4x4, int8_t, i8mat4x4);
	TYPEDEF_GLM_TYPE(tmat4x4, uint8_t, u8mat4x4);

	//---


}	// namespace glm

#undef TYPEDEF_GLM_TYPE_1
#undef TYPEDEF_GLM_TYPE_2
#undef TYPEDEF_GLM_TYPE

#endif	// !FLATMATH_GLM_EXTRA_TYPES_HPP_INC