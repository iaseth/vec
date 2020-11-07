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
	long cursor;

	void *(*clone) (void *e);

	bool (*less_than) (void *e1, void *e2);
	bool (*hash_code) (void *e, char *s);
	bool (*to_string) (void *e, char *s);
};

typedef struct Vec *Vec;

struct VecNamespace {
	Vec (*new) ();
	Vec (*new_n) (long capacity);
	VecNamespace (*free) (Vec v);
	Vec (*delete) (Vec v);
	Vec (*destroy) (Vec v);

	VecNamespace (*push) (Vec v, void *e);
	void *(*pop) (Vec v);

	long (*length) (Vec v);
	long (*capacity) (Vec v);

	bool (*empty) (Vec v);
	bool (*full) (Vec v);

	void *(*get) (Vec v);
	void *(*get_nth) (Vec v, long n);
	void *(*next) (Vec v);
	void *(*previous) (Vec v);
	VecNamespace (*forward) (Vec v);
	VecNamespace (*backward) (Vec v);

	void *(*front) (Vec v);
	void *(*back) (Vec v);
	void *(*nth) (Vec v, long n);

	VecNamespace (*clear) (Vec v);
	VecNamespace (*erase) (Vec v, long start, long end);

	VecNamespace (*print) (Vec v);
	VecNamespace (*stats) (Vec v);

	VecNamespace (*swap) (Vec v, long a, long b);
	VecNamespace (*reverse) (Vec v);
	VecNamespace (*sort) (Vec v);

	VecNamespace (*resize) (Vec v, long capacity);
	VecNamespace (*reserve) (Vec v, long capacity);
};



#endif