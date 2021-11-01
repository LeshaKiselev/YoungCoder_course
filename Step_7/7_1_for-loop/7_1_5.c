#include <stdio.h>

int main() {
    int k,m;
    scanf("%d %d",&k,&m);
    for (int i=k;i<=m;i++){
        printf("%d ",(m-i)+k);
    }
    return 0;
}
