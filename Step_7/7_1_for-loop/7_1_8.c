#include <stdio.h>

int main() {
    int a,b,i,j;
    scanf("%d %d",&a ,&b);
    for (int i = a; i <= b; i++){
        for (int j = 0; j <= i - a; j++){
            printf("%5d", i);}
    }
    return 0;
}
