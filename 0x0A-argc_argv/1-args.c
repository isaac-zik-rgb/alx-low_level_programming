#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: count number of argument passed to the command-line
 *@argv: argument vector a pointer to a strings
 *Return: 0 success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
  int i;
  for (i = 0; i < argc; i++)
    printf ("%d\n", i);
  return (0);
}
