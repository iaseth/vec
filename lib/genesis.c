#include "vec/genesis.h"

#include <stdlib.h>

#include "vec/vec.h"



Vec
vec_new ()
{
	return vec_new_n(VEC_DEFAULT_LENGTH);
}

Vec
vec_new_n (long capacity)
{
	Vec v = malloc(sizeof(struct Vec));
	v->data = malloc(capacity * (sizeof (void *)));
	for (long i = 0; i < capacity; ++i) {
		v->data[i] = NULL;
	}
	v->length = 0;
	v->capacity = capacity;
	v->cursor = 0;

	v->less_than = NULL;
	v->hash_code = NULL;
	v->to_string = NULL;

	return v;
}

VecNamespace
vec_free (Vec v)
{
	if (v != NULL && v->data != NULL && v->length > 0) {
		for (long i = 0; i < v->length; ++i) {
			if (v->data[i] != NULL) free(v->data[i]);
		}
		v->length = 0;
	}
	return vec;
}

Vec
vec_delete (Vec v)
{
	if (v != NULL) {
		if (v->data != NULL) {
			free(v->data);
		}
		free(v);
	}
	return NULL;
}

Vec
vec_destroy (Vec v)
{
	vec_free(v);
	return vec_delete(v);
}


