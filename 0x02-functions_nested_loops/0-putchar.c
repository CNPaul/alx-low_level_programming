#include "main.h"
/**
 *main - entry point
 *
 *Description: A program that prints '_putchar' followed by a new line.
 *
 *Return: 0 on success
 *
 */

int main(void)
{
	int i;
	char printputchar[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(printputchar[i]);
	}
	_putchar('\n');
	return (0);
}
