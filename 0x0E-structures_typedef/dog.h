#ifndef dog_h
#define dog_h
/*
 * struct dog - structure for dog
 * @name: pointer to dogs name
 * @age: age of puppers
 * @owner: pointer to owners name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
