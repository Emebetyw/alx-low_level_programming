#include <stdio.h>
/**
 * Main -prints both small alphabets and capital alphabet.
 *
 * Return : Always return 0 (success).
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}	

