#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"
#include "3-op_functions.c"
#include "3-get_op_func.c"
#include <stdlib.h>
/**
 * main - checking my code
 * @argc: numbers of argument supply to my program
 * @argv: A array of pointers to tge argument
 *
 * Return: 0 succsess
 */
int main(int argc, char *argv[])
{
  int num1, num2;
  char *op;
  
  if (argc != 4)
    {
      printf("Error\n");
      exit(98);
    }
  num1 = atoi(argv[1]);
  op = argv[2];
  num2= atoi(argv[3]);
  if (get_op_func(op) == NULL || op[1] != '\0')
    {
      printf("Error\n");
      exit (99);
    }
  if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
    {
      printf("Error\n");
      exit (100);
    }
  printf("%d\n", get_op_func(op)(num1, num2));
return (0);
}
