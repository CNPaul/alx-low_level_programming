#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: program that prints all possible combinations of single-digit numbers.
 * Numbers must be separated by , , followed by a space
 * Numbers should be printed in ascending order.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
