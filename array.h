#ifndef LIB_ARRAY_H_
#define LIB_ARRAY_H_

#include <stdlib.h>
typedef struct _array_st array_t;

int array_init(array_t *array);
void array_destory(array_t *array);
size_t array_size(array_t *array);
int array_insert(array_t* array, size_t idx, void *elm);
int array_put(array_t *array, void *elm);
void* array_get(array_t *array, size_t idx);
void* array_del(array_t *array, size_t idx);

#endif


