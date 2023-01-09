#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: count the number of argument passed to the commanline
 *@argv: strings passed to the command-line
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
  printf("%s\n", argv[0]);
  return (0);
}
