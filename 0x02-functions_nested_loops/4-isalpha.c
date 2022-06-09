#include "main.h"
/**
 * is_alpha - checks for alphabetic character
 *
 * Return: 1 if int c is_alpha upper or lower case 0 otherwise
 */
int _isalpha(int c)
{
	int c;

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
