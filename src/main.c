#include <stdio.h>

//#define VEC_IMPORT_FULL
#include "vec.h"

int
main (int argc, char const *argv[])
{
	Vec v = vec->new();
	printf("Hello, Vec!\n");
	v = vec->delete(v);
	return 0;
}
