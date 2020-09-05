#include "vec3.h"
#include <math.h>

t_vec3 vec3_vec3_sum_val(const t_vec3 a, const t_vec3 b)
{
    return (t_vec3){{a.x + b.x, a.y + b.y, a.z + b.z}};
}

t_vec3 vec3_vec3_sub_val(const t_vec3 a, const t_vec3 b)
{
    return (t_vec3){{a.x - b.x, a.y - b.y, a.z - b.z}};
}

float vec3_vec3_dot_val(const t_vec3 a, const t_vec3 b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

t_vec3 vec3_vec3_cross_val(const t_vec3 a, const t_vec3 b)
{
    return (t_vec3){{a.y * b.z - a.z * b.y,
                     a.z * b.x - a.x * b.z,
                     a.x * b.y - a.y * b.x}};
}

t_vec3 vec3_normalize_val(const t_vec3 a)
{
    const float len = vec3_len(&a);

    return vec3_scalar_div(&a, len);
}

float vec3_len_val(const t_vec3 a)
{
    return sqrtf(a.x * a.x + a.y * a.y + a.z * a.z);
}

t_vec3 vec3_scalar_mul_val(const t_vec3 a, const float b)
{
    return (t_vec3){{a.x * b, a.y * b, a.z * b}};
}

t_vec3 vec3_scalar_sum_val(const t_vec3 a, const float b)
{
    return (t_vec3){{a.x + b, a.y + b, a.z + b}};
}

t_vec3 vec3_scalar_sub_val(const t_vec3 a, const float b)
{
    return (t_vec3){{a.x - b, a.y - b, a.z - b}};
}

t_vec3 vec3_scalar_div_val(const t_vec3 a, const float b)
{
    return (t_vec3){{a.x / b, a.y / b, a.z / b}};
}

t_vec3 vec3_clamp_val(const t_vec3 a, float start, float end)
{
    t_vec3 result;

    result = a;
    vec3_clamp_ptr(&result, start, end);
    return (result);
}




t_vec3 vec3_vec3_sum(const t_vec3 * const a, const t_vec3 * const b)
{
    return (t_vec3){{a->x + b->x, a->y + b->y, a->z + b->z}};
}

t_vec3 vec3_vec3_sub(const t_vec3 * const a, const t_vec3 * const b)
{
    return (t_vec3){{a->x - b->x, a->y - b->y, a->z - b->z}};
}

float vec3_vec3_dot(const t_vec3 * const a, const t_vec3 * const b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

t_vec3 vec3_vec3_cross(const t_vec3 * const a, const t_vec3 * const b)
{
    return (t_vec3){{a->y * b->z - a->z * b->y,
                     a->z * b->x - a->x * b->z,
                     a->x * b->y - a->y * b->x}};
}

t_vec3 vec3_normalize(const t_vec3 * const a)
{
    const float len = vec3_len(a);

    return vec3_scalar_div(a, len);
}

float vec3_len(const t_vec3 * const a)
{
    return sqrtf(a->x * a->x + a->y * a->y + a->z * a->z);
}

t_vec3 vec3_scalar_mul(const t_vec3 * const a, const float b)
{
    return (t_vec3){{a->x * b, a->y * b, a->z * b}};
}

t_vec3 vec3_scalar_sum(const t_vec3 * const a, const float b)
{
    return (t_vec3){{a->x + b, a->y + b, a->z + b}};
}

t_vec3 vec3_scalar_sub(const t_vec3 * const a, const float b)
{
    return (t_vec3){{a->x - b, a->y - b, a->z - b}};
}

t_vec3 vec3_scalar_div(const t_vec3 * const a, const float b)
{
    return (t_vec3){{a->x / b, a->y / b, a->z / b}};
}


t_vec3 vec3_clamp(const t_vec3 *const a, float start, float end)
{
    t_vec3 result;

    result = *a;
    vec3_clamp_ptr(&result, start, end);
    return (result);
}

void vec3_clamp_ptr(t_vec3 * const a, float start, float end)
{
    a->x = a->x >= end ? end : a->x;
    a->x = a->x <= start ? start : a->x;

    a->y = a->y >= end ? end : a->y;
    a->y = a->y <= start ? start : a->y;

    a->z = a->z >= end ? end : a->z;
    a->z = a->z <= start ? start : a->z;
}