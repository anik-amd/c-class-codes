#include <stdio.h>
#include <string.h>

void convert_time(int *hour, int *minutes, char *am_pm) {
  if (*hour == 12) {
    *hour = 0;
  }
  if (*am_pm == 'P') {
    *hour = *hour + 12;
  }
}

int main() {
  int hour, minutes;
  char div;
  char am_pm;

  scanf("%d %c %d %c", &hour, &div, &minutes, &am_pm);

  convert_time(&hour, &minutes, &am_pm);

  if (!minutes) {
    printf("%d : 00", hour);
  } else {
    printf("%d : %d", hour, minutes);
  }

  return 0;
}