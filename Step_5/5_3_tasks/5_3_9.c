#include <stdio.h>
#include <math.h>

int main() {
  int k1,k2,k3,K1, K2;
  scanf("%d %d %d", &k1, &k2, &k3);
  K1=k2%k1;
  K2=k3%k1;
  printf("%d %d", K1, K2);
  return 0;
}
