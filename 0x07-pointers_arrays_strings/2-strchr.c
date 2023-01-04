#include "main.h"

/**
 * main - check the code 
 *
 * Return: 0
 */
char *_strchr(char *s, char c) {
  while (*s != '\0') {
    if (*s == c) {
      return s;
    }
    s++;
  }
  return NULL;
}
