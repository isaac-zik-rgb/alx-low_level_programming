#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0 Success
 */
int main(int argc, char *argv[])
{
int i, sum = 1;
if (argc == 3)
{
for (i = 1; i < argc; i++)
sum *=  atoi(argv[i]);
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
