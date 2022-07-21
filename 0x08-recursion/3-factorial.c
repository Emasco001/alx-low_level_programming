#include "main.h"

/*
 * factorial - this finds the factorial of a given number
 * @n - This is an argument passed to the function
 *
 * Return: the factorial of a given number
 */

int factorial(int n);
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 1)
{
		return (1);
}

	return (n * factorial(n - 1));

}
