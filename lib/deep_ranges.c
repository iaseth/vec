#include "vec/deep_ranges.h"

#include <stdlib.h>

#include "vec/genesis.h"



Vec vec_deep_slice (Vec v, long start, long end)
{
	if (v == NULL || start >= end || v->clone == NULL) return NULL;

	long length = end - start;
	Vec v2 = vec_new_n(length);
	for (long i = 0; i < length; ++i) {
		v2->data[i] = v->clone(v->data[start + i]);
	}
	v2->length = length;
	return v2;
}

Vec vec_deep_subvec (Vec v, long start, long length)
{
	if (v == NULL || length <= 0) return NULL;

	long end = start + length;
	return vec_deep_slice(v, start, end);
}


Vec vec_deep_prefix (Vec v, long length)
{
	if (v == NULL || length <= 0) return NULL;

	long start = 0;
	long end = length;
	return vec_deep_slice(v, start, end);
}

Vec vec_deep_suffix (Vec v, long length)
{
	if (v == NULL || length <= 0) return NULL;

	long start = v->length - length;
	long end = v->length;
	return vec_deep_slice(v, start, end);
}


Vec vec_deep_copy (Vec v)
{
	if (v == NULL) return NULL;
	return vec_deep_slice(v, 0, v->length);
}


