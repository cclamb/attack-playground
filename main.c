#include <stdio.h>

#define OK      1
#define FAILURE 0

int main(int arc, char* argv[]) {
  const char* msg = "Hola senor! Looks like we got the right CPU type.";
  printf("%s\n", msg);
  return OK;
}

