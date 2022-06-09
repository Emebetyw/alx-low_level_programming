#include "main.h"
/**
 * islower - checks for lowercase character.
 *
 * Returns: one or zero
 */ 
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
