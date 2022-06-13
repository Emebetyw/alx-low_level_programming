#include "main.h"
/**
 * more_numbers -prints 10 times the numbers, from 0 to 14
 *
 * Return: returns nothing
*/

void more_numbers(void)
{
	int num;
	int count = 0;
	
	while (count <= 9)
	{
		for (num = 48; num <= 62; num++)
		{
			_putchar(num);
		}
		count++;
		_putchar('\n');
	}


}
