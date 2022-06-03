#include <stdio.h>
/**
 * main - main block
 * Description: A program that prints the alphabet in lowercase, except q and e, then followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
