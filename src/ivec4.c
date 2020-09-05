#include "ivec4.h"


t_ivec4 ivec4_ivec4_sum_val(const t_ivec4 a, const t_ivec4 b)
{
    return (t_ivec4){{a.x + b.x,a.y + b.y, a.z + b.z, a.w + b.w}};
}

t_ivec4 ivec4_ivec4_sub_val(const t_ivec4 a, const t_ivec4 b)
{
    return (t_ivec4){{a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w}};
}

t_ivec4 ivec4_scalar_sum_val(const t_ivec4 a, const int b)
{
    return (t_ivec4){{a.x + b, a.y + b, a.z + b, a.w + b}};
}

t_ivec4 ivec4_scalar_sub_val(const t_ivec4 a, const int b)
{
    return (t_ivec4){{a.x - b, a.y - b, a.z - b, a.w - b}};
}

t_ivec4 ivec4_scalar_mul_val(const t_ivec4 a, const int b)
{
    return (t_ivec4){{a.x * b, a.y * b, a.z * b, a.w * b}};
}

t_ivec4 ivec4_scalar_div_val(const t_ivec4 a, const int b)
{
    return (t_ivec4){{a.x / b, a.y / b, a.z / b, a.w / b}};
}



t_ivec4 ivec4_ivec4_sum(const t_ivec4 * const a, const t_ivec4 * const b)
{
    return (t_ivec4){{a->x + b->x,a->y + b->y, a->z + b->z, a->w + b->w}};
}

t_ivec4 ivec4_ivec4_sub(const t_ivec4 * const a, const t_ivec4 * const b)
{
    return (t_ivec4){{a->x - b->x, a->y - b->y, a->z - b->z, a->w - b->w}};
}

t_ivec4 ivec4_scalar_sum(const t_ivec4 * const a, const int b)
{
    return (t_ivec4){{a->x + b, a->y + b, a->z + b, a->w + b}};
}

t_ivec4 ivec4_scalar_sub(const t_ivec4 * const a, const int b)
{
    return (t_ivec4){{a->x - b, a->y - b, a->z - b, a->w - b}};
}

t_ivec4 ivec4_scalar_mul(const t_ivec4 * const a, const int b)
{
    return (t_ivec4){{a->x * b, a->y * b, a->z * b, a->w * b}};
}

t_ivec4 ivec4_scalar_div(const t_ivec4 * const a, const int b)
{
    return (t_ivec4){{a->x / b, a->y / b, a->z / b, a->w / b}};
}

void ivec4_ivec4_sum_ptr(t_ivec4 * const a, const t_ivec4 * const b)
{
    a->x += b->x;
    a->y += b->y;
    a->z += b->z;
    a->w += b->w;
}

void ivec4_ivec4_sub_ptr(t_ivec4 * const a, const t_ivec4 * const b)
{
    a->x -= b->x;
    a->y -= b->y;
    a->z -= b->z;
    a->w -= b->w;
}

void ivec4_scalar_sum_ptr(t_ivec4 * const a, const int b)
{
    a->x += b;
    a->y += b;
    a->z += b;
    a->w += b;
}

void ivec4_scalar_sub_ptr(t_ivec4 * const a, const int b)
{
    a->x -= b;
    a->y -= b;
    a->z -= b;
    a->w -= b;
}

void ivec4_scalar_mul_ptr(t_ivec4 * const a, const int b)
{
    a->x *= b;
    a->y *= b;
    a->z *= b;
    a->w *= b;
}

void ivec4_scalar_div_ptr(t_ivec4 * const a, const int b)
{
    a->x /= b;
    a->y /= b;
    a->z /= b;
    a->w /= b;
}
