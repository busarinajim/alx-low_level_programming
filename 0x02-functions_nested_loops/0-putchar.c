#include "main.h" 

/**
 * main - printing __putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *str="_putchar";
	
	for (int i=0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');	
	return (0);
}
