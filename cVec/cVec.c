#include "cVec.h"
#include <stdio.h>
#include <stdlib.h>

cVector *cVec(size_t initial_capacity) {

  cVector *arr = (cVector *)malloc(sizeof(cVector));
  if (!arr)
    return NULL;

  arr->data = (int *)malloc(initial_capacity * sizeof(int));

  if (!arr->data) {
    free(arr);
    return NULL;
  }

  arr->size = 0;
  arr->capacity = initial_capacity;
  return arr;
}

cVector *cVec_val(size_t initial_capacity, int initial_value) {
  cVector *arr = cVec(initial_capacity);

  if (arr && arr->data) {
    for (size_t i = 0; i < initial_capacity; i++) {
      arr->data[arr->size] = initial_value;
      arr->size += 1;
    }
  }
  return arr;
}

void cVec_push(cVector *arr, int value) {
  if (arr->size >= arr->capacity) {
    printf("The size has been exceeded");
    return;
  }
  arr->data[arr->size] = value;
  arr->size++;

  return;
}

void cVec_free(cVector *arr) {
  free(arr->data);
  arr->size = 0;
}

void cVec_pop(cVector *arr) {
  if (arr->size == 0) {
    printf("There is no element in this vector ");
    return;
  }

  arr->size = arr->size - 1;
}

int cVec_cur(cVector *arr, size_t index) {
  if (arr->size <= index) {
    printf("The index is higher than size of the array ");
    return CVEC_OUT_OF_BOUNDS;
  }

  return arr->data[index];
}

int cVec_size(cVector *arr) { return arr->size; }
