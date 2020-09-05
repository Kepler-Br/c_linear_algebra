#ifndef IVEC3_H
#define IVEC3_H

#ifdef __APPLE__
# include <OpenCL/cl.h>
#elif __linux__
# include <CL/cl.h>
#endif

typedef cl_int3 t_ivec3;

t_ivec3 ivec3_ivec3_sum_val(const t_ivec3 a, const t_ivec3 b);
t_ivec3 ivec3_ivec3_sub_val(const t_ivec3 a, const t_ivec3 b);
t_ivec3 ivec3_scalar_sum_val(const t_ivec3 a, const int b);
t_ivec3 ivec3_scalar_sub_val(const t_ivec3 a, const int b);
t_ivec3 ivec3_scalar_mul_val(const t_ivec3 a, const int b);
t_ivec3 ivec3_scalar_div_val(const t_ivec3 a, const int b);

t_ivec3 ivec3_ivec3_sum(const t_ivec3 * const a, const t_ivec3 * const b);
t_ivec3 ivec3_ivec3_sub(const t_ivec3 * const a, const t_ivec3 * const b);
t_ivec3 ivec3_scalar_sum(const t_ivec3 * const a, const int b);
t_ivec3 ivec3_scalar_sub(const t_ivec3 * const a, const int b);
t_ivec3 ivec3_scalar_mul(const t_ivec3 * const a, const int b);
t_ivec3 ivec3_scalar_div(const t_ivec3 * const a, const int b);

void ivec3_ivec3_sum_ptr(t_ivec3 * const a, const t_ivec3 * const b);
void ivec3_ivec3_sub_ptr(t_ivec3 * const a, const t_ivec3 * const b);
void ivec3_scalar_sum_ptr(t_ivec3 * const a, const int b);
void ivec3_scalar_sub_ptr(t_ivec3 * const a, const int b);
void ivec3_scalar_mul_ptr(t_ivec3 * const a, const int b);
void ivec3_scalar_div_ptr(t_ivec3 * const a, const int b); 

#endif // IVEC3_H