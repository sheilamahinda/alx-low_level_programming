#include <stdio.h>

/**
 * main - entry point
 * Print all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
	putchar(a);
	if (a <= 56)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
