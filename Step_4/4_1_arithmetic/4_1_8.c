#include <stdio.h>

int main() {
    int a;   //Угол в градусах
    float r; //угол в радианах
    double pi;
    scanf("%d", &a);
    pi = 3.1415926;
    r=pi/180*(double)a;
    int res;
    printf("%0.2lf",r);
    return 0;
}
