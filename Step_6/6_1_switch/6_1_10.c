#include <stdio.h>

int main() {
  int k,x;
  scanf("%d %d", &k, &x);
    switch (k){
        case 1: printf("%d",x);break;
        case 2: printf("%d",(x%10)*((x/10)%10));break;
        case 3: printf("%d",(x%10)*((x/10)%10)*(x/100));break;
        case 4: printf("%d",(x%10)*((x/10)%10)*(x/100)*(x/1000));break;
        default:printf("ERROR!\n");break;
    }
  return 0;
}
