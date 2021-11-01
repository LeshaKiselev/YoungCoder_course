#include <stdio.h>
#include <math.h>

int main() {
  int n,k=1,r=0;
  scanf("%d", &n);
  if(n==1){
      printf("%d", n);}
  else{
  while(k < n){
      k=k*2;
      r++;}
  printf("%d",  r);
  }
  return 0;
}
