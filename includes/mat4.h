#ifndef MAT4_H
#define MAT4_H

#ifdef __APPLE__
# include <OpenCL/cl.h>
#elif __linux__
# include <CL/cl.h>
#endif

typedef cl_float16 t_mat4;

t_mat4 mat4_mat4_mul(const t_mat4 * const a, const t_mat4 * const b);
float mat4_det(const t_mat4 * const a);
t_mat4 mat4_inverse(const t_mat4 * const a);
t_mat4 mat4_scalar_mul(const t_mat4 * const a, const cl_float * const b);
t_mat4 mat4_scalar_sum(const t_mat4 * const a, const cl_float * const b);
t_mat4 mat4_scalar_sub(const t_mat4 * const a, const cl_float * const b);
t_mat4 mat4_scalar_div(const t_mat4 * const a, const cl_float * const b);

#endif // MAT4_H