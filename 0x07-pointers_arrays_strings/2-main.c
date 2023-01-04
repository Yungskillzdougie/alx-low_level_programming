#include <stdio.h>
#include <stdlib.h>

char *_strchr(char *s, char c);

int main(int argc, char **argv) {
  if (argc != 3) {
    printf("Usage: %s <string> <character>\n", argv[0]);
    return 1;
  }

  char *s = argv[1];
  char c = argv[2][0];  // take the first character of the second argument

  char *ptr = _strchr(s, c);

  if (ptr == NULL) {
    printf("Character '%c' not found in string '%s'\n", c, s);
  } else {
    printf("Character '%c' found at index %ld in string '%s'\n", c, ptr - s, s);
  }

  return 0;
}

