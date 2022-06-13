#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: n times '\'
 * Return: nothing returned
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n < 0)
		{
			_putchar('\n');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
