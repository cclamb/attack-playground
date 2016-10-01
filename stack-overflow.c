#include <stdio.h>
#include <string.h>

#define EXIT_OK       1

#define BUFFER_SIZE   10
static int overflowable(const char* buffer) {
  char internal_buffer[BUFFER_SIZE];
  strcpy(internal_buffer, buffer);
  return EXIT_OK;
}

int main(int argc, char* argv[]) {
  printf("Staring...\n...calling overflow function.\n");
  printf("...submitted buffer: %s.\n", argv[1]);
  int ret = overflowable(argv[1]);
  return ret;
}
