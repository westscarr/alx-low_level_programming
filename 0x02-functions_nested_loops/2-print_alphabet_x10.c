#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	char A;

	for (i = 0; i < 10; i++)
	{
		for (A = 'a'; A <= 'z'; A++)
		{
			_putchar(A);
		}
		_putchar('\n');
	}
}
