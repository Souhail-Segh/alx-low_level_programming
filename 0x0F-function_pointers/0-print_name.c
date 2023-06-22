#include "function_pointers.h"
/**
 * print_name - took a funct of printing names and display the name in its arg
 * @name: the name to diplay by the input function
 * @f: the input function that display a text with an intended name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
