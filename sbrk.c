#include <stdio.h>
#include <unistd.h>

/*
 * The program break is the address of the first location beyond the current
 * end of the data region
 *
 * int brk(void *end_data_segment);
 * void *sbrk(intptr_t increment);
*/

void main () {
  void* margin = sbrk(0);
  printf("margin:\t%016p\n", margin);

  int intsize = sizeof(int);
  int delta = 5 * intsize;
  int* i0 = NULL;
  int* i1 = NULL;
  int* i2 = NULL;
  int* i3 = NULL;
  int* i4 = NULL;

  if (brk(margin + delta)) {
    printf("not enough memory\n");
  } else  {
    i0 = margin + 0 * intsize;
    *i0 = 12;
    
    i1 = margin + 1 * intsize;
    *i1 = 34;
    
    i2 = margin + 2 * intsize;
    *i2 = 56;
    
    i3 = margin + 3 * intsize;
    *i3 = 78;

    i4 = margin + 4 * intsize;
    *i4 = 90;

    printf("*(%016p) = %d\n", i0, *i0);
    printf("*(%016p) = %d\n", i1, *i1);
    printf("*(%016p) = %d\n", i2, *i2);
    printf("*(%016p) = %d\n", i3, *i3);
    printf("*(%016p) = %d\n", i4, *i4);

    printf("margin:\t%016p\n", sbrk(0));
  }
}
