#include "main.h"
/**
 *_strcat - function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 *
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int l, l_s;/*where l_s is length of src string*/

	l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (l_s = 0; src[l_s] != '\0'; l_s++, l++)
	{
		dest[l] = src[l_s];
	}
	dest[l] = '\0';
	return (dest);
}
