#include "vec/crud.h"

#include <stdlib.h>



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
	for (long i = v->length; i < capacity; ++i) {
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


