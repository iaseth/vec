#include "vec/order.h"

#include <stdlib.h>
#include <time.h>

#include "vec/vec.h"



VecNamespace
vec_swap (Vec v, long a, long b)
{
	if (v != NULL && a < v->length && b < v->length) {
		void *temp = v->data[a];
		v->data[a] = v->data[b];
		v->data[b] = temp;
	}
	return vec;
}

VecNamespace
vec_reverse (Vec v)
{
	for (long i = 0; i < v->length / 2; ++i) {
		long j = v->length - i - 1;
		vec_swap(v, i, j);
	}
	return vec;
}

VecNamespace
vec_shuffle (Vec v)
{
	time_t t;
	srand((unsigned) time(&t));
	for (long i = 0; i < v->length; ++i) {
		long j = rand() % v->length;
		vec_swap(v, i, j);
	}
	return vec;
}

VecNamespace
vec_sort (Vec v)
{
	return vec;
}


