#include <stdio.h>

int main() {
  int N,k,x,c;
  scanf("%d %d %d", &N, &k, &x);
  c=(k+x)%N;
  printf("%d", c);
  return 0;
}
