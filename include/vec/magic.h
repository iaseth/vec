#ifndef VEC_MAGIC_H_IS_INCLUDED
#define VEC_MAGIC_H_IS_INCLUDED

#include "vec/types.h"

VecNamespace vec_set_name (Vec v, char *name);

VecNamespace vec_set_less_than (Vec v, bool (*less_than) (void *e1, void *e2));
VecNamespace vec_set_hash_code (Vec v, bool (*hash_code) (void *e, char *s));
VecNamespace vec_set_to_string (Vec v, bool (*to_string) (void *e, char *s));



#endif