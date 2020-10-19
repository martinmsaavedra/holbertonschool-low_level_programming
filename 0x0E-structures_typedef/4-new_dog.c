#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name2;
	char *owner2;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name2 = _strdup(name);
	if (name2 == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner2 = _strdup(owner);
	if (owner2 == NULL)
	{
		free(name2);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name2;
	new_dog->age = age;
	new_dog->owner = owner2;

	return (new_dog);
}

/**
 *_strdup - duplicates a string
 *@str: string
 *Return: pointer to string or 0 if size is 0
 */
char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *string;

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		length++;
		i++;
	}
	string = malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		*(string + i) = *(str + i);
		i++;
	}
	*(string + i) = '\0';
	return (string);
}
