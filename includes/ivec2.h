#ifndef IVEC2_H
#define IVEC2_H

#ifdef __APPLE__
# include <OpenCL/cl.h>
#elif __linux__
# include <CL/cl.h>
#endif

typedef cl_int2 t_ivec2;

t_ivec2 ivec2_ivec2_sum_val(const t_ivec2 a, const t_ivec2 b);
t_ivec2 ivec2_ivec2_sub_val(const t_ivec2 a, const t_ivec2 b);
t_ivec2 ivec2_scalar_sum_val(const t_ivec2 a, const cl_int b);
t_ivec2 ivec2_scalar_sub_val(const t_ivec2 a, const cl_int b);
t_ivec2 ivec2_scalar_mul_val(const t_ivec2 a, const cl_int b);
t_ivec2 ivec2_scalar_div_val(const t_ivec2 a, const cl_int b);

t_ivec2 ivec2_ivec2_sum(const t_ivec2 * const a, const t_ivec2 * const b);
t_ivec2 ivec2_ivec2_sub(const t_ivec2 * const a, const t_ivec2 * const b);
t_ivec2 ivec2_scalar_sum(const t_ivec2 * const a, const cl_int b);
t_ivec2 ivec2_scalar_sub(const t_ivec2 * const a, const cl_int b);
t_ivec2 ivec2_scalar_mul(const t_ivec2 * const a, const cl_int b);
t_ivec2 ivec2_scalar_div(const t_ivec2 * const a, const cl_int b);

void ivec2_ivec2_sum_ptr(t_ivec2 * const a, const t_ivec2 * const b);
void ivec2_ivec2_sub_ptr(t_ivec2 * const a, const t_ivec2 * const b);
void ivec2_scalar_sum_ptr(t_ivec2 * const a, const cl_int b);
void ivec2_scalar_sub_ptr(t_ivec2 * const a, const cl_int b);
void ivec2_scalar_mul_ptr(t_ivec2 * const a, const cl_int b);
void ivec2_scalar_div_ptr(t_ivec2 * const a, const cl_int b);

#endif // IVEC2_H