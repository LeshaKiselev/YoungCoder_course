#include <stdio.h>
#include <math.h>

int main() {
  int n,k=1;
  scanf("%d", &n);
  while(pow(2, k) <= n){
      printf("%d ",  k);
      k++;}
  return 0;
}
