#ifndef IVEC4_H
#define IVEC4_H

#ifdef __APPLE__
# include <OpenCL/cl.h>
#elif __linux__
# include <CL/cl.h>
#endif

typedef cl_int4 t_ivec4;

#endif // IVEC4_H