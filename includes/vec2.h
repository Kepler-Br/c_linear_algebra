#ifndef VEC2_H
#define VEC2_H

#ifdef __APPLE__
# include <OpenCL/cl.h>
#elif __linux__
# include <CL/cl.h>
#endif

typedef cl_float2 t_vec2;

t_vec2 vec2_vec2_sum_val(const t_vec2 a, const t_vec2 b);
t_vec2 vec2_vec2_sub_val(const t_vec2 a, const t_vec2 b);
float vec2_vec2_dot_val(const t_vec2 a, const t_vec2 b);
float vec2_vec2_cross_val(const t_vec2 a, const t_vec2 b);
t_vec2 vec2_normalize_val(const t_vec2 a);
float vec2_len_val(const t_vec2 a);
t_vec2 vec2_scalar_mul_val(const t_vec2 a, const float b);
t_vec2 vec2_scalar_sum_val(const t_vec2 a, const float b);
t_vec2 vec2_scalar_sub_val(const t_vec2 a, const float b);
t_vec2 vec2_scalar_div_val(const t_vec2 a, const float b);
t_vec2 vec2_clamp_val(const t_vec2 a, float start, float end);

t_vec2 vec2_vec2_sum(const t_vec2 * const a, const t_vec2 * const b);
t_vec2 vec2_vec2_sub(const t_vec2 * const a, const t_vec2 * const b);
float vec2_vec2_dot(const t_vec2 * const a, const t_vec2 * const b);
float vec2_vec2_cross(const t_vec2 * const a, const t_vec2 * const b);
t_vec2 vec2_normalize(const t_vec2 * const a);
float vec2_len(const t_vec2 * const a);
t_vec2 vec2_scalar_mul(const t_vec2 * const a, const float b);
t_vec2 vec2_scalar_sum(const t_vec2 * const a, const float b);
t_vec2 vec2_scalar_sub(const t_vec2 * const a, const float b);
t_vec2 vec2_scalar_div(const t_vec2 * const a, const float b);
t_vec2 vec2_clamp(const t_vec2 *const a, float start, float end);

void vec2_clamp_ptr(t_vec2 * const a, float start, float end);

#endif // VEC2_H