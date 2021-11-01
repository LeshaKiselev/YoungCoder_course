#include <stdio.h>

int main() {
  double x,y,res,r1,r2,r3,r4;
  scanf("%lf %lf", &x, &y);
  r1=(x>0 && y>0)*1;
  r2=(x<0 && y>0)*2;
  r3=(x<0 && y<0)*3;
  r4=(x>0 && y<0)*4;
    res=r1+r2+r3+r4;
  printf("%.0lf", res);
  return 0;
}
