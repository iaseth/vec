#include "vec/print.h"

#include <stdio.h>

#include "vec/vec.h"



VecNamespace
vec_print (Vec v)
{
	if (v == NULL) {
		printf("NULL passed to vec_print().\n");
		return vec;
	}

	if (v->to_string == NULL) {
		printf("vec_print() called with to_string() set to NULL.\n");
		return vec;
	}

	long columns = v->columns;
	char s[200];
	foreach_vec (index, v) {
		v->to_string(v->data[index], s);
		printf("\t%3ld. %s", index, s);
		if ((index + 1) % columns == 0) {
			printf("\n");
		}
	}
	printf("\n");

	return vec;
}

VecNamespace
vec_print_stats (Vec v)
{
	if (v != NULL) {
		printf("Vec with %ld/%ld objects.\n", v->length, v->capacity);
	} else {
		printf("NULL passed to vec_print_stats().\n");
	}
	return vec;
}


