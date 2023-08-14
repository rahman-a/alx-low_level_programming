#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - a struct for dog
 * @name: character for dog name
 * @age: float fot a dog age
 * @owner: character for dog owner
 * Description: a structre collecting a data about Dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
