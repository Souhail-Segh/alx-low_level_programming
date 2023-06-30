#include <stdio.h>

void initialisation(void) __attribute__((constructor));

/**
 * initialisatiom - print a message before launching main
 *
 * Return: none
 */

void initialisation(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
