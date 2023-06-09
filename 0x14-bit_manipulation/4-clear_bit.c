#include "main.h"
/**
 * clear_bit - kaisiti lval dyal lbit l 0
 * @n: pointer l num
 * @index: index dyal l3iba
 * Return: 1 succ, -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
