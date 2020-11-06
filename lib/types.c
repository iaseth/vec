#include "vec/types.h"

#include <stdlib.h>



Vec vec_new ()
{
	return vec_new_n(VEC_DEFAULT_LENGTH);
}

Vec vec_new_n (long capacity)
{
	Vec v = malloc(sizeof(struct Vec));
	v->data = malloc(capacity * (sizeof (void *)));
	v->length = 0;
	v->capacity = capacity;
	return v;
}

Vec vec_delete (Vec v)
{
	if (v != NULL) {
		if (v->data != NULL) free(v->data);
		free(v);
	}
	return NULL;
}


