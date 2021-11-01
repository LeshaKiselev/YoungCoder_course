#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int k, ans;
    scanf("%d", &k);

    ans=k%2;

    switch (ans){
        case 1: printf("Любит\n"); break;
        case 0: printf("Не любит\n"); break;
        default: break;
    }
    return 0;
}
