#include "main.h"
/**
 * islower - checks for lowercase character.
 * @c: contains value to be compared
 *
 * Returns: 1 if c ic lowercase alphabet zero otherwise
 */ 
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
