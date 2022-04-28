#include <stdio.h>

int main() {
  int mark, ask = 1;
  int more_80, more_60, more_40, less_40, range_81_100, range_61_80,
      range_41_60, range_0_40;
  more_80 = more_60 = more_40 = less_40 = range_81_100 = range_61_80 =
      range_41_60 = range_0_40 = 0;

  while (ask) {
    printf("Enter mark: ");
    scanf("%d", &mark);
    if (mark > 100 || mark < 0) {
      printf("Invalid input");
      continue;
    }
    if (mark >= 81) {
      more_80++;
      more_60++;
      more_40++;
      range_81_100++;
    } else if (mark >= 61) {
      more_60++;
      more_40++;
      range_61_80++;
    } else if (mark >= 41) {
      more_40++;
      range_41_60++;
    } else {
      less_40++;
      range_0_40++;
    }
    printf("Continue? (0/1)");
    scanf("%d", &ask);
  }

  printf("(a) More than 80 marks: %d \n", more_80);
  printf("(b) More than 60 marks: %d \n", more_60);
  printf("(c) More than 40 marks: %d \n", more_40);
  printf("(d) Less than or equal to 40 marks: %d \n", less_40);
  printf("(e) In range 81 to 100: %d \n", range_81_100);
  printf("(f) In range 61 to 80: %d \n", range_61_80);
  printf("(g) In range 41 to 60: %d \n", range_41_60);
  printf("(e) In range 0 to 41: %d \n", range_0_40);

  return 0;
}