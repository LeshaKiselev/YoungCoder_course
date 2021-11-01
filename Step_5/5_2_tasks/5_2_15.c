#include <stdio.h>

int main() {
  int k,res;
  scanf("%d",&k);
  res=((k+2)%7)%7;
  printf("%d",res);
  return 0;
}
