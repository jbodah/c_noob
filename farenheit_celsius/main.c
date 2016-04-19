#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* prints a farenheit to celsius conversion table */
main() {
  float farenheit, celsius;

  farenheit = LOWER;

  // while loop
  printf("while loop\n");
  while (farenheit <= UPPER) {
    celsius = (5.0 / 9.0) * (farenheit - 32);
    printf("%3.0f %6.1f\n", farenheit, celsius);
    farenheit = farenheit + STEP;
  }

  // for loop
  printf("\nfor loop\n");
  for (farenheit = 0; farenheit <= UPPER; farenheit += STEP)
    printf("%3.0f %6.1f\n", farenheit, (5.0 / 9.0) * (farenheit - 32));

  // constants
}
