#ifndef __DOG_H__
#define __DOG_H__

/**
 * dog_t-typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog-stores information about a dog
 * @name:dog's name
 * @age:dog's age
 * @owner:dog's owner
 *
 * Description: stuct dog stores the all necessary information
 * about a dog like it's name, age  and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
