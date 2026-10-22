#include <stdio.h>
#include <stdlib.h>

/* Declare the arithmetic functions */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exit_program (int a, int b);

int main (void)
{
	int a = 6;
  int b = 3;
  int x;
  char choice;

  /*Array of function pointers*/
  int (*operations[5])(int, int) = {
    add, subtract, multiply, divide, exit_program
  };

  printf("Operand 'a' : %d | Operand 'b' : %d\n", a, b);
  printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
  
  scanf(" %c", &choice);

  /*Select and call the function using the character*/
  x = operations[choice - '0'](a, b);

  printf("x = %d\n", x);

	return 0;
}

/*Define the arithmetic functions */
int add (int a, int b) {
  printf("Adding 'a' and 'b'\n");
  return a + b;
}

int subtract (int a, int b) {
  printf("Subtracting 'b' from 'a'\n");
  return a - b;
}

int multiply (int a, int b) {
  printf("Multiplying 'a' and 'b'\n");
  return a * b;
}

int divide (int a, int b) {
  printf("Dividing 'a' by 'b'\n");
  return a / b;
}

int exit_program (int a, int b) {
  (void)a;
  (void)b;
  exit(0);
  return 0;
}

