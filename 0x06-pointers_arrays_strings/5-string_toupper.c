#include "main.h"

/**
 * string_toupper - converts lower case to upper
 * @str: string to be converted
 * Return: converted string
 */

char *string_toupper(char *str)
{
	char *original_str;
	
	*original_str = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (original_str);
}
