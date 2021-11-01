#include <stdio.h>

int main() {
  int a, b;
  char c;

  scanf("%d %d %c",&a, &b, &c);
  if (b==0 && c=='/'){
      printf("ERROR!\n");
      return 0;
  }
  switch (c) {
          case '+': printf("%.2lf", (double)a + b); ; break;
          case '-': printf("%.2lf", (double)a - b); ; break;
          case '*': printf("%.2lf", (double)a * b); ; break;
          case '/': printf("%.2lf", (double)a / b); ; break;
          default: printf("ERROR!\n"); break;
  }
  return 0;
}
