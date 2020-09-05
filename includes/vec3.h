#ifndef VEC3_H
#define VEC3_H

#ifdef __APPLE__
# include <OpenCL/cl.h>
#elif __linux__
# include <CL/cl.h>
#endif

typedef cl_float3 t_vec3;

t_vec3 vec3_vec3_sum_val(const t_vec3 a, const t_vec3 b);
t_vec3 vec3_vec3_sub_val(const t_vec3 a, const t_vec3 b);
float vec3_vec3_dot_val(const t_vec3 a, const t_vec3 b);
t_vec3 vec3_vec3_cross_val(const t_vec3 a, const t_vec3 b);
t_vec3 vec3_normalize_val(const t_vec3 a);
float vec3_len_val(const t_vec3 a);
t_vec3 vec3_scalar_mul_val(const t_vec3 a, const float b);
t_vec3 vec3_scalar_sum_val(const t_vec3 a, const float b);
t_vec3 vec3_scalar_sub_val(const t_vec3 a, const float b);
t_vec3 vec3_scalar_div_val(const t_vec3 a, const float b);
t_vec3 vec3_clamp_val(const t_vec3 a, float start, float end);

t_vec3 vec3_vec3_sum(const t_vec3 * const a, const t_vec3 * const b);
t_vec3 vec3_vec3_sub(const t_vec3 * const a, const t_vec3 * const b);
float vec3_vec3_dot(const t_vec3 * const a, const t_vec3 * const b);
t_vec3 vec3_vec3_cross(const t_vec3 * const a, const t_vec3 * const b);
t_vec3 vec3_normalize(const t_vec3 * const a);
float vec3_len(const t_vec3 * const a);
t_vec3 vec3_scalar_mul(const t_vec3 * const a, const float b);
t_vec3 vec3_scalar_sum(const t_vec3 * const a, const float b);
t_vec3 vec3_scalar_sub(const t_vec3 * const a, const float b);
t_vec3 vec3_scalar_div(const t_vec3 * const a, const float b);
t_vec3 vec3_clamp(const t_vec3 *const a, float start, float end);

void vec3_clamp_ptr(t_vec3 * const a, float start, float end);


#endif // VEC3_H