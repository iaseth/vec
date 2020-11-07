#include <stdio.h>
#include <stdlib.h>

//#define VEC_IMPORT_FULL
#include "vec.h"

struct Point {
	int x, y, z;
};

bool
point_to_string (void *e, char *s)
{
	if (e != NULL && s != NULL) {
		struct Point *p = e;
		sprintf(s, "Point [%3d, %3d, %3d]", p->x, p->y, p->z);
		return true;
	}
	return false;
}

int
main (int argc, char const *argv[])
{
	Vec v = vec->new();
	vec->set_name(v, "Points container")->set_to_string(v, point_to_string);
	vec->print_stats(v);
	for (int i = 0; i < 50; ++i) {
		struct Point *p = malloc(sizeof(struct Point));
		p->x = i;
		p->y = i * 2;
		p->z = i * 3;
		vec->push(v, p);
	}

	vec->print_stats(v)->reverse(v)->shuffle(v)->print_slots(v);
	vec->print(v);
	printf("\n");

	v = vec->destroy(v);
	return 0;
}
