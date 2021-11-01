#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);

    switch (k / 10){
        case 1: printf("Мне %d лет", k); break;
        default:
            switch (k % 10){
                case 1: printf("Мне %d год", k); break;
                case 2:
                case 3:
                case 4:  printf("Мне %d года", k); break;
                default: printf("Мне %d лет", k); break;
            }
    }
  return 0;
}
