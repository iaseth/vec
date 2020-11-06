#include <stdio.h>

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
		struct Point p = {i, i*2, i*4};
		//vec->add(&p);
	}

	v = vec->delete(v);
	return 0;
}
