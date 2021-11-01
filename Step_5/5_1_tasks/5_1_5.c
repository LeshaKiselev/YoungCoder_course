#include <stdio.h>
#include <math.h>

int main() {
  double r, R, pi, h, S;
  scanf("%lf %lf", &r, &R);
  pi=3.14159265358979323846;
  h=R-r;
  S=((pow(R,2))-pow(r,2))*pi*100;
  printf("%.0lf %.2lf", h, S);
  return 0;
}
