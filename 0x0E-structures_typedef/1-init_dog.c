#include <stdlib.h>
#include <stdio.h>
#include "main.h"
typedef struct dog {
  char *name;
  float age;
  char *owner;
};
/**
 *init_dog - a structure thats cumulate data types
 *@d: a pointer to the struct data type
 *@name: a character pointer
 *@owner: a second character pointer
 *@age: a float variable
 * Return: Nothing;
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
  d = malloc(sizeof(struct dog));
  if(d == NULL)
  return (NULL);
 (*d).name = "Isaac";
  (*d).owner = "Gravity";
  (*d).age = 23;
}
