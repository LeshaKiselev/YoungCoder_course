#include <stdio.h>

int main() {
  int K, k1, k2, k3, res;
  scanf("%d", &K);
  k1=K%10;
  k2=K%100/10;
  k3=K/100;
  printf("%d%d%d",k2,k1,k3);
    return 0;
}
