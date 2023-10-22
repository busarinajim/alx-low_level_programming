#include <stdio.h>

/**
 * main - prints alphabet in lower case except q and e
 *
 * Return: 0
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if ((alphabets == 'q') || (alphabets == 'e'))
			continue;
		else
		{
			putchar(alphabets);
		}
	}
	putchar('\n');
	return (0);
}
