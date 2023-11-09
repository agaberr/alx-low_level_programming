#include "variadic_functions.h"

/**
* print_all - print all params
* @format: format of print
* @...: strings to print
*
* Return: None
*/

void print_all(const char * const format, ...)
{

	va_list args;
	char *str;

	int i = 0;

	char current_char;

	va_start(args, format);

	while (format && format[i])
	{
		current_char = format[i];
		if (i > 0 && (current_char == 'c' || current_char == 'i'
			|| current_char == 'f' || current_char == 's'))
			printf(", ");
		switch (current_char)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
