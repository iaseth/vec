#ifndef VEC_RANGES_H_IS_INCLUDED
#define VEC_RANGES_H_IS_INCLUDED

#include "vec/types.h"

Vec vec_slice (Vec v, long start, long end);
Vec vec_subvec (Vec v, long start, long length);
Vec vec_prefix (Vec v, long length);
Vec vec_suffix (Vec v, long length);



#endif