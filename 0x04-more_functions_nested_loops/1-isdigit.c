#include "main.h"
/**
 * _isdigit - checks for a digit (0 to 9)
 * @c: a digit to be checked
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '1') && (c >= '9'))
	{
		return (1);
	}

	else
	{
       		return (0);
	}
}
