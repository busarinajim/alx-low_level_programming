#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a given number
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor of n
 */

long largest_prime_factor(long n)
{
	long i;

	while (n % 2 == 0)
	{
		if (n == 2)
			return (2);
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			if (n == i)
				return (i);
			n = n / i;
		}
	}

	if (n > 2)
		return (n);
	return (0);
}

/**
 * main - entry point of program
 *
 * Return: Always 0
 */

int main(void)
{
	long number = 612852475143;
	long largest_prime = largest_prime_factor(number);

	printf("%ld\n", largest_prime);

	return (0);
}
