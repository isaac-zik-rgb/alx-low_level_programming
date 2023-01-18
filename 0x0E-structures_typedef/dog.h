#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - my struct declaration
 * @name: a character pointer
 * @owner: the second character pointer
 * @age: a float number
 */
typedef struct dog
{
char *name;
char *owner;
float age;
} dog_t;

/*more functions*/
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);





#endif
