#include "main.h"
/**
 * print_sign - checks sign of a number
 * @n: character to be verified
 * Return: 1 if print_sign is - or + 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
