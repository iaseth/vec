#ifndef VEC_TYPES_H_IS_INCLUDED
#define VEC_TYPES_H_IS_INCLUDED

#define VEC_DEFAULT_LENGTH 16

struct Vec {
	void **data;
	long length;
	long capacity;
};

typedef struct Vec *Vec;



#endif