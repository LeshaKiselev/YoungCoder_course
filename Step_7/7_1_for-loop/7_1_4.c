#include <stdio.h>

int main() {
    int k,m;
    scanf("%d %d",&k,&m);
    if (k<0){
        k=1;
    }
    int sum;
    sum=0;
    for (int i=k;i<=m;i++){
        printf("%d ",i);
        sum=i-k+1;
    }
    printf("\n%d",sum);
    return 0;
}
