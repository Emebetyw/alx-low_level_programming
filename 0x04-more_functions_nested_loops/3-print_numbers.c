#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that print all numbers from
 * 0 to 9
 * Return: returns nothing
 */

void print_numbers(void)
{
	int number = '1';
	for (number = '1'; number <= '9'; number++)

		_putchar(number);
}