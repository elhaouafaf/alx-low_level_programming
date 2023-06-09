#include "main.h"
/**
 * set_bit - kaysiti lbit flindex 1
 * @n: pointer dial num litbdl
 * @index: index li ghayji f 1
 * Return: 1 succ, -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
