#ifndef VEC4_H
#define VEC4_H

#ifdef __APPLE__
# include <OpenCL/cl.h>
#elif __linux__
# include <CL/cl.h>
#endif

typedef cl_float4 t_vec4;

t_vec4 vec4_vec4_sum(const t_vec4 * const a, const t_vec4 * const b);
t_vec4 vec4_vec4_sub(const t_vec4 * const a, const t_vec4 * const b);
float vec4_vec4_dot(const t_vec4 * const a, const t_vec4 * const b);
t_vec4 vec4_normalize(const t_vec4 * const a);
float vec4_len(const t_vec4 * const a);
t_vec4 vec4_scalar_mul(const t_vec4 * const a, const float b);
t_vec4 vec4_scalar_sum(const t_vec4 * const a, const float b);
t_vec4 vec4_scalar_sub(const t_vec4 * const a, const float b);
t_vec4 vec4_scalar_div(const t_vec4 * const a, const float b);

#endif // VEC4_H