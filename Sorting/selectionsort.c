
#include <reqhdrs.h>

void printarr(int *a, int size) {

    int i = 0;
     while (i < size) {
       printf("\t %d", a[i]);
       if (i == size-1)
           printf ("\n");
       i++;
     }
}

/* find min or find max in each unsorted subarray and place it in sorted array */
/* inplace, O(n^2), ~n comparisons for each element */
void selectionsort(int *a, int size) {

    int i = 0, j = 0, loc = 0;
    int tmp;

    for (i = 0; i < size-1; i++) {
         tmp = a[i];
         loc = i;
      /* find min */
      for (j = i+1; j < size; j++) {
         if (tmp > a[j]) {
             tmp = a[j];
             loc = j;
         }
      }
      /* min is in tmp, swap min to current i element */
      if (i != loc) {
         a[loc] = a[i];
         a[i] = tmp;
      }
      printarr(a, size);
    }
}

void main(void) {

     int i = 0;
     int a[] = {9,6,5,0,8,2,7,1,3};
     int size = sizeof(a)/sizeof(int);

     selectionsort(a, size);
}
