#include "main.h"
/**
 * print_last_digit - prints last digits
 * @n: the number
 * Return: value of last digits
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
