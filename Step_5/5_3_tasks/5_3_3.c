#include <stdio.h>

//1 дюйм = 0,0254;
//1 фут = 0,3048;

int main() {
  double F,D,FD;
  scanf("%lf %lf", &F, &D);
  FD=(F*0.3048)+(D*0.0254);
  printf("%.0lf\'%.0lf\" = %.2lfm\.", F, D, FD);
  return 0;
}
