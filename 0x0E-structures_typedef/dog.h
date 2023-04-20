#ifndef DOG_H
#define DOG_H

/**
 *struct dog - basic info of a dog
 *@name: first input
 *@age: second input
 *@owner: third input
 *Description: longer
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 *dog_t - typedef of struct dog
 */
typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif