#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int rand_digit = rand();
    printf("%d\n",rand()%4);
    return 0;
}
