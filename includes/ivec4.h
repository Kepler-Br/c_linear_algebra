#ifndef IVEC4_H
#define IVEC4_H

#ifdef __APPLE__
# include <OpenCL/cl.h>
#elif __linux__
# include <CL/cl.h>
#endif

typedef cl_int4 t_ivec4;

t_ivec4 ivec4_ivec4_sum_val(const t_ivec4 a, const t_ivec4 b);
t_ivec4 ivec4_ivec4_sub_val(const t_ivec4 a, const t_ivec4 b);
t_ivec4 ivec4_scalar_sum_val(const t_ivec4 a, const cl_int b);
t_ivec4 ivec4_scalar_sub_val(const t_ivec4 a, const cl_int b);
t_ivec4 ivec4_scalar_mul_val(const t_ivec4 a, const cl_int b);
t_ivec4 ivec4_scalar_div_val(const t_ivec4 a, const cl_int b);

t_ivec4 ivec4_ivec4_sum(const t_ivec4 * const a, const t_ivec4 * const b);
t_ivec4 ivec4_ivec4_sub(const t_ivec4 * const a, const t_ivec4 * const b);
t_ivec4 ivec4_scalar_sum(const t_ivec4 * const a, const cl_int b);
t_ivec4 ivec4_scalar_sub(const t_ivec4 * const a, const cl_int b);
t_ivec4 ivec4_scalar_mul(const t_ivec4 * const a, const cl_int b);
t_ivec4 ivec4_scalar_div(const t_ivec4 * const a, const cl_int b);

void ivec4_ivec4_sum_ptr(t_ivec4 * const a, const t_ivec4 * const b);
void ivec4_ivec4_sub_ptr(t_ivec4 * const a, const t_ivec4 * const b);
void ivec4_scalar_sum_ptr(t_ivec4 * const a, const cl_int b);
void ivec4_scalar_sub_ptr(t_ivec4 * const a, const cl_int b);
void ivec4_scalar_mul_ptr(t_ivec4 * const a, const cl_int b);
void ivec4_scalar_div_ptr(t_ivec4 * const a, const cl_int b);

#endif // IVEC4_H