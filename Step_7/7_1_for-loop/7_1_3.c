#include <stdio.h>

int main() {
    int k,m;
    scanf("%d %d",&k,&m);
    if (k<0){
        k=1;
    }
    for (int i=k;i<=m;i++){
        printf("%d ",i);
    }
    return 0;
}
