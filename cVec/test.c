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

  printf("The elements of array1 are : ");
  for (int i = 0; i < cVec_size(arr1); i++) {
    printf("%d ", cVec_get(arr1, i));
  }
  printf("\n");
  printf("The elements of array2 are : ");
  for (int i = 0; i < cVec_size(arr2); i++) {
    printf("%d ", cVec_get(arr2, i));
  }

  printf("\n");

  int pop1 = cVec_pop(arr1);
  int pop2 = cVec_pop(arr2);

  printf("The popped elements are : %d %d \n", pop1, pop2);

  printf("The size of array1 is %d \n", cVec_size(arr1));
  printf("The size of array2 is %d \n", cVec_size(arr2));

  printf("The last element is %d \n", cVec_get(arr1, 2));
  printf("The last element is %d \n", cVec_get(arr2, 9));
  cVec_free(arr1);
  cVec_free(arr2);
  printf("The size after freeing is %d\n", cVec_size(arr1));
  printf("The size after freeing is %d\n", cVec_size(arr2));

  cVec_push(arr2, 9);
  cVec_push(arr2, 15);
  cVec_push(arr1, 6);
  cVec_push(arr1, 2);
  cVec_push(arr1, 4);

  cVec_sort(arr1, true);
  cVec_sort(arr2, false);

  printf("Elements after sorting the array : \n");
  printf("First array elements are ");
  for (int i = 0; i < cVec_size(arr1); i++) {
    printf("%d ", cVec_get(arr1, i));
  }
  printf("\n");
  printf("Second array elements are ");

  for (int j = 0; j < cVec_size(arr2); j++) {
    printf("%d ", cVec_get(arr2, j));
  }

  printf("\n");

  printf("The result of binary search : ->>> \n");

  int low = lower_bound(arr1, 4);
  int high = upper_bound(arr1, 4);

  printf("The result of lower bound binary search is : %d \n",
         cVec_get(arr1, low));
  printf("The result of upper bound binary search is : %d \n",
         cVec_get(arr1, high));

  return 0;
}
