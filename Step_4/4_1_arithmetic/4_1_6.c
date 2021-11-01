#include <stdio.h>

int main() {
  int res,r,r1,r2,r3;
  scanf("%d",&r);

  r1=r%10;
  r2=r%100/10;
  r3=r/100;

  res = r1+r2+r3;
  printf("%d\n", res);

  return 0;
}
