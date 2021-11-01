#include <stdio.h>

int main() {
    int d, m;
    scanf("%d %d", &d, &m);
    if (d<30+(m-m/8)%2-(m==2))
        printf("correct");
    else
        printf("error");
  return 0;
}  
