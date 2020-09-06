#include "vec4.h"
#include <math.h>


t_vec4 vec4_vec4_sum_val(const t_vec4 a, const t_vec4 b)
{
    return (t_vec4){{a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w}};
}

t_vec4 vec4_vec4_sub_val(const t_vec4 a, const t_vec4 b)
{
    return (t_vec4){{a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w}};
}

float vec4_vec4_dot_val(const t_vec4 a, const t_vec4 b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

t_vec4 vec4_normalize_val(const t_vec4 a)
{
    const cl_float len = vec4_len(&a);

    return vec4_scalar_div(&a, len);
}

float vec4_len_val(const t_vec4 a)
{
    return sqrtf(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w);
}

t_vec4 vec4_scalar_mul_val(const t_vec4 a, const cl_float b)
{
    return (t_vec4){{a.x * b, a.y * b, a.z * b, a.w * b}};
}

t_vec4 vec4_scalar_sum_val(const t_vec4 a, const cl_float b)
{
    return (t_vec4){{a.x + b, a.y + b, a.z + b, a.w + b}};
}

t_vec4 vec4_scalar_sub_val(const t_vec4 a, const cl_float b)
{
    return (t_vec4){{a.x - b, a.y - b, a.z - b, a.w - b}};
}

t_vec4 vec4_scalar_div_val(const t_vec4 a, const cl_float b)
{
    return (t_vec4){{a.x / b, a.y / b, a.z / b, a.w / b}};
}



t_vec4 vec4_vec4_sum(const t_vec4 * const a, const t_vec4 * const b)
{
    return (t_vec4){{a->x + b->x, a->y + b->y, a->z + b->z, a->w + b->w}};
}

t_vec4 vec4_vec4_sub(const t_vec4 * const a, const t_vec4 * const b)
{
    return (t_vec4){{a->x - b->x, a->y - b->y, a->z - b->z, a->w - b->w}};
}

float vec4_vec4_dot(const t_vec4 * const a, const t_vec4 * const b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
}

t_vec4 vec4_normalize(const t_vec4 * const a)
{
    const cl_float len = vec4_len(a);

    return vec4_scalar_div(a, len);
}

float vec4_len(const t_vec4 * const a)
{
    return sqrtf(a->x * a->x + a->y * a->y + a->z * a->z + a->w * a->w);
}

t_vec4 vec4_scalar_mul(const t_vec4 * const a, const cl_float b)
{
    return (t_vec4){{a->x * b, a->y * b, a->z * b, a->w * b}};
}

t_vec4 vec4_scalar_sum(const t_vec4 * const a, const cl_float b)
{
    return (t_vec4){{a->x + b, a->y + b, a->z + b, a->w + b}};
}

t_vec4 vec4_scalar_sub(const t_vec4 * const a, const cl_float b)
{
    return (t_vec4){{a->x - b, a->y - b, a->z - b, a->w - b}};
}

t_vec4 vec4_scalar_div(const t_vec4 * const a, const cl_float b)
{
    return (t_vec4){{a->x / b, a->y / b, a->z / b, a->w / b}};
}