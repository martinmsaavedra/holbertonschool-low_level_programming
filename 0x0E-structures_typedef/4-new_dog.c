#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
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

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}

/**
 *_strdup - duplicates a string
 *@str: string
 *Return: pointer to string or 0 if size is 0
 */
char *_strdup(char *str)
{
	int i;
	char *parray;
	int size = 0;
	int j = 0;

	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		while (str[j] != '\0')
		{
			size++;
			j++;
		}
		parray = (char *)malloc(sizeof(char) * size + 1);
		if (parray == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			parray[i] = str[i];
		}
		return (parray);
	}
}
