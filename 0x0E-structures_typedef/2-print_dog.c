#include "dog.h"
#include <stdio.h>
/**
 *print_dog -  prints a struct dog
 *@d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == '\0')
		d->name = (nil);
	if (d->age == '\0')
		d->age = (nil);
	if (d->owner == '\0')
		d->owner = (nil);

	printf("Name: %s\nAge: %d\nOwner: %s\n", d->name, d->age, d->owner);
}
