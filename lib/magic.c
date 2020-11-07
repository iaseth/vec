#include "vec/magic.h"

#include <stdlib.h>
#include <string.h>

#include "vec/vec.h"



VecNamespace vec_set_name (Vec v, char *name)
{
	if (v != NULL && name != NULL) {
		strcpy(v->name, name);
	}
	return vec;
}


VecNamespace
vec_set_less_than (Vec v, bool (*less_than) (void *e1, void *e2))
{
	if (v != NULL && less_than != NULL) {
		v->less_than = less_than;
	}
	return vec;
}

VecNamespace
vec_set_hash_code (Vec v, bool (*hash_code) (void *e, char *s))
{
	if (v != NULL && hash_code != NULL) {
		v->hash_code = hash_code;
	}
	return vec;
}

VecNamespace
vec_set_to_string (Vec v, bool (*to_string) (void *e, char *s))
{
	if (v != NULL && to_string != NULL) {
		v->to_string = to_string;
	}
	return vec;
}


