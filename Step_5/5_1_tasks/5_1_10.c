#include <stdio.h>
#include <math.h>

int main() {
    int k, k2, k10;
    scanf("%d", &k);
    k2=pow(2,30);
    k10=pow(10,9);
    double res;
    res=(double)k*(k2-k10);
    printf("%.0lf", res);
    return 0;
}
