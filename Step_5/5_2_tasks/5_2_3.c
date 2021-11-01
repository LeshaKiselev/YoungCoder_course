#include <stdio.h>
//a%b = (a%b + b)%b
int main() {
  int k, K;
  scanf("%d", &k);
  k=abs(k);
  K=1-2*(k%2);
  printf("%d",K);
  return 0;
}
