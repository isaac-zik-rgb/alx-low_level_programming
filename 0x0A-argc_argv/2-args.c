#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: argument counts
 *@argv: argument vector
 *
 *Return: 0 Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int i;
for (i = 0; argv[i]; i++)
printf ("%s\n", argv[i]);
return (0);
}
