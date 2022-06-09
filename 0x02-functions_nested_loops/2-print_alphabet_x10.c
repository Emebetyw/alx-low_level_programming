#include "main.h"
/**
 *
 * print alphabet - prints 10m times the lower case
 *
 * Returns: with no return value
 */

void print_alphabet_x10(void)
{
	char c;
	int count;

	count = 1;


	while (count <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	count++;
	_putchar('\n');
	}
}
