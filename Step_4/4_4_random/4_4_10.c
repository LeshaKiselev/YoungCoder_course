#include <stdio.h>
#include <stdlib.h>

int main() {
  int s,e;
  scanf("%d, %d", &s, &e);
  printf("%d\n", s + rand()%(e-s+1));
  return 0;
}
