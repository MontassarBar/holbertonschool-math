#include <stdio.h>
#include "holberton.h"
/**
 *display_complex_number -  displays the complex numbers
 *@c: the complex number
 */
void display_complex_number(complex c)
{
if (c.im == 0)
printf("%d\n", c.re);
else
printf("%d + %di\n", c.re, c.im);
}
