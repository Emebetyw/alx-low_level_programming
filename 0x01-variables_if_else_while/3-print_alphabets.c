#include <stdio.h>
/**
 * main -prints both small alphabets and capital alphabets
 * Return : always return 0 (success).
 */
int main(void)
{
	char c;
	for(c='a';c<='z';c++)
		putchar (c);
	 
	for (c='A';c<='Z';c++)
		puchar(c);

	putchar('/n');
	 

	return (0);

}	
