#include <stdio.h>

int main() {
  int k,x1,x2,x3,x4,y1,y2,y3,y4,A;
  scanf("%d %d %d %d %d",&k,&x1,&x2,&x3,&x4);
  A=26;
  y1=(x1+k)%A;
  y2=(x2+k)%A;
  y3=(x3+k)%A;
  y4=(x4+k)%A;
  printf("%d %d %d %d",y1,y2,y3,y4);
  return 0;
}
