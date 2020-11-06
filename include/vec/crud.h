#ifndef VEC_CRUD_H_IS_INCLUDED
#define VEC_CRUD_H_IS_INCLUDED

#include "vec/types.h"
#include "vec/vec.h"

Vec vec_new ();
Vec vec_new_n (long capacity);
Vec vec_delete (Vec v);

const struct VecNamespace *vec_push (Vec v, void *e);
void *vec_pop (Vec v);



#endif