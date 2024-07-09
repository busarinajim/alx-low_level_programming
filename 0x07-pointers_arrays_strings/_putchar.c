#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

int main(void)
{
    char str[] = "Hello, _putchar!\n";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }

    return 0;
}
