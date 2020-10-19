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
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name ? d->name : "(nil)"
	       , d->age, d->owner ? d->owner : "(nil)");
}
