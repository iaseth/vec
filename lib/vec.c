#include "vec/vec.h"

#include <stdlib.h>

#include "vec/crud.h"

struct VecNamespace vec_struct = {
	.new = &vec_new,
	.new_n = &vec_new_n,
	.delete = &vec_delete,

	.push = &vec_push,
	.pop = &vec_pop,

	.length = &vec_length,
	.capacity = &vec_capacity,

	.print = NULL
};

VecNamespace vec = &vec_struct;


