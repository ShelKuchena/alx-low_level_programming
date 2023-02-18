#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print all digit number of base 10
 * starting from0, followed by a new line.
 * Return: alaways 0 (Success)
 */
int main(void)
{	
	char ch;

	for (ch = '0'; ch <= 'g'; ch++)
        {
		putchar(ch);
	}	
	for (ch = 'a'; ch <=  'f'; ch++)
	{
		putchar(ch);
	}	
	return (0);
