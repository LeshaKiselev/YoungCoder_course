#include <stdio.h>

int main() {
  int n;
  do {
    scanf("%d", &n);
    switch(n){
      case 0: break;
      case 1:
        printf("ERROR!");
        break;
      default:
        printf("%d ", n);
        break;}
  }while(n != -9999);
  return 0;
}
