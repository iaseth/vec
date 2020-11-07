#include <stdio.h>
#include <stdlib.h>

//#define VEC_IMPORT_FULL
#include "vec.h"

struct Point {
	int x, y, z;
};

int
main (int argc, char const *argv[])
{
	Vec v = vec->new();
	for (int i = 0; i < 50; ++i) {
		struct Point *p = malloc(sizeof(struct Point));
		p->x = i;
		p->y = i * 2;
		p->z = i * 3;
		vec->push(v, p);
	}

	foreach_vec (index, v) {
		struct Point *ps = v->data[index];
		printf("Point (%d, %d, %d)\n", ps->x, ps->y, ps->z);
	}
	v = vec->free(v)->delete(v);
	return 0;
}
