#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * prototypes
 */


int _putchar(char c);

/**
 * struct dog - struct of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct of a dog wit name age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* _HOLBERTON_H_ */
