#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc == 1)
{
printf("%d\n", argc - 1);
}
else if (argc > 1 && argv != NULL)
{
for (i = 1; i < argc; i++)
sum += atoi(argv[i]);
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
