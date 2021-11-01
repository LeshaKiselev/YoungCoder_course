#include <stdio.h>

int main() {

    int a,b,c;
    double d,r;
    scanf("%d", &a);
    scanf ("%d", &b);
    scanf ("%lf", &d);
    c = b-a;
    r = c*d;
    printf ("%0.2lf", r);
    return 0;
}
