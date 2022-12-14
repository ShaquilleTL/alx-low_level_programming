/**
 * _strncpy - copy a string starting from index 0
 * @dest: type string
 * @src: string
 * @n: number of chars to copy over
 * Return: edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
