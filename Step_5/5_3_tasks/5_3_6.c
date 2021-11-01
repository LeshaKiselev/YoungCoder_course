#include <stdio.h>
#include <math.h>

int main() {
  int B,b1,b2,b3,b4,res;
  scanf("%d", &B);
  b1=(B%10)*pow(2,0);
  b2=(B%100)/10*pow(2,1);
  b3=(B/100)%10*pow(2,2);
  b4=(B/1000)*pow(2,3);
  res=b1+b2+b3+b4;
  printf("%d",res);
  return 0;
}
