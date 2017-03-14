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

/* inplace sorting, O(n^2), O(1) space */
void bubblesort(int *a, int size) {

    int i = 0, j = 0, loc = 0;
    int tmp;
    int swapped = 1;

    /* swapped will be 0 once we know array is sorted in final pass */
    while (swapped == 1) {
       /* base condition to stop sorting */
       swapped = 0;
       for (i = 0; i < size-1; i++) {
            if (a[i] > a[i+1]) {
                swap (a, i, i+1);
                /* condition to continue bubble sort */
                swapped = 1;
            }
       }
       printarr(a, size);
    }
}

void main(void) {

     int i = 0;
     int a[] = {9,6,5,0,8,2,7,1,3};
     int size = sizeof(a)/sizeof(int);

     bubblesort(a, size);
}
