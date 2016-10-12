#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define EXIT_OK       0
#define EXIT_NO_ARG   1

#define BUFFER_SIZE   10

void returnable(void) {
  printf("Exiting! You have redirected execution.\n");
  exit(0);
}

static int overflowable(const char* buffer) {
  char internal_buffer[BUFFER_SIZE];
  strcpy(internal_buffer, buffer);
  return EXIT_OK;
}

int main(int argc, char* argv[]) {
  if (argc < 2) return EXIT_NO_ARG;
  printf("Staring...\n...calling overflow function.\n");
  printf("...submitted buffer: %s.\n", argv[1]);
  int ret = overflowable(argv[1]);
  return ret;
}
