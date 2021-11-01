#include <stdio.h>

int main() {
  int x1,x2,x3,x4,x5;
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
    x1=abs(x1);
    x2=abs(x2);
    x3=abs(x3);
    x4=abs(x4);
    x5=abs(x5);

  int xr1,xr2,xr3,xr4,xr5;
    xr1=2*(x1%2)-1;
    xr2=2*(x2%2)-1;
    xr3=2*(x3%2)-1;
    xr4=2*(x4%2)-1;
    xr5=2*(x5%2)-1;

  int xr,res;
  xr=(xr1+xr2+xr3+xr4+xr5);
  res= xr;
  printf("%d",res);
  return 0;
}
