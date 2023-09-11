#include <stdio.h>


/**
 * main - entry point
 * print alphabets in lower and upper case
 * Return: always 0
 */
int main(void)
{
	char i;
	char a;

	for (i = 97; i < 123; i++)
	putchar(i);
	for (a = 65; a < 91; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
