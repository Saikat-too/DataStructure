#include "../cVec/cVec.c"
#include <assert.h>
#include <stdio.h>

void test_create() {
  cVector *arr = cVec(10);
  assert(arr != NULL);
  assert(cVec_size(arr) == 0);
  printf("test_create passed\n");
  cVec_free(arr);
}

void test_push_and_get() {
  cVector *arr = cVec(10);
  cVec_push(arr, 10);
  cVec_push(arr, 20);
  assert(cVec_size(arr) == 2);
  assert(cVec_get(arr, 0) == 10);
  assert(cVec_get(arr, 1) == 20);
  printf("test push and get passed\n");
  cVec_free(arr);
}

void test_pop() {
  cVector *arr = cVec(10);
  cVec_push(arr, 15);
  int popped_value = cVec_pop(arr);
  assert(popped_value == 15);
  assert(cVec_size(arr) == 0);
  printf("Test Pop passed\n");
  cVec_free(arr);
}

void test_sort_asc() {
  cVector *arr = cVec(10);
  cVec_push(arr, 3);
  cVec_push(arr, 4);
  cVec_push(arr, 1);
  cVec_push(arr, 2);
  cVec_sort(arr, true);
  assert(cVec_get(arr, 0) == 1);
  assert(cVec_get(arr, 1) == 2);
  assert(cVec_get(arr, 2) == 3);
  assert(cVec_get(arr, 3) == 4);
  printf("cVec Test sort in ascending order passed\n");
  cVec_free(arr);
}

void test_sort_desc() {
  cVector *arr = cVec(10);
  cVec_push(arr, 2);
  cVec_push(arr, 1);
  cVec_push(arr, 3);
  cVec_sort(arr, false);
  assert(cVec_get(arr, 0) == 3);
  assert(cVec_get(arr, 1) == 2);
  assert(cVec_get(arr, 2) == 1);
  printf("cVec Test sort in descending order passed\n");
  cVec_free(arr);
}

void test_bounds() {
  cVector *arr = cVec(10);
  cVec_push(arr, 1);
  cVec_push(arr, 2);
  cVec_push(arr, 3);
  int lb = lower_bound(arr, 2);
  int ub = upper_bound(arr, 1);
  assert(lb == 1);
  assert(ub == 1);
  printf("Test Bounds Passed\n");
  cVec_free(arr);
}

int main(int argc, char *argv[]) {
  test_create();
  test_push_and_get();
  test_pop();
  test_sort_asc();
  test_sort_desc();
  test_bounds();
  printf("All tests passed\n");
  return 0;
}
