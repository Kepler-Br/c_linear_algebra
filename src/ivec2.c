#include "ivec2.h"

t_ivec2 ivec2_ivec2_sum_val(const t_ivec2 a, const t_ivec2 b)
{
    return (t_ivec2){{a.x + b.x, a.y + b.y}};
}

t_ivec2 ivec2_ivec2_sub_val(const t_ivec2 a, const t_ivec2 b)
{
    return (t_ivec2){{a.x - b.x, a.y - b.y}};
}


t_ivec2 ivec2_scalar_sum_val(const t_ivec2 a, const int b)
{
    return (t_ivec2){{a.x + b, a.y + b}};
}

t_ivec2 ivec2_scalar_sub_val(const t_ivec2 a, const int b)
{
    return (t_ivec2){{a.x - b, a.y - b}};
}

t_ivec2 ivec2_scalar_mul_val(const t_ivec2 a, const int b)
{
    return (t_ivec2){{a.x * b, a.y * b}};
}

t_ivec2 ivec2_scalar_div_val(const t_ivec2 a, const int b)
{
    return (t_ivec2){{a.x / b, a.y / b}};
}


t_ivec2 ivec2_ivec2_sum(const t_ivec2 * const a, const t_ivec2 * const b)
{
    return (t_ivec2){{a->x + b->x, a->y + b->y}};
}

t_ivec2 ivec2_scalar_sub(const t_ivec2 * const a, const int b)
{
    return (t_ivec2){{a->x - b, a->y - b}};
}

t_ivec2 ivec2_scalar_sum(const t_ivec2 * const a, const int b)
{
    return (t_ivec2){{a->x + b, a->y + b}};
}

t_ivec2 ivec2_ivec2_sub(const t_ivec2 * const a, const t_ivec2 * const b)
{
    return (t_ivec2){{a->x - b->x, a->y - b->y}};
}

t_ivec2 ivec2_scalar_mul(const t_ivec2 * const a, const int b)
{
    return (t_ivec2){{a->x * b, a->y * b}};
}

t_ivec2 ivec2_scalar_div(const t_ivec2 * const a, const int b)
{
    return (t_ivec2){{a->x / b, a->y / b}};
}

void ivec2_ivec2_sum_ptr(t_ivec2 * const a, const t_ivec2 * const b)
{
    a->x += b->x;
    a->y += b->y;
}

void ivec2_ivec2_sub_ptr(t_ivec2 * const a, const t_ivec2 * const b)
{
    a->x -= b->x;
    a->y -= b->y;
}

void ivec2_scalar_sum_ptr(t_ivec2 * const a, const int b)
{
    a->x += b;
    a->y += b;
}

void ivec2_scalar_sub_ptr(t_ivec2 * const a, const int b)
{
    a->x -= b;
    a->y -= b;
}

void ivec2_scalar_mul_ptr(t_ivec2 * const a, const int b)
{
    a->x *= b;
    a->y *= b;
}

void ivec2_scalar_div_ptr(t_ivec2 * const a, const int b)
{
    a->x /= b;
    a->y /= b;
}