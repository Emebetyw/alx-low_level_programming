#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: n times '\'
 * Return: nothing returned
 */
void print_diagonal(int n)
{
	int i = 0;
	int gap;

	while (i < n)
	{
		if (n < 0)
		{
			_putchar('\n');
		}
		for (gap = 0; gap < i; gap++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
