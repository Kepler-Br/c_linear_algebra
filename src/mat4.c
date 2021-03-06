#include "mat4.h"

t_mat4 mat4_mat4_mul(const t_mat4 * const a, const t_mat4 * const b)
{
    t_mat4 r;

    r.s0 = a->s0 * b->s0 + a->s1 * b->s4 + a->s2 * b->s8 + a->s3 * b->sc;
    r.s1 = a->s0 * b->s1 + a->s1 * b->s5 + a->s2 * b->s9 + a->s3 * b->sd;
    r.s2 = a->s0 * b->s2 + a->s1 * b->s6 + a->s2 * b->sa + a->s3 * b->se;
    r.s3 = a->s0 * b->s3 + a->s1 * b->s7 + a->s2 * b->sb + a->s3 * b->sf;
    r.s4 = a->s4 * b->s0 + a->s5 * b->s4 + a->s6 * b->s8 + a->s7 * b->sc;
    r.s5 = a->s4 * b->s1 + a->s5 * b->s5 + a->s6 * b->s9 + a->s7 * b->sd;
    r.s6 = a->s4 * b->s2 + a->s5 * b->s6 + a->s6 * b->sa + a->s7 * b->se;
    r.s7 = a->s4 * b->s3 + a->s5 * b->s7 + a->s6 * b->sb + a->s7 * b->sf;
    r.s8 = a->s8 * b->s0 + a->s9 * b->s4 + a->sa * b->s8 + a->sb * b->sc;
    r.s9 = a->s8 * b->s1 + a->s9 * b->s5 + a->sa * b->s9 + a->sb * b->sd;
    r.sa = a->s8 * b->s2 + a->s9 * b->s6 + a->sa * b->sa + a->sb * b->se;
    r.sb = a->s8 * b->s3 + a->s9 * b->s7 + a->sa * b->sb + a->sb * b->sf;
    r.sc = a->sc * b->s0 + a->sd * b->s4 + a->se * b->s8 + a->sf * b->sc;
    r.sd = a->sc * b->s1 + a->sd * b->s5 + a->se * b->s9 + a->sf * b->sd;
    r.se = a->sc * b->s2 + a->sd * b->s6 + a->se * b->sa + a->sf * b->se;
    r.sf = a->sc * b->s3 + a->sd * b->s7 + a->se * b->sb + a->sf * b->sf;
    return (r);
}

float mat4_det(const t_mat4 * const a)
{
    return (a->s3 * a->s6 * a->s9 * a->sc - a->s2 * a->s7 * a->s9 * a->sc-
            a->s3 * a->s5 * a->sa * a->sc+a->s1 * a->s7 * a->sa * a->sc+
            a->s2 * a->s5 * a->sb * a->sc-a->s1 * a->s6 * a->sb * a->sc-
            a->s3 * a->s6 * a->s8 * a->sd+a->s2 * a->s7 * a->s8 * a->sd+
            a->s3 * a->s4 * a->sa * a->sd-a->s0 * a->s7 * a->sa * a->sd-
            a->s2 * a->s4 * a->sb * a->sd+a->s0 * a->s6 * a->sb * a->sd+
            a->s3 * a->s5 * a->s8 * a->se-a->s1 * a->s7 * a->s8 * a->se-
            a->s3 * a->s4 * a->s9 * a->se+a->s0 * a->s7 * a->s9 * a->se+
            a->s1 * a->s4 * a->sb * a->se-a->s0 * a->s5 * a->sb * a->se-
            a->s2 * a->s5 * a->s8 * a->sf+a->s1 * a->s6 * a->s8 * a->sf+
            a->s2 * a->s4 * a->s9 * a->sf-a->s0 * a->s6 * a->s9 * a->sf-
            a->s1 * a->s4 * a->sa * a->sf+a->s0 * a->s5 * a->sa * a->sf);
}

t_mat4 mat4_inverse(const t_mat4 * const a)
{
    t_mat4 inv;
    cl_float det;
    int i;
    inv.s[0] = a->s[5]  * a->s[10] * a->s[15] -
             a->s[5]  * a->s[11] * a->s[14] -
             a->s[9]  * a->s[6]  * a->s[15] +
             a->s[9]  * a->s[7]  * a->s[14] +
             a->s[13] * a->s[6]  * a->s[11] -
             a->s[13] * a->s[7]  * a->s[10];

    inv.s[4] = -a->s[4]  * a->s[10] * a->s[15] +
             a->s[4]  * a->s[11] * a->s[14] +
             a->s[8]  * a->s[6]  * a->s[15] -
             a->s[8]  * a->s[7]  * a->s[14] -
             a->s[12] * a->s[6]  * a->s[11] +
             a->s[12] * a->s[7]  * a->s[10];

    inv.s[8] = a->s[4]  * a->s[9] * a->s[15] -
             a->s[4]  * a->s[11] * a->s[13] -
             a->s[8]  * a->s[5] * a->s[15] +
             a->s[8]  * a->s[7] * a->s[13] +
             a->s[12] * a->s[5] * a->s[11] -
             a->s[12] * a->s[7] * a->s[9];

    inv.s[12] = -a->s[4]  * a->s[9] * a->s[14] +
              a->s[4]  * a->s[10] * a->s[13] +
              a->s[8]  * a->s[5] * a->s[14] -
              a->s[8]  * a->s[6] * a->s[13] -
              a->s[12] * a->s[5] * a->s[10] +
              a->s[12] * a->s[6] * a->s[9];

    inv.s[1] = -a->s[1]  * a->s[10] * a->s[15] +
             a->s[1]  * a->s[11] * a->s[14] +
             a->s[9]  * a->s[2] * a->s[15] -
             a->s[9]  * a->s[3] * a->s[14] -
             a->s[13] * a->s[2] * a->s[11] +
             a->s[13] * a->s[3] * a->s[10];

    inv.s[5] = a->s[0]  * a->s[10] * a->s[15] -
             a->s[0]  * a->s[11] * a->s[14] -
             a->s[8]  * a->s[2] * a->s[15] +
             a->s[8]  * a->s[3] * a->s[14] +
             a->s[12] * a->s[2] * a->s[11] -
             a->s[12] * a->s[3] * a->s[10];

    inv.s[9] = -a->s[0]  * a->s[9] * a->s[15] +
             a->s[0]  * a->s[11] * a->s[13] +
             a->s[8]  * a->s[1] * a->s[15] -
             a->s[8]  * a->s[3] * a->s[13] -
             a->s[12] * a->s[1] * a->s[11] +
             a->s[12] * a->s[3] * a->s[9];

    inv.s[13] = a->s[0]  * a->s[9] * a->s[14] -
              a->s[0]  * a->s[10] * a->s[13] -
              a->s[8]  * a->s[1] * a->s[14] +
              a->s[8]  * a->s[2] * a->s[13] +
              a->s[12] * a->s[1] * a->s[10] -
              a->s[12] * a->s[2] * a->s[9];

    inv.s[2] = a->s[1]  * a->s[6] * a->s[15] -
             a->s[1]  * a->s[7] * a->s[14] -
             a->s[5]  * a->s[2] * a->s[15] +
             a->s[5]  * a->s[3] * a->s[14] +
             a->s[13] * a->s[2] * a->s[7] -
             a->s[13] * a->s[3] * a->s[6];

    inv.s[6] = -a->s[0]  * a->s[6] * a->s[15] +
             a->s[0]  * a->s[7] * a->s[14] +
             a->s[4]  * a->s[2] * a->s[15] -
             a->s[4]  * a->s[3] * a->s[14] -
             a->s[12] * a->s[2] * a->s[7] +
             a->s[12] * a->s[3] * a->s[6];

    inv.s[10] = a->s[0]  * a->s[5] * a->s[15] -
              a->s[0]  * a->s[7] * a->s[13] -
              a->s[4]  * a->s[1] * a->s[15] +
              a->s[4]  * a->s[3] * a->s[13] +
              a->s[12] * a->s[1] * a->s[7] -
              a->s[12] * a->s[3] * a->s[5];

    inv.s[14] = -a->s[0]  * a->s[5] * a->s[14] +
              a->s[0]  * a->s[6] * a->s[13] +
              a->s[4]  * a->s[1] * a->s[14] -
              a->s[4]  * a->s[2] * a->s[13] -
              a->s[12] * a->s[1] * a->s[6] +
              a->s[12] * a->s[2] * a->s[5];

    inv.s[3] = -a->s[1] * a->s[6] * a->s[11] +
             a->s[1] * a->s[7] * a->s[10] +
             a->s[5] * a->s[2] * a->s[11] -
             a->s[5] * a->s[3] * a->s[10] -
             a->s[9] * a->s[2] * a->s[7] +
             a->s[9] * a->s[3] * a->s[6];

    inv.s[7] = a->s[0] * a->s[6] * a->s[11] -
             a->s[0] * a->s[7] * a->s[10] -
             a->s[4] * a->s[2] * a->s[11] +
             a->s[4] * a->s[3] * a->s[10] +
             a->s[8] * a->s[2] * a->s[7] -
             a->s[8] * a->s[3] * a->s[6];

    inv.s[11] = -a->s[0] * a->s[5] * a->s[11] +
              a->s[0] * a->s[7] * a->s[9] +
              a->s[4] * a->s[1] * a->s[11] -
              a->s[4] * a->s[3] * a->s[9] -
              a->s[8] * a->s[1] * a->s[7] +
              a->s[8] * a->s[3] * a->s[5];

    inv.s[15] = a->s[0] * a->s[5] * a->s[10] -
              a->s[0] * a->s[6] * a->s[9] -
              a->s[4] * a->s[1] * a->s[10] +
              a->s[4] * a->s[2] * a->s[9] +
              a->s[8] * a->s[1] * a->s[6] -
              a->s[8] * a->s[2] * a->s[5];

    det = a->s[0] * inv.s[0] + a->s[1] * inv.s[4] + a->s[2] * inv.s[8] + a->s[3] * inv.s[12];
    if (det == 0)
    {
        return (*a);
    }
    det = 1.0f / det;
    i = 0;
    while (i < 16)
    {
        inv.s[i] = inv.s[i] * det;
        i++;
    }
    return (inv);
}
t_mat4 mat4_scalar_mul(const t_mat4 * const a, const cl_float * const b)
{
    static const size_t total_components = 16;
    size_t i;
    t_mat4 new_mat;

    i = 0;
    while(i < total_components)
    {
        new_mat.s[i] = a->s[i] * *b;
        i++;
    }
    return (new_mat);
}

t_mat4 mat4_scalar_sum(const t_mat4 * const a, const cl_float * const b)
{
    static const size_t total_components = 16;
    size_t i;
    t_mat4 new_mat;

    i = 0;
    while(i < total_components)
    {
        new_mat.s[i] = a->s[i] + *b;
        i++;
    }
    return (new_mat);
}

t_mat4 mat4_scalar_sub(const t_mat4 * const a, const cl_float * const b)
{
    static const size_t total_components = 16;
    size_t i;
    t_mat4 new_mat;

    i = 0;
    while(i < total_components)
    {
        new_mat.s[i] = a->s[i] - *b;
        i++;
    }
    return (new_mat);
}

t_mat4 mat4_scalar_div(const t_mat4 * const a, const cl_float * const b)
{
    static const size_t total_components = 16;
    size_t i;
    t_mat4 new_mat;

    i = 0;
    while(i < total_components)
    {
        new_mat.s[i] = a->s[i] / *b;
        i++;
    }
    return (new_mat);
}