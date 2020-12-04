#include "holberton.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer.
 * @n: number print
 */
void print_number(int n)
{
	unsigned int num = n;

	if (num / 10 != 0)
	{
		print_number(num / 10);
		if (num > 0)
		{
			putchar(num % 10 + '0');
		}
		else
		{
			putchar(-num % 10 + '0');
		}
	}
	else if ((num / 10 == 0) && (num % 10 != 0) && (num > 0))
	{
		putchar(num % 10 + '0');
	}
	else if ((num / 10 == 0) && (num % 10 != 0) && (num <= 0))
	{
		putchar('-');
		putchar(-num % 10 + '0');
	}
}
