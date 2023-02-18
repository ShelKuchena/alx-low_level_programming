#include <stdi.h>
/**
 * main - main block
 * Description: print the alphabet in lower case
 * and then in upper case, follow by a new line
 * Return: o
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= '2')
        {
		putchar(c);
		c++;
	}
        putchar('\n');
        return (0);
}	
