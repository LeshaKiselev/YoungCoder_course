#include <stdio.h>

int main() {
  double N,mn, RN, Rm, s;
  scanf("%lf", &N);
  s=0.05;
  mn=N*249.5;
  RN=mn/s;
  s=3e-23;
  Rm=mn/s;
  printf("%.0lf %.3e", RN, Rm);
  return 0;
}
