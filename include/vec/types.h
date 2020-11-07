#ifndef VEC_TYPES_H_IS_INCLUDED
#define VEC_TYPES_H_IS_INCLUDED

#include <stdbool.h>

#define VEC_DEFAULT_LENGTH 16
#define VEC_NAME_LENGTH 64

struct VecNamespace;
typedef const struct VecNamespace *const VecNamespace;

struct Vec {
	void **data;
	long length;
	long capacity;
	long cursor;

	char name[VEC_NAME_LENGTH];
	long columns;

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

	long (*length) (Vec v);
	long (*capacity) (Vec v);

	bool (*empty) (Vec v);
	bool (*full) (Vec v);

	VecNamespace (*push) (Vec v, void *e);
	void *(*pop) (Vec v);

	VecNamespace (*resize) (Vec v, long capacity);
	VecNamespace (*reserve) (Vec v, long capacity);

	void *(*front) (Vec v);
	void *(*back) (Vec v);
	void *(*nth) (Vec v, long n);

	void *(*get) (Vec v);
	void *(*get_nth) (Vec v, long n);
	void *(*next) (Vec v);
	void *(*previous) (Vec v);
	VecNamespace (*forward) (Vec v);
	VecNamespace (*backward) (Vec v);

	VecNamespace (*swap) (Vec v, long a, long b);
	VecNamespace (*reverse) (Vec v);
	VecNamespace (*shuffle) (Vec v);
	VecNamespace (*sort) (Vec v);

	Vec (*slice) (Vec v, long start, long end);
	Vec (*subvec) (Vec v, long start, long length);
	Vec (*prefix) (Vec v, long length);
	Vec (*suffix) (Vec v, long length);
	Vec (*copy) (Vec v);

	Vec (*deep_slice) (Vec v, long start, long end);
	Vec (*deep_subvec) (Vec v, long start, long length);
	Vec (*deep_prefix) (Vec v, long length);
	Vec (*deep_suffix) (Vec v, long length);
	Vec (*deep_copy) (Vec v);

	VecNamespace (*clear) (Vec v);
	VecNamespace (*erase) (Vec v, long start, long end);

	VecNamespace (*set_name) (Vec v, char *name);
	VecNamespace (*set_less_than) (Vec v, bool (*less_than) (void *e1, void *e2));
	VecNamespace (*set_hash_code) (Vec v, bool (*hash_code) (void *e, char *s));
	VecNamespace (*set_to_string) (Vec v, bool (*to_string) (void *e, char *s));

	VecNamespace (*print) (Vec v);
	VecNamespace (*print_slots) (Vec v);
	VecNamespace (*print_slots_compact) (Vec v);
	VecNamespace (*print_stats) (Vec v);

	VecNamespace (*me) ();
};



#endif