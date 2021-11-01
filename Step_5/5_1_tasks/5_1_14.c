#include <stdio.h>
#include <math.h>

int main() {
    double x, e, r;
    scanf("%lf", &e);
    x=exp(e);
    r=1.0+((e/(1.0*1.0))+((e*e)/(1.0*2.0))+((e*e*e)/(1.0*2.0*3.0))+((e*e*e*e)/(1.0*2.0*3.0*4.0))
    +((e*e*e*e*e)/(1.0*2.0*3.0*4.0*5.0)));
    printf("%.6lf\n%.6lf", x, r);
  return 0;
}
