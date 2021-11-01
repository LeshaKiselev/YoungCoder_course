#include <stdio.h>

int main() {
  double r, h, pi, R, Vc, Vk;
  scanf("%lf %lf", &r, &h);
  pi=3.14159265358979323846;
  R=r*r;
  Vc=h*pi*R;
  Vk=1/3.0*h*pi*R;
  printf("%.2lf %.2lf", Vc, Vk);
  return 0;
}
