#include <stdio.h>
/**
 * main - all possible combinations
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 45; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
			putchar(',');
		putchar(' ');
		}

		putchar('\n');

		return (0);

}
