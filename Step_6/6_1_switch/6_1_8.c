#include <stdio.h>
int main(void){

  char s;
  int age, height, weight;
  double bov_m, bov_f;

scanf("%c %d %d %d", &s, &age, &height, &weight);
  bov_m = 10*weight + 6.25*height - 5*age + 5;
  bov_f = 10*weight + 6.25*height - 5*age - 161;

  switch (s){
    case 'm':  printf("|  BMR  |\n|%.2lf|\n", bov_m); break;
    case 'f':  printf("|  BMR  |\n|%.2lf|\n", bov_f); break;
    default: printf("ERROR!\n");break;
  }
return 0;
}
