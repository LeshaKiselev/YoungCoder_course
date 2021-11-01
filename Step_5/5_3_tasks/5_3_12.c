#include <stdio.h>

int main() {
  int X,x1,x2,x3,x4,y1,y2,y3,y4,cri;
  scanf("%d",&X);

  x1=X/1000;
  x2=X/100%10;
  x3=X%100/10;
  x4=X%10;

  y1=((x1+7)%10)*10;
  y2=((x2+7)%10);
  y3=((x3+7)%10)*1000;
  y4=((x4+7)%10)*100;

  cri=y1+y2+y3+y4;
  printf("%d",cri);
  return 0;
}
