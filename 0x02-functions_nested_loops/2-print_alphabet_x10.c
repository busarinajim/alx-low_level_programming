#include "main.h"

/**
 * print_alphabet - To print alphabets using _putchar
 * 
 * print_alphabet_x10 - Prints alphabets 10x 
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
void print_alphabet_x10(void)
{
	int i;

	for (i=0; i<10; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
