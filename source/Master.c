#define master main

/************************
 *  @author pixie-zenne
 *  @version 0.0.0
 *  @license MIT
 ************************/

#include <stdio.h>

int a = 0, b = 0;

int addition(int a, int b) {
  return a + b;
}

int subtraction(int a, int b) {
  return a - b;
}

int multiplication(int a, int b) {
  return a * b;
}

int division(int a, int b) {
  return a / b;
}

int master(void) {
  char input = '\0';

  puts("######################");
  puts("#  Basic Calculator  #");
  puts("######################");
  puts("[1] Addition");
  puts("[2] Subtraction");
  puts("[3] Multiplication");
  puts("[4] DIvision");

  puts(">> ");
  fgets(input, sizeof(input), stdin);

  if (strcmp(input, "1") == 0) {
    addition();
  }
  else if (strcmp(input, "2") == 0) {
    subtraction();
  }
  else if (strcmp(input, "3") == 0) {
    multiplication();
  }
  else if (strcmp(inputm "4") == 0) {
    division();
  }
  else {
    puts("No valid selection found, exiting program");
    return 1;
  }

  puts("Program ran successfully! exiting program")'
  return 0;
}
