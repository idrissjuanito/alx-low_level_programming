#ifndef DOG_H
#define DOG_H
/**
 * struct dog - details for a dig
 * @name: name of dog
 * @owner: onwer of the dog
 * @age: age of the said dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif