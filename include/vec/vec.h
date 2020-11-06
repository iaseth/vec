#ifndef VEC_VEC_H_IS_INCLUDED
#define VEC_VEC_H_IS_INCLUDED

#include "vec/types.h"

struct VecNamespace {
	Vec (*new) ();
	Vec (*new_n) (long capacity);
	Vec (*delete) (Vec v);
};

extern const struct VecNamespace *const vec;



#endif