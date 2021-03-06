#include "vec/vec.h"

#include <stdlib.h>

#include "vec/genesis.h"
#include "vec/crud.h"
#include "vec/order.h"
#include "vec/ranges.h"
#include "vec/deep_ranges.h"
#include "vec/magic.h"
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

	.push = &vec_push,
	.pop = &vec_pop,

	.length = &vec_length,
	.capacity = &vec_capacity,

	.empty = &vec_empty,
	.full = &vec_full,

	.swap = &vec_swap,
	.reverse = &vec_reverse,
	.shuffle = &vec_shuffle,
	.sort = &vec_sort,

	.slice = &vec_slice,
	.subvec = &vec_subvec,
	.prefix = &vec_prefix,
	.suffix = &vec_suffix,
	.copy = &vec_copy,

	.deep_slice = &vec_deep_slice,
	.deep_subvec = &vec_deep_subvec,
	.deep_prefix = &vec_deep_prefix,
	.deep_suffix = &vec_deep_suffix,
	.deep_copy = &vec_deep_copy,

	.set_name = &vec_set_name,
	.set_less_than = &vec_set_less_than,
	.set_hash_code = &vec_set_hash_code,
	.set_to_string = &vec_set_to_string,

	.print = &vec_print,
	.print_slots = &vec_print_slots,
	.print_slots_compact = &vec_print_slots_compact,
	.print_stats = &vec_print_stats,

	.me = &vec_me
};

VecNamespace vec = &vec_struct;


