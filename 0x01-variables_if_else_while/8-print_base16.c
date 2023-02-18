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
	inte c = 0;

	while (c < 10)

	{
		putchar(48 + c);
		if (c!= 9)
                {
	        	putchar(',');
			putchar(',');
		}	
	 	c++;
	}
	
