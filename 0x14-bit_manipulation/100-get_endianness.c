#include "main.h"
/**
 * get_endianness - check lmachin sghira ola kbira
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
