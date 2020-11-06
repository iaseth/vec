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

	VecNamespace (*print) ();
};

typedef struct Vec *Vec;

struct VecNamespace {
	Vec (*new) ();
	Vec (*new_n) (long capacity);
	Vec (*delete) (Vec v);

	long (*length) (Vec v);
	long (*capacity) (Vec v);

	bool (*empty) (Vec v);
	bool (*full) (Vec v);

	void *(*front) (Vec v);
	void *(*back) (Vec v);
	void *(*nth) (Vec v);

	VecNamespace (*clear) (Vec v);
	VecNamespace (*erase) (Vec v, long start, long end);

	VecNamespace (*print) (Vec v);

	VecNamespace (*reverse) (Vec v);
	VecNamespace (*sort) (Vec v);

	VecNamespace (*resize) (Vec v, long capacity);
	VecNamespace (*reserve) (Vec v, long capacity);
};



#endif