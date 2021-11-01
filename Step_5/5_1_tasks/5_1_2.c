#include <stdio.h>

int main() {
  int x, S, H, V;
  scanf("%d", &x);
  S=x*x;
  H=S+S+S+S+S+S;
  V=x*x*x;
  printf("%d %d %d", S, H, V);
  return 0;
}
