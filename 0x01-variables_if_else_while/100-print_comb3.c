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
	{
		for (n ='0'; n <= '9'; n++)
		{
			putchar(i);
			putchar(n);
			if (i == '1' && n == '0')
			{
			
			}
			if (((i == '2') && (n == '0')) || ((i == '2') && (n == '1')))
			{

			}
			if(((i == '3') && (n == '0')) || ((i == '3') && (n == '1')) || ((i == '3') && (n == '2')))
			{

			}
			if (((i == '4') && (n == '0')) || ((i == '4') && (n == '1')) || ((i == '4' && n == '2')) || ((i == '4' && n == '3')))
			{
			}
			if (((i == '5') && (n == '0')) || ((i == '5') && (n == '1')) || ((i == '5') && (n == '2')) || ((i == '5') && (n == '3')) || ((i == '5') && (n == '4')))
			{
			}
			if (((i == '6') && (n == '0')) || ((i == '6') && (n == '1')) || ((i == '6') && (n == '2')) || ((i == '6' && n == '3')) || ((i == '6') && (n == '4')) || ((i == '6' && (n == '5')))
			{
			}
			if (((i == '7') && (n == '0') || ((i == '7') && (n == '1')) || ((i == '7') && (n == '2')) || ((i == '7' && n == '3')) || ((i == '7') && (n == '4')) || ((i == '7') && (n == '5')) || ((i == '7') && (i == '6')))
			{
			}
			if ((i != '9') || (i == '9' && n != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);	
}
			
