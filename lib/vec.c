#include "vec/vec.h"

#include <stdlib.h>

#include "vec/genesis.h"
#include "vec/ranges.h"
#include "vec/crud.h"
#include "vec/order.h"
#include "vec/print.h"



VecNamespace
vec_me ()
{
	return vec;
}

struct VecNamespace vec_struct = {
	.new = &vec_new,
	.new_n = &vec_new_n,
	.free = &vec_free,
	.delete = &vec_delete,
	.destroy = &vec_destroy,

	.slice = &vec_slice,
	.subvec = &vec_subvec,
	.prefix = &vec_prefix,
	.suffix = &vec_suffix,

	.copy = &vec_copy,
	.duplicate = &vec_duplicate,

	.push = &vec_push,
	.pop = &vec_pop,

	.length = &vec_length,
	.capacity = &vec_capacity,

	.empty = &vec_empty,
	.full = &vec_full,

	.print = &vec_print,
	.print_slots = &vec_print_slots,
	.print_stats = &vec_print_stats,

	.swap = &vec_swap,
	.reverse = &vec_reverse,
	.sort = &vec_sort,

	.me = &vec_me
};

VecNamespace vec = &vec_struct;


