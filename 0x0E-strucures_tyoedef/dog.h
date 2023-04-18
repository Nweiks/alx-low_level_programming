#ifndef DOG_H
#define DOG_H

/**
*struct dog - basic info of a dog
*@name: first input
*@age: second input
*@owner: third input
*
*/

struct dog
{
char *name;
float age;
char *owner;
}

/**
*dog_t -typedef
*/

typedef struct dog dog_t;





#endif
