#include "main.h"
/**
 * get_bit - ret lval ldecimal
 * @n: li kaytsearcha
 * @index: index dlayl bit
 * Return: valeur dbit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int af_val;
if (index > 63)
return (-1);
af_val = (n >> index) & 1;
return (af_val);
}
