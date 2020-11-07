#ifndef VEC_DEEP_RANGES_H_IS_INCLUDED
#define VEC_DEEP_RANGES_H_IS_INCLUDED

#include "vec/types.h"

Vec vec_deep_slice (Vec v, long start, long end);
Vec vec_deep_subvec (Vec v, long start, long length);

Vec vec_deep_prefix (Vec v, long length);
Vec vec_deep_suffix (Vec v, long length);

Vec vec_deep_copy (Vec v);



#endif