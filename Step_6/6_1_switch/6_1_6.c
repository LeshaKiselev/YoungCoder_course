#include <stdio.h>

int main() {
  int a, b;
  char c;
  double res;

  scanf("%c %d %d", &c, &a, &b);

  switch (c) {
          case '+': res=a+b; printf("%.2lf",res);  break;
          case '-': res=a-b; printf("%.2lf",res);  break;
          case '*': res=a*b; printf("%.2lf",res);  break;
          case '/': res=a/b; printf("%.2lf",res);  break;
           default: printf("ERROR!\n"); break;
  }

  return 0;
}
