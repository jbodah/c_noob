#include <stdio.h>

main() {
  long nc;

  nc = 0;

  // while
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);

  /*
  double dc;

  // for
  for (dc = 0; getchar() != EOF; ++dc)
    ;
  printf("%.0f\n", dc);
  */
}
