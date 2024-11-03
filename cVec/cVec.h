#ifndef CVEC_H
#define CVEC_H

#include <stddef.h>
#define CVEC_OUT_OF_BOUNDS -1
typedef struct {
  int *data;
  size_t size;
  size_t capacity;
} cVector;

cVector *cVec(size_t initial_capacity);
cVector *cVec_val(size_t initial_capacity, int value);

void cVec_free(cVector *arr);
void cVec_push(cVector *arr, int value);
void cVec_pop(cVector *arr);
int cVec_cur(cVector *arr, size_t index);
int cVec_size(cVector *arr);
#endif
