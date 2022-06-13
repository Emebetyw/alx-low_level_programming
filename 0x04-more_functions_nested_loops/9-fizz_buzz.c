#include <stdio.h>
/**
 * fizz_buzz- prints 1 to 100
 *
 * Return: returns 0
 */
int main(void)
{
	int num = 0;
	for (num =0; num <= 100; num++)
	{
		if(num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
		printf("%d", num);
	}
	return (0);

}
