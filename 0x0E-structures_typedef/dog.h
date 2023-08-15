#ifndef DOG_h
#define DOG_H

/**
 * main - type  that describes a dog using
 * @name: name of the dog
 * @age: age of the dog &
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - definition type for struct dog
 */
void int_dog_(struct dog *d, char *name,float age,char_*owner);
void print_dog(stc dog*d);
dog_t *new_dog(char name, float age,);
void free_dog(dog_t *d);

#endif
