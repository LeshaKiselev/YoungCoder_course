#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
    if (a<=6){
        printf("дошкольник\n");}
    else{
        if (7<=a&&a<=18){
            printf("школьник\n");}
        else{
            if (19<=a&&a<=59){
                printf("рабочий\n");}
            else{
                if (60<=a){
                    printf("пенсионер\n");}
            }
        }
    }
  return 0;
}
