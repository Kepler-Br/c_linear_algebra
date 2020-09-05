#include "vec2.h" 
#include <math.h>

t_vec2 vec2_vec2_sum(const t_vec2 * const a, const t_vec2 * const b)
{
    return (t_vec2){{a->x + b->x, a->y + b->y}};
}

t_vec2 vec2_vec2_sub(const t_vec2 * const a, const t_vec2 * const b)
{
    return (t_vec2){{a->x - b->x, a->y - b->y}};
}

float vec2_vec2_dot(const t_vec2 * const a, const t_vec2 * const b)
{
    return a->x * b->x + a->y * b->y;
}

float vec2_vec2_cross(const t_vec2 * const a, const t_vec2 * const b)
{
    return a->x * b->y - a->y * b->x;
}

t_vec2 vec2_normalize(const t_vec2 * const a)
{
    const float len = vec2_len(a);
    return vec2_scalar_div(a, len);
}

float vec2_len(const t_vec2 * const a)
{
    return sqrtf(a->x * a->x + a->y * a->y);
}

t_vec2 vec2_scalar_mul(const t_vec2 * const a, const float b)
{
    return (t_vec2){{a->x * b, a->y * b}};
}

t_vec2 vec2_scalar_sum(const t_vec2 * const a, const float b)
{
    return (t_vec2){{a->x + b, a->y + b}};
}

t_vec2 vec2_scalar_sub(const t_vec2 * const a, const float b)
{
    return (t_vec2){{a->x - b, a->y - b}};
}

t_vec2 vec2_scalar_div(const t_vec2 * const a, const float b)
{
    return (t_vec2){{a->x / b, a->y / b}};
}


t_vec2 vec2_clamp(const t_vec2 *const a, float start, float end)
{
    t_vec2 result;

    result = *a;
    vec2_clamp_ptr(&result, start, end);
    return (result);
}

void vec2_clamp_ptr(t_vec2 * const a, float start, float end)
{
    a->x = a->x >= end ? end : a->x;
    a->x = a->x <= start ? start : a->x;

    a->y = a->y >= end ? end : a->y;
    a->y = a->y <= start ? start : a->y;
}