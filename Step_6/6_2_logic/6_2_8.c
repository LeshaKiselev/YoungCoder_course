#include <stdio.h>

int main() {
  int x,y,res;
  scanf("%d %d", &x, &y);
     res= 1 == (x==y);
     res= 0 == (x!=y);
  printf("%d",res);
  return 0;
}
