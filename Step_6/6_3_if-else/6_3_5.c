#include <stdio.h>

int main(){
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    printf(x1*x1+y1*y1 < x2*x2+y2*y2 ? "1" : "2" );
}
