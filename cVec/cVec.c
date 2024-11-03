#include "cVec.h"
#include <stdio.h>
#include <stdlib.h>

cVector *cVec(size_t initial_capacity) {

  // Creating a vector
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

// Creating a vector with an initial value
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

// Push elements in the vector
void cVec_push(cVector *arr, int value) {
  if (arr->size >= arr->capacity) {
    printf("The size has been exceeded");
    return;
  }
  arr->data[arr->size] = value;
  arr->size++;

  return;
}

// Clear the vector

void cVec_free(cVector *arr) {
  free(arr->data);
  arr->size = 0;
}

// Deleting last element of vector

void cVec_pop(cVector *arr) {
  if (arr->size == 0) {
    printf("There is no element in this vector ");
    return;
  }

  arr->size = arr->size - 1;
}

// Element of an index of the vector
int cVec_get(cVector *arr, size_t index) {
  if (arr->size <= index) {
    printf("The index is higher than size of the array ");
    return CVEC_OUT_OF_BOUNDS;
  }

  return arr->data[index];
}

// Size of the vector
int cVec_size(cVector *arr) { return arr->size; }

// Sorting the elements

// swap function
void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

// Partition for quick sort
int partition(cVector *arr, int low, int high, bool ascending) {
  int pivot = arr->data[high];
  int i = low - 1;
  for (int j = low; j < high; j++) {
    if ((ascending && arr->data[j] < pivot) ||
        (!ascending && arr->data[j] > pivot)) {
      i++;
      swap(&arr->data[i], &arr->data[j]);
    }
  }
  swap(&arr->data[i + 1], &arr->data[high]);

  return i + 1;
}

// Quick Sort

void quicksort(cVector *arr, int low, int high, bool ascending) {
  if (low < high) {
    int element = partition(arr, low, high, ascending);
    quicksort(arr, low, element - 1, ascending);
    quicksort(arr, element + 1, high, ascending);
  }
}

// Vector sorting

void cVec_sort(cVector *arr, bool ascending) {
  int low = 0;
  int high = arr->size - 1;
  quicksort(arr, low, high, ascending);
}
