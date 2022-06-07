#include<stdio.h>

/**
 * main - Entry Point
 *
 * Return: always returns 0
 */
int main(void)
{
	int i, n;
	
	for (i ='0'; i <='9'; i++)
		for (n ='0'; n <= '9'; n++)
			putchar(i);
			putchar(n);
			if ((i != '9') || (i == '9' && n != '9'))
				putchar(',');
				putchar(' ');
	putchar('\n');
	return (0);	
}
			
