#include "dog.h"
#include <stdio.h>
/**
 * new_dog - print struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int i, len_name, len_owner;

	if (name == NULL || owner == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; )
		i++;
	len_name = i;
	for (i = 0; owner[i] != '\0'; )
		i++;
	len_owner = i;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_name = malloc(len_name + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(len_owner + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		new_name[i] = name[i];
	new_name[len_name] = '\0';
	for (i = 0; i < len_owner; i++)
		new_owner[i] = owner[i];
	new_owner[len_owner] = '\0';
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
