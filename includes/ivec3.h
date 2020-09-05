#ifndef IVEC3_H
#define IVEC3_H

#ifdef __APPLE__
# include <OpenCL/cl.h>
#elif __linux__
# include <CL/cl.h>
#endif

typedef cl_int3 t_ivec3;


#endif // IVEC3_H