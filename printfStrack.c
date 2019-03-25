#include <stdio.h>

int g1, g2, g3, g4, g5;
void main() {
  int l1, l2, l3, l4, l5;

  printf("global address 1:\t%016p\n", &g1);
  printf("global address 2:\t%016p\n", &g2);
  printf("global address 3:\t%016p\n", &g3);
  printf("global address 4:\t%016p\n", &g4);
  printf("global address 5:\t%016p\n", &g5);
  printf("\n");
  printf("local address 1:\t%016p\n", &l1);
  printf("local address 2:\t%016p\n", &l2);
  printf("local address 3:\t%016p\n", &l3);
  printf("local address 4:\t%016p\n", &l4);
  printf("local address 5:\t%016p\n", &l5);
}
