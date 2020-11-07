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
vec_print_slots (Vec v)
{
	if (v == NULL) {
		printf("NULL passed to vec_print_slots()\n");
	}

	for (long index = 0; index < v->capacity; ++index) {
		if (v->data[index] == NULL) {
			printf("  %5ld [.........]  ", index);
		} else {
			printf("  %5ld [%p]  ", index, v->data[index]);
		}

		if ((index+1) % 8 == 0) {
			printf("\n");
		}
	}
	printf("\n");
	return vec;
}

VecNamespace
vec_print_slots_compact (Vec v)
{
	if (v == NULL) {
		printf("NULL passed to vec_print_slots_compact()\n");
	}

	printf("\t");
	for (long index = 0; index < v->capacity; ++index) {
		if (v->data[index] == NULL) {
			printf("_");
		} else {
			printf("+");
		}

		if ((index+1) % 64 == 0) {
			printf("\n\t");
		}
	}
	printf("\n");
	return vec;
}

VecNamespace
vec_print_stats (Vec v)
{
	if (v != NULL) {
		printf("Vec (%s) with %ld/%ld objects.\n", v->name, v->length, v->capacity);
	} else {
		printf("NULL passed to vec_print_stats().\n");
	}
	return vec;
}


