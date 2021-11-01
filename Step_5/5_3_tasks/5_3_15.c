#include <stdio.h>
#include <math.h>

int main() {
  double k,n0,e,T,lambda,ln2,N;
  scanf("%lf",&k);

  T=5570.0;
  ln2=log(2.0);
  e=2.718281828;
  n0=75;
  lambda=ln2/T;
  N=n0*pow(e,-lambda*k);
  
  printf("%.2lf",N);
  return 0;
}
