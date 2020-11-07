#ifndef VEC_GENESIS_H_IS_INCLUDED
#define VEC_GENESIS_H_IS_INCLUDED

#include "vec/types.h"

Vec vec_new ();
Vec vec_new_n (long capacity);

VecNamespace vec_free (Vec v);
Vec vec_delete (Vec v);
Vec vec_destroy (Vec v);



#endif