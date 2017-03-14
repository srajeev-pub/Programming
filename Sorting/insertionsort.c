
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

void insertionsort(int *a, int size) {

    int i = 0, j = 0;
    int tmp;

    for (i = 1; i < size; i++) {
        int tmp = a[i];
        j = i-1;
        while(j >= 0 && a[j] > tmp) {
              a[j+1] = a[j];
              j--;
        }
        a[j+1] = tmp;
      printarr(a, size);
    }
}

/* O(n^2), O(1) inplace sorting algo */
/* no. of comp(linear search) and movements(array) is total n^2 */
/* binary search can be used to reduce comp. to log n or
double linked list can be used to reduce movements but still it is n^2 */
void insertionsort1(int *a, int size) {

    int i = 0, j = 0;
    int tmp;

    for (i = 1; i < size; i++) {
        int tmp = a[i];
      for (j = i-1; j >= 0; j--) {
          if (tmp < a[j]) {
              a[j+1] = a[j]; /* right shift numbers */
              if (j == 0) {
                  a[0] = tmp; /* found spot */
              }
          } else {
              a[j+1] = tmp; /* found spot */
              break;
          }
      }
      printarr(a, size);
    }
}

void main(void) {

     int i = 0;
     int a[] = {9,6,5,0,8,2,7,1,3};
     int size = sizeof(a)/sizeof(int);

     insertionsort(a, size);
}
