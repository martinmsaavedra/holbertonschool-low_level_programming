#ifndef DOG_H
#define DOG_H
#define DOG_H
/**
 *struct dog - dog structure
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

#ifndef INIT_DOG
#define INIT_DOG
#define INIT_DOG
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
