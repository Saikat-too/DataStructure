#ifndef CVEC_H
#define CVEC_H

#include <stdbool.h>
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
int cVec_pop(cVector *arr);
void swap(int *a, int *b);
int partition(cVector *arr, int low, int high, bool ascending);
void quicksort(cVector *arr, int low, int high, bool aschending);
void cVec_sort(cVector *arr, bool ascending);
int cVec_get(cVector *arr, size_t index);
int cVec_size(cVector *arr);
int lower_bound(cVector *arr, int value);
int upper_bound(cVector *arr, int value);
#endif
