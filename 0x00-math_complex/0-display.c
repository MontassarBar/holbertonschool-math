#include <stdio.h>
#include "holberton.h"
/**
 *display_complex_number -  displays the complex numbers
 *@c: the complex number
 */
void display_complex_number(complex c)
{
if (c.im == 0)
printf("%0.1f\n", c.re);
else if (c.im == 1)
printf("%0.1f + i\n", c.re);
else if (c.im == -1)
printf("%0.1f - i\n", c.re);
else if (c.im < 0)
printf("%0.1f - %0.1fi\n", c.re, -(c.im));
else
printf("%0.1f + %0.1fi\n", c.re, c.im);

}
