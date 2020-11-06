#include "vec/vec.h"

#include "vec/crud.h"

struct VecNamespace vec_struct = {
	.new = &vec_new,
	.new_n = &vec_new_n,
	.delete = &vec_delete,
};

VecNamespace vec = &vec_struct;


