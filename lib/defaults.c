#include "vec/defaults.h"

#include <stdio.h>
#include <stdlib.h>



bool default_less_than (void *e1, void *e2)
{
	if (e1 != NULL && e2 != NULL && e1 < e2) {
		return true;
	}
	return false;
}

bool default_hash_code (void *e, char *s)
{
	if (e == NULL) {
		sprintf(s, "NULL");
		return false;
	}
	sprintf(s, "Hash: %p", e);
	return true;
}

bool default_to_string (void *e, char *s)
{
	if (e == NULL) {
		sprintf(s, "NULL");
		return false;
	}
	sprintf(s, "Element: %p", e);
	return true;
}


