#include <stdio.h>

int main(void) {

  int N = 0;

  scanf("%d", &N);

  int max = -9999;
  int number = 0;

  for (int i = 1; i <= N; i++){
    scanf("%d", &number);
    if (max < number)
      max = number;
  }

  printf("%d\n", max);

  return 0;
}
