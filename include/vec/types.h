#ifndef VEC_TYPES_H_IS_INCLUDED
#define VEC_TYPES_H_IS_INCLUDED

#include <stdbool.h>

#define VEC_DEFAULT_LENGTH 16

struct VecNamespace;
typedef const struct VecNamespace *const VecNamespace;

struct Vec {
	void **data;
	long length;
	long capacity;
	VecNamespace (*print)();
};

typedef struct Vec *Vec;

struct VecNamespace {
	Vec (*new) ();
	Vec (*new_n) (long capacity);
	Vec (*delete) (Vec v);
};



#endif