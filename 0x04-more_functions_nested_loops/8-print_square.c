#include "main.h"

/**
 * print_square - prints the square
 * @size: size of square
 * Return: returns nothing
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}


}
