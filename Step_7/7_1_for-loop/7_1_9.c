#include <stdio.h>

int main() {
    int a,b,i,j;
    scanf("%d %d",&a ,&b);
    for (int i = a; i <= b; i++){
        for (int j = 1; j <= i; j++){
            printf("%4d", i);}
    }
    return 0;
}
