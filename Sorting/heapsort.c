
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

void heapsort(int *a, int size) {

    int i = 0, j = 0, loc = 0;
    int tmp;

    /* find max heap */
    tmp = a[0];
    for (i = 0; i < size; i++) {
         if (a[i] > tmp) {
             tmp = a[i];
             loc = i;
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

     heapsort(a, size);
}
