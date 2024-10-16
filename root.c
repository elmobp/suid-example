#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main (int argc, char *argv[]) {
  setuid(geteuid());
  system(argv[1]);
  return 0;
}

