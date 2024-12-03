#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything passed as an argument
 * @format: list of types of arguments passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *str;
	int ch, i = 0, printed = 0;
	va_list element;

	va_start(element, format);
	while (format[i] != '\0')
	{
		printed = 0;
		switch (format[i])
		{
		case 'c':
			ch = va_arg(element, int);
			printf("%c", (char)ch);
			printed = 1;
			break;
		case 'i':
			printf("%d", va_arg(element, int));
			printed = 1;
			break;
		case 'f':
			printf("%f", va_arg(element, double));
			printed = 1;
			break;
		case 's':
			str = va_arg(element, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			printed = 1;
			break;
		default:
			break;
		}
		if (format[i + 1] != '\0' && printed)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(element);
}
