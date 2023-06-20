#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: value to be checked
 * Return: value of integer
 */
int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * -1);
	}
}
