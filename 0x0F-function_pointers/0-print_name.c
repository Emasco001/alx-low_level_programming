#include "function_pointers.h"

/**
 * print_name - function that print a name
 * @name: the string to print
 * @f: pointer to function
 *
 * Return: function to pointer to print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
{
	(*f)(name);
}
}
