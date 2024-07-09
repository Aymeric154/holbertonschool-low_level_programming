#include <stdio.h>
#include "dog.h"

/**
 * main- function that initialize a variable of type struct dog
 *
 * @d: structure
 * @name: name of dog
 * @age: age of the dog
 * @owner: property of dog
 *
 * Return: 0
 */

int main(void)
{
	struct dog my_dog;

		my_dog.name = "Poppy";
		my_dog.age = 3.5;
		my_dog.owner = "Bob";

		printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
		return (0);
}
