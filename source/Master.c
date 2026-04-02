#define master main

/************************
 *  @author pixie-zenne
 *  @version 0.0.0
 *  @license MIT
 ************************/

#include <stdio.h>
#include <string.h>

void print(float result) {
	printf("Result: %.2f\n", result);
	return;
}

void addition(float a, float b) {
	print(a + b);
  return;
}

void subtraction(float a, float b) {
	print(a - b);
  return;
}

void multiplication(float a, float b) {
	print(a * b);
  return;
}

void division(float a, float b) {
	print(a / b);
  return;
}

int master(void) {
	int input = 0;
	float a = 0, b = 0;

  puts("######################");
  puts("#  Basic Calculator  #");
  puts("######################");
  puts("[1] Addition");
  puts("[2] Subtraction");
  puts("[3] Multiplication");
  puts("[4] Division");

  printf(">> ");
  if ((scanf("%i", &input) != 1) || (input > 4 || input < 1)) {
		fprintf(stderr, "No valid selection found, exiting program\n");
		return 1;
	}

	printf("Enter the first number: ");
	if (scanf("%f", &a) != 1) {
		fprintf(stderr, "The first number is invalid, exiting program");
		return 2;
	}

	printf("Enter the second number: ");
	if (scanf("%f", &b) != 1) {
		fprintf(stderr, "The second number is invalid, exiting program");
		return 3;
	}

  if (input == 1) addition(a, b);
  else if (input == 2) subtraction(a, b);
  else if (input == 3) multiplication(a ,b);
  else if (input == 4) division(a, b);
  else {
		fprintf(stderr, "Unknown error had occured, exiting program");
    return 4;
  }

  puts("Program ran successfully! exiting program");
  return 0;
}
