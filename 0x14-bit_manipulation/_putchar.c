#include "main.h"
#include <unistd.h>
/**
 * _putchar - kaykteb lcharac
 * @c: lcharacter li itprinta
 * Return: On success 1.
 * ila error, -1 is d, errno is set app
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
