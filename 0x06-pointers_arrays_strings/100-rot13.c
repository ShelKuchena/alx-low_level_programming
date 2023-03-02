#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @S: pointer to strings params
 * Return: *S
 */

char *rot13(char *S)
{
	int i;
	int j;
	char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwzyzabcdefghijklm";
	for (i = 0; d[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
