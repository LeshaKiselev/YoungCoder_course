#include <stdio.h>
#include <math.h>

int main() {
  double a,b,u,pi,res;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&u);
    pi=3.1415923;
    u=u/180.0*pi;
    res=0.5*a*b*sin(u);
    printf("%0.2lf", res);
  return 0;
}
