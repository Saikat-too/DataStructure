#include "cVec.c"
#include "cVec.h"
#include <stdio.h>
int main(int argc, char *argv[]) {
  cVector *arr1 = cVec(10);
  cVector *arr2 = cVec_val(10, 3);

  cVec_push(arr1, 5);
  cVec_push(arr1, 8);
  printf("Thi size of the array1 is %d \n", cVec_size(arr1));
  printf("The size of the array2 is %d \n", cVec_size(arr2));

  printf("The elements of array1 is  \n");
  for (int i = 0; i < cVec_size(arr1); i++) {
    printf("%d\n", cVec_cur(arr1, i));
  }
  printf("The elements of array2 is \n");
  for (int i = 0; i < cVec_size(arr2); i++) {
    printf("%d\n", cVec_cur(arr2, i));
  }

  cVec_pop(arr1);
  cVec_pop(arr2);

  printf("The size of array1 is %d \n", cVec_size(arr1));
  printf("The size of array2 is %d \n", cVec_size(arr2));

  printf("The last element is %d \n", cVec_cur(arr1, 2));
  printf("The last element is %d \n", cVec_cur(arr2, 9));

  cVec_free(arr1);
  cVec_free(arr2);

  printf("The size after freeing is %d\n", cVec_size(arr1));
  printf("The size after freeing is %d\n", cVec_size(arr2));

  printf("Need to do the sorting now\n ");

  return 0;
}
