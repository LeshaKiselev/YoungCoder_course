#include <stdio.h>

int main() {
    int m,d,res;
    scanf("%d %d", &m, &d);

    switch (m){
        case 1: printf("%d",0+d); break;
        case 3: printf("%d",59+d);break;
        case 5: printf("%d",120+d);break;
        case 7: printf("%d",181+d);break;
        case 8: printf("%d",212+d);break;
        case 10:printf("%d",273+d);break;
        case 12:printf("%d",334+d);break; //==31
        case 2: printf("%d",31+d);break;  //==28
        case 4: printf("%d",90+d);break;
        case 6: printf("%d",151+d);break;
        case 9: printf("%d",243+d);break;
        case 11:printf("%d",304+d);break; //==30
        default:printf("ERROR!\n");break;
    }
    return 0;
}
