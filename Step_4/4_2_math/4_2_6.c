#include <stdio.h>

int main() {
    double x1, y1, x2, y2, res;
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    res=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    printf("%0.2lf", res);
    return 0;
}
