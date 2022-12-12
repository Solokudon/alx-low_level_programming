#include <stdio.h>

/**
 * main - print all single digit numbers of base 10
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);


}
