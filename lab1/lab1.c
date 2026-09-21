#define _GNU_SOURCE
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

  bool running = true;

  while (running == true) {

    char *line = NULL;
    size_t size = 0;

    printf("Please enter some text: ");

    getline(&line, &size, stdin);

    printf("Tokens: \n");

    char *saveptr;
    char *token = strtok_r(line, " ,", &saveptr);

    while (token != NULL) {
      printf("%s\n", token);
      token = strtok_r(NULL, " ,", &saveptr);
    }

    free(line);
  }

  return 0;
}
