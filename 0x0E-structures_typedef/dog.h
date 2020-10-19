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
/**
 *struct dog_t - dog structure
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
#endif
