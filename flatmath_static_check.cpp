#include "include/flatmath/readonly/flatmath_generated.h"

#include <cctype>
#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>

using namespace flatmath;

static_assert(sizeof(Vector2_f32) == sizeof(float) * 2, "sizeof(Vector2_f32) != sizeof(float) * 2");
static_assert(sizeof(Vector3_f32) == sizeof(float) * 3, "sizeof(Vector3_f32) != sizeof(float) * 3");
static_assert(sizeof(Vector4_f32) == sizeof(float) * 4, "sizeof(Vector4_f32) != sizeof(float) * 4");
static_assert(sizeof(Quaternion_f32) == sizeof(float) * 4, "sizeof(Quaternion_f32) != sizeof(float) * 4");

static_assert(sizeof(Matrix2x2_f32) == sizeof(Vector4_f32) * 4, "sizeof(Matrix2x2_f32) != sizeof(Vector2_f32) * 2");
static_assert(sizeof(Matrix2x3_f32) == sizeof(Vector4_f32) * 4, "sizeof(Matrix2x3_f32) != sizeof(Vector2_f32) * 3");
static_assert(sizeof(Matrix2x4_f32) == sizeof(Vector4_f32) * 4, "sizeof(Matrix2x4_f32) != sizeof(Vector2_f32) * 4");

static_assert(sizeof(Matrix3x2_f32) == sizeof(Vector4_f32) * 4, "sizeof(Matrix3x2_f32) != sizeof(Vector3_f32) * 2");
static_assert(sizeof(Matrix3x3_f32) == sizeof(Vector4_f32) * 4, "sizeof(Matrix3x3_f32) != sizeof(Vector3_f32) * 3");
static_assert(sizeof(Matrix3x4_f32) == sizeof(Vector4_f32) * 4, "sizeof(Matrix3x4_f32) != sizeof(Vector3_f32) * 4");

static_assert(sizeof(Matrix4x2_f32) == sizeof(Vector4_f32) * 4, "sizeof(Matrix4x2_f32) != sizeof(Vector4_f32) * 2");
static_assert(sizeof(Matrix4x3_f32) == sizeof(Vector4_f32) * 4, "sizeof(Matrix4x3_f32) != sizeof(Vector4_f32) * 3");
static_assert(sizeof(Matrix4x4_f32) == sizeof(Vector4_f32) * 4, "sizeof(Matrix4x4_f32) != sizeof(Vector4_f32) * 4");


static_assert(sizeof(Vector2_i32) == sizeof(int32_t) * 2, "sizeof(Vector2_i32) != sizeof(int32_t) * 2");
static_assert(sizeof(Vector3_i32) == sizeof(int32_t) * 3, "sizeof(Vector3_i32) != sizeof(int32_t) * 3");
static_assert(sizeof(Vector4_i32) == sizeof(int32_t) * 4, "sizeof(Vector4_i32) != sizeof(int32_t) * 4");

static_assert(sizeof(Matrix2x2_i32) == sizeof(Vector4_i32) * 4, "sizeof(Matrix2x2_i32) != sizeof(Vector2_i32) * 2");
static_assert(sizeof(Matrix2x3_i32) == sizeof(Vector4_i32) * 4, "sizeof(Matrix2x3_i32) != sizeof(Vector2_i32) * 3");
static_assert(sizeof(Matrix2x4_i32) == sizeof(Vector4_i32) * 4, "sizeof(Matrix2x4_i32) != sizeof(Vector2_i32) * 4");

static_assert(sizeof(Matrix3x2_i32) == sizeof(Vector4_i32) * 4, "sizeof(Matrix3x2_i32) != sizeof(Vector3_i32) * 2");
static_assert(sizeof(Matrix3x3_i32) == sizeof(Vector4_i32) * 4, "sizeof(Matrix3x3_i32) != sizeof(Vector3_i32) * 3");
static_assert(sizeof(Matrix3x4_i32) == sizeof(Vector4_i32) * 4, "sizeof(Matrix3x4_i32) != sizeof(Vector3_i32) * 4");

static_assert(sizeof(Matrix4x2_i32) == sizeof(Vector4_i32) * 4, "sizeof(Matrix4x2_i32) != sizeof(Vector4_i32) * 2");
static_assert(sizeof(Matrix4x3_i32) == sizeof(Vector4_i32) * 4, "sizeof(Matrix4x3_i32) != sizeof(Vector4_i32) * 3");
static_assert(sizeof(Matrix4x4_i32) == sizeof(Vector4_i32) * 4, "sizeof(Matrix4x4_i32) != sizeof(Vector4_i32) * 4");



static_assert(sizeof(Vector2_u32) == sizeof(uint32_t) * 2, "sizeof(Vector2_u32) != sizeof(uint32_t) * 2");
static_assert(sizeof(Vector3_u32) == sizeof(uint32_t) * 3, "sizeof(Vector3_u32) != sizeof(uint32_t) * 3");
static_assert(sizeof(Vector4_u32) == sizeof(uint32_t) * 4, "sizeof(Vector4_u32) != sizeof(uint32_t) * 4");

static_assert(sizeof(Matrix2x2_u32) == sizeof(Vector4_u32) * 4, "sizeof(Matrix2x2_u32) != sizeof(Vector2_u32) * 2");
static_assert(sizeof(Matrix2x3_u32) == sizeof(Vector4_u32) * 4, "sizeof(Matrix2x3_u32) != sizeof(Vector2_u32) * 3");
static_assert(sizeof(Matrix2x4_u32) == sizeof(Vector4_u32) * 4, "sizeof(Matrix2x4_u32) != sizeof(Vector2_u32) * 4");

static_assert(sizeof(Matrix3x2_u32) == sizeof(Vector4_u32) * 4, "sizeof(Matrix3x2_u32) != sizeof(Vector3_u32) * 2");
static_assert(sizeof(Matrix3x3_u32) == sizeof(Vector4_u32) * 4, "sizeof(Matrix3x3_u32) != sizeof(Vector3_u32) * 3");
static_assert(sizeof(Matrix3x4_u32) == sizeof(Vector4_u32) * 4, "sizeof(Matrix3x4_u32) != sizeof(Vector3_u32) * 4");

static_assert(sizeof(Matrix4x2_u32) == sizeof(Vector4_u32) * 4, "sizeof(Matrix4x2_u32) != sizeof(Vector4_u32) * 2");
static_assert(sizeof(Matrix4x3_u32) == sizeof(Vector4_u32) * 4, "sizeof(Matrix4x3_u32) != sizeof(Vector4_u32) * 3");
static_assert(sizeof(Matrix4x4_u32) == sizeof(Vector4_u32) * 4, "sizeof(Matrix4x4_u32) != sizeof(Vector4_u32) * 4");



static_assert(sizeof(Vector2_f32) == sizeof(glm::vec2), "sizeof(Vector2_f32) != sizeof(glm::vec2)");
static_assert(sizeof(Vector3_f32) == sizeof(glm::vec3), "sizeof(Vector3_f32) != sizeof(glm::vec3)");
static_assert(sizeof(Vector4_f32) == sizeof(glm::vec4), "sizeof(Vector4_f32) != sizeof(glm::vec4)");
static_assert(sizeof(Quaternion_f32) == sizeof(glm::quat), "sizeof(Quaternion_f32) != sizeof(glm::quat)");
static_assert(sizeof(Matrix4x4_f32) == sizeof(glm::mat4), "sizeof(Matrix4x4_f32) != sizeof(glm::mat4)");
static_assert(sizeof(Vector2_i32) == sizeof(glm::ivec2), "sizeof(Vector2_i32) != sizeof(glm::ivec2)");
static_assert(sizeof(Vector3_i32) == sizeof(glm::ivec3), "sizeof(Vector3_i32) != sizeof(glm::ivec3)");
static_assert(sizeof(Vector4_i32) == sizeof(glm::ivec4), "sizeof(Vector4_i32) != sizeof(glm::ivec4)");
static_assert(sizeof(Vector2_u32) == sizeof(glm::uvec2), "sizeof(Vector2_u32) != sizeof(glm::uvec2)");
static_assert(sizeof(Vector3_u32) == sizeof(glm::uvec3), "sizeof(Vector3_u32) != sizeof(glm::uvec3)");
static_assert(sizeof(Vector4_u32) == sizeof(glm::uvec4), "sizeof(Vector4_u32) != sizeof(glm::uvec4)");
