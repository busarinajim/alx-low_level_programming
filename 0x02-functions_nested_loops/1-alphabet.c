#include "main.h"

/**
 * print_alphabet function - To print alphabets using _putchar
 * No parameters
 *
 * main function - calls print_alphabet
 *
 * Return - 0 (success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
}
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
