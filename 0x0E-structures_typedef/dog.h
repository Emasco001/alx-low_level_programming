#ifndef pet
#define pet

/**
 * struct dog - define a new type of struct
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 *
 */

typedef struct dog
{
char *name;
float age;
char *owner;

} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
