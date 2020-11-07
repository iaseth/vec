#include "vec/magic.h"

#include <stdlib.h>
#include <string.h>

#include "vec/vec.h"



VecNamespace vec_set_name (Vec v, char *name)
{
	if (v != NULL && name != NULL) {
		strcpy(v->name, name);
	}
	return vec;
}


