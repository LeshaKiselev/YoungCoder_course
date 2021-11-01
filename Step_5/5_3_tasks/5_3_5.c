#include <stdio.h>

int main() {
  double F,C;
  scanf("%lf", &F);
  C=(F-32)/1.8;
  printf("%.2lf", C);
  return 0;
}
