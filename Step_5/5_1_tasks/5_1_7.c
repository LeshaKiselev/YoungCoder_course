#include <stdio.h>

int main() {
  int M, N, res1, res2;
  scanf("%d %d", &M, &N);
  res1=(M/N)%10;
  double x;
  x=((double)M/N*10);
  res2=(int)x%10;
  printf("%d %d", res1, res2);
  return 0;
}
