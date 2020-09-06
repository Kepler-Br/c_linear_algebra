#include "ivec3.h"


t_ivec3 ivec3_ivec3_sum_val(const t_ivec3 a, const t_ivec3 b)
{
    return (t_ivec3){{a.x + b.x, a.y + b.y, a.z + b.z}};
}

t_ivec3 ivec3_ivec3_sub_val(const t_ivec3 a, const t_ivec3 b)
{
    return (t_ivec3){{a.x - b.x, a.y - b.y, a.z - b.z}};
}

t_ivec3 ivec3_scalar_sum_val(const t_ivec3 a, const cl_int b)
{
    return (t_ivec3){{a.x + b, a.y + b, a.z + b}};
}

t_ivec3 ivec3_scalar_sub_val(const t_ivec3 a, const cl_int b)
{
    return (t_ivec3){{a.x - b, a.y - b, a.z - b}};
}

t_ivec3 ivec3_scalar_mul_val(const t_ivec3 a, const cl_int b)
{
    return (t_ivec3){{a.x * b, a.y * b, a.z * b}};
}

t_ivec3 ivec3_scalar_div_val(const t_ivec3 a, const cl_int b)
{
    return (t_ivec3){{a.x / b, a.y / b, a.z / b}};
}


t_ivec3 ivec3_ivec3_sum(const t_ivec3 * const a, const t_ivec3 * const b)
{
    return (t_ivec3){{a->x + b->x, a->y + b->y, a->z + b->z}};
}

t_ivec3 ivec3_ivec3_sub(const t_ivec3 * const a, const t_ivec3 * const b)
{
    return (t_ivec3){{a->x - b->x, a->y - b->y, a->z - b->z}};
}

t_ivec3 ivec3_scalar_sum(const t_ivec3 * const a, const cl_int b)
{
    return (t_ivec3){{a->x + b, a->y + b, a->z + b}};
}

t_ivec3 ivec3_scalar_sub(const t_ivec3 * const a, const cl_int b)
{
    return (t_ivec3){{a->x - b, a->y - b, a->z - b}};
}

t_ivec3 ivec3_scalar_mul(const t_ivec3 * const a, const cl_int b)
{
    return (t_ivec3){{a->x * b, a->y * b, a->z * b}};
}

t_ivec3 ivec3_scalar_div(const t_ivec3 * const a, const cl_int b)
{
    return (t_ivec3){{a->x / b, a->y / b, a->z / b}};
}

void ivec3_ivec3_sum_ptr(t_ivec3 * const a, const t_ivec3 * const b)
{
    a->x += b->x;
    a->y += b->y;
    a->z += b->z;
}

void ivec3_ivec3_sub_ptr(t_ivec3 * const a, const t_ivec3 * const b)
{
    a->x -= b->x;
    a->y -= b->y;
    a->z -= b->z;
}

void ivec3_scalar_sum_ptr(t_ivec3 * const a, const cl_int b)
{
    a->x += b;
    a->y += b;
    a->z += b;
}

void ivec3_scalar_sub_ptr(t_ivec3 * const a, const cl_int b)
{
    a->x -= b;
    a->y -= b;
    a->z -= b;
}

void ivec3_scalar_mul_ptr(t_ivec3 * const a, const cl_int b)
{
    a->x *= b;
    a->y *= b;
    a->z *= b;
}

void ivec3_scalar_div_ptr(t_ivec3 * const a, const cl_int b)
{
    a->x /= b;
    a->y /= b;
    a->z /= b;
}
