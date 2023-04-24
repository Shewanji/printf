#include "main.h"

/**
 * print_number - prints a number
 * @args: the va_list that contains the number to be printed
 *
 * Return: the number of characters printed
 */
int print_number(va_list args)
{
	int n;
	int check;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	check = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
		else
				num = n;

	for (; num / check > 9; )
		check *= 10;

	for (; check != 0; )
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}

		return (len);
}

/**
 * print_unsgined_number - prints an unsigned number
 * @n: the number to be printed
 *
 * Return: the number of characters printed
 */
int print_unsgined_number(unsigned int n)
{
	int check;
	int len;
	unsigned int num;

	check = 1;
	len = 0;

	num = n;

	for (; num / check > 9; )
		check *= 10;

	for (; check != 0; )
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}

		return (len);
}
