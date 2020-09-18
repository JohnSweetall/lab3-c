// Author: John Sweetall jts6052@psu.edu
// Collaborator: Liam Hooks lrh5428 @psu.edu
// Collaborator: Hunter Fristick hjf5143@psu.edu
// Collaborator: Jacob Henderson jrh6433@psu.edu
// Section: 2
// Breakout: 4

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n) {
  if (n == 0){
    return 0;
  }
  else {
    return n + sum_n(n-1);
  }
}

void print_n(const char *s, int n) {
  if (n == 0){
    return;
  }
  else {
    printf("%s\n", s);
    print_n(s, n-1);
  }
}

int main(void) {
  int integer1 = atof(readline("Enter an int: "));
  printf("sum is %i.\n", sum_n(integer1));
  char*string = readline("Enter a string: ");
  print_n(string, integer1);
  return 0;
}