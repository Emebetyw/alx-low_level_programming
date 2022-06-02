#include <stdio>
/**
 * Main - Entry point
 *
 *Return: Always 0 (success)
*/

int main(void)
{	
	int a;

	long int b;

	long long int c;

	char d;

	float f;

        printf("Size fo a char: %lu byte(s)\n", (unsigned long)sizeof(d));
        printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
        printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
        printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
        printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));

        return (0);
}	

