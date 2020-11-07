#ifndef VEC_CRUD_H_IS_INCLUDED
#define VEC_CRUD_H_IS_INCLUDED

#include "vec/types.h"
#include "vec/vec.h"

Vec vec_new ();
Vec vec_new_n (long capacity);
VecNamespace vec_free (Vec v);
Vec vec_delete (Vec v);

long vec_length (Vec v);
long vec_capacity (Vec v);

bool vec_empty (Vec v);
bool vec_full (Vec v);

VecNamespace vec_expand (Vec v);

VecNamespace vec_push (Vec v, void *e);
void *vec_pop (Vec v);



#endif