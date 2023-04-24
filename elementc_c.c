#include "main.h"

/**
 * p_char - prints a character
 * @args: the va_list that contains the character to be printed
 *
 * Return: the number of characters printed
 */
int p_char(va_list args)
{
	char value;

	value = va_arg(args, int);
	_putchar(value);
	return (1);
}

/**
 * p_string - prints a string
 * @args: the va_list that contains the string to be printed
 *
 * Return: the number of characters printed
 */
int p_string(va_list args)
{
	int i;
	const char *s;

	s = va_arg(args, const char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
return (i);
}

/**
 * p_percent - prints a percent character
 * @args: the va_list that is not used
 *
 * Return: the number of characters printed
 */
int p_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * p_integer - prints an integer
 * @args: the va_list that contains the integer to be printed
 *
 * Return: the number of characters printed
 */
int p_integer(va_list args)
{
	int n;

	n = print_number(args);
	return (n);
}