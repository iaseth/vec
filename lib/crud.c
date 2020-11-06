#include "vec/crud.h"

#include <stdlib.h>



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
	v->length = 0;
	v->capacity = capacity;
	v->cursor = 0;
	return v;
}

Vec
vec_delete (Vec v)
{
	if (v != NULL) {
		if (v->data != NULL) {
			for (long i = 0; i < v->length; ++i) {
				if (v->data[i] != NULL) free(v->data[i]);
			}
			free(v->data);
		}
		free(v);
	}
	return NULL;
}



VecNamespace
vec_expand (Vec v)
{
	long capacity = v->capacity * 2;
	v->data = realloc(v->data, capacity * (sizeof (void *)));
	v->capacity = capacity;
	return vec;
}



VecNamespace
vec_push (Vec v, void *e)
{
	if (v->length >= v->capacity) {
		vec_expand(v);
	}
	v->data[v->length] = e;
	v->length++;
	return vec;
}

void *
vec_pop (Vec v)
{
	return NULL;
}


