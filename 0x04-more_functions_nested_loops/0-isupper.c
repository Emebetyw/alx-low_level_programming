#include "main.h"
/**
 * _isupper - function that checks upper case characteri
 * @c: chracter to be checked
 * Return: 1 if the character is upper, 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	else
	{

		return (0);
	}
}
