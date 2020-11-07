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
	vec->stats(v);
	for (int i = 0; i < 50; ++i) {
		struct Point *p = malloc(sizeof(struct Point));
		p->x = i;
		p->y = i * 2;
		p->z = i * 3;
		vec->push(v, p);
	}

	vec->stats(v)->reverse(v);
	foreach_vec (index, v) {
		struct Point *ps = v->data[index];
		printf("\t%3ld. Point (%3d, %3d, %3d)", index, ps->x, ps->y, ps->z);
		if (index % 4 == 3) {
			printf("\n");
		}
	}
	printf("\n");

	v = vec->destroy(v);
	return 0;
}
