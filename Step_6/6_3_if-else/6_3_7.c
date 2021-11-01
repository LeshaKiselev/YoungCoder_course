#include <stdio.h>

int main() {
    int b1,b2,b3,B;
    scanf("%d %d %d", &b1, &b2, &b3);
    switch(b1*100+b2*10+b3)
	{
	case (248):
	case (428):
	case (284):
	case (842):
	case (482):
	case (824):printf("open");break;
	default:printf("close");break;
    }
    return 0;
}
