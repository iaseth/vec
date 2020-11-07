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



bool vec_empty (Vec v)
{
	if (v->length == 0) {
		return true;
	}
	return false;
}

bool vec_full (Vec v)
{
	if (v->length == v->capacity) {
		return true;
	}
	return false;
}



long vec_length (Vec v)
{
	return v->length;
}

long vec_capacity (Vec v)
{
	return v->capacity;
}



VecNamespace
vec_expand (Vec v)
{
	long capacity = v->capacity * 2;
	v->data = realloc(v->data, capacity * (sizeof (void *)));
	for (long i = v->length; i < v->capacity; ++i) {
		v->data[i] = NULL;
	}
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
	if (v->length == 0) {
		return NULL;
	}
	long last_index = v->length - 1;
	void *last = v->data[last_index];
	v->data[last_index] = NULL;
	v->length--;
	return last;
}


