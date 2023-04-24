#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - custom implementation of printf function
 * @format: pointer to format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
		int printed_chars;
		va_list args;
		conver_t funct_list[] = {
			{"c", p_char},
			{"s", p_string},
			{"%", p_percent},
			{"d", p_integer},
			{"i", p_integer},
			{NULL, NULL}
		};

		if (format == NULL)
			return (-1);

		va_start(args, format);

		printed_chars = parser(format, funct_list, args);

		va_end(args);

		return (printed_chars);
}
