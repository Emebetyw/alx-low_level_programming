#include "main.h" 
/**
 * more_line- prints a line.
 *
 * Return: void.
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
		i++;
	}
_putchar('\n');
}
