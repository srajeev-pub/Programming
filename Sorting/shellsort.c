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

void swap(int *a, int loc1, int loc2) {
     int tmp = a[loc1];
     a[loc1] = a[loc2];
     a[loc2] = tmp;
}

/* inplace sorting (O(n^2) - why?) */
/* combination of insertion and bubble sort */
void shellsort(int *a, int size) {

    int i = 0, j = 0, loc = 0;
    int tmp;
    int swapped = 1;
    int gap = size/2;

    while (gap != 0) {
       for (i = gap; i < size; i++) {
           for (j = i; j > 0 && j-gap >= 0; j=j-gap) {
               /* cmp and xchg jth element to j-gap element */
               if (a[j] < a[j-gap]) {
                  swap(a, j, j-gap);
               }
           }
           printf ("for ith element (%d)\n", i);
           printarr(a,size);
       }
       printf("...................................\n");
       printf ("for gap (%d)\n",gap);
       printarr(a,size);
       printf("...................................\n");
       gap = gap/2;
    }
}

void main(void) {

     int i = 0;
     int a[] = {9,6,5,0,8,2,7,1,3};
     int size = sizeof(a)/sizeof(int);

     printf ("orig. arr is:\n");
     printarr(a,size);
     printf("..............................\n");
     shellsort(a, size);
}
