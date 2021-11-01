#include <stdio.h>

int main() {
  int k,x,x1,x2,x3,x4,res;
  scanf("%d %d", &k, &x);
  x1=(x%10)*pow(k,0);
  x2=(x%100)/10*pow(k,1);
  x3=(x/100)%10*pow(k,2);
  x4=(x/1000)*pow(k,3);
  res=x1+x2+x3+x4;
  printf("%d",res);
  return 0;
}
