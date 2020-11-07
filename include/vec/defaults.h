#ifndef VEC_DEFAULTS_H_IS_INCLUDED
#define VEC_DEFAULTS_H_IS_INCLUDED

#include <stdbool.h>



bool default_less_than (void *e1, void *e2);
bool default_hash_code (void *e, char *s);
bool default_to_string (void *e, char *s);



#endif