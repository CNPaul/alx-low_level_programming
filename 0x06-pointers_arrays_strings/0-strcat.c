#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char s1 = 0;
	char s2 = 0;

	while (dest[s1++]);
		s2++;
	for (s1 = 0; src[s1]; s1++)
		dest[s2++] = src[s1];
	return (dest);
}
