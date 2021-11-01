#include <stdio.h>
#include <math.h>

int main() {
  double h,p,z,e,p0;
  scanf("%lf",&h);
  e=2.7182818284590452353602874713527;
  p0=1.29;
  z=pow(10,-4)*1.25;
  p=p0*pow(e,-h*z);
  printf("%.2lf",p);
  return 0;
}
