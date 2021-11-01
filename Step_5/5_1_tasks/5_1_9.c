#include <stdio.h>

int main() {
  int A, a1, a2, a3, a4;
  scanf("%d", &A);
  a1=A%10;     //единицы
  a2=A%100/10; //десятки
  a3=A%1000/100;    //сотни
  a4=A/1000;   //тысячи
  double res;
  res=(double)(a4*a2)/(a3*a1);
  printf("%.2lf", res);
  return 0;
}
