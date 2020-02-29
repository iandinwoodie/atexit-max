#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
  long a = sysconf(_SC_ATEXIT_MAX);
  printf("ATEXIT_MAX = %ld\n", a);

  return EXIT_SUCCESS;
}
