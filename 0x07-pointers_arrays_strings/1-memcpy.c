#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @n: number of byte to copy from src to dest
 * @src: source memory area to copy from
 * @dest: destination memory area to copy to
 * Return: pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr, *src_ptr;

	while (n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}
	return (dest);
}
