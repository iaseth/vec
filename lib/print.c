#include "vec/print.h"

#include <stdio.h>

#include "vec/vec.h"



VecNamespace
vec_print (Vec v)
{
	return vec;
}

VecNamespace
vec_stats (Vec v)
{
	if (v != NULL) {
		printf("Vec with %ld/%ld objects.\n", v->length, v->capacity);
	} else {
		printf("NULL passed to vec_stats().\n");
	}
	return vec;
}


