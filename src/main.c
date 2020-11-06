#include <stdio.h>

#include "vec.h"

int
main (int argc, char const *argv[])
{
	Vec v = vec_new();
	printf("Hello, Vec!\n");
	v = vec_delete(v);
	return 0;
}
