#ifndef VEC_TYPES_H_IS_INCLUDED
#define VEC_TYPES_H_IS_INCLUDED

#define VEC_DEFAULT_LENGTH 16

struct Vec {
	void **data;
	long length;
	long capacity;
};

typedef struct Vec *Vec;

Vec vec_new ();
Vec vec_new_n (long capacity);
Vec vec_delete (Vec v);



#endif