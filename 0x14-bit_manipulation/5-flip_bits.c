#include "main.h"
/**
 * flip_bits - count lbits libdl
 * @n: 1rst num
 * @m: 2nd num
 * Return: numberli ghadi itbdl
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, coun = 0;
unsigned long int likai;
unsigned long int lili = n ^ m;
for (i = 63; i >= 0; i--)
{
likai = lili >> i;
if (likai & 1)
coun++;
}
return (coun);
}
