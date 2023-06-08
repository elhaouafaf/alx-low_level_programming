#include "main.h"
/**
 * print_binary -kayprinti lbinary ldecimal
 * @n: achno anprintiw
 */
void print_binary(unsigned long int n)
{
int i, coun = 0;
unsigned long int likai;
for (i = 63; i >= 0; i--)
{
likai = n >> i;
if (likai & 1)
{
_putchar('1');
coun++;
}
else if (coun)
_putchar('0');
}
if (!coun)
_putchar('0');
}
