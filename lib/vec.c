#include "vec/vec.h"

#include <stdlib.h>

#include "vec/crud.h"
#include "vec/order.h"

struct VecNamespace vec_struct = {
	.new = &vec_new,
	.new_n = &vec_new_n,
	.free = &vec_free,
	.delete = &vec_delete,
	.destroy = &vec_destroy,

	.push = &vec_push,
	.pop = &vec_pop,

	.length = &vec_length,
	.capacity = &vec_capacity,

	.empty = &vec_empty,
	.full = &vec_full,

	.swap = &vec_swap,
	.reverse = &vec_reverse,
	.sort = &vec_sort,

	.print = NULL
};

VecNamespace vec = &vec_struct;


