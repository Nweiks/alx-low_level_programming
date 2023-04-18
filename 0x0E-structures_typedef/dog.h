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

typedef struct dog_t dog;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
