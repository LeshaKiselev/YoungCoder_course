#include <stdio.h>

int main() {
    int k;
    double f=1;
    scanf("%d",&k);

    int i;
    for (i=1;i<=k;i++){
        f=f*i;
    }
    printf("%.0lf",f);

    return 0;
}
