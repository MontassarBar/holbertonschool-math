#include <stdio.h>
#include "holberton.h"
/**
 *division - performs the division operation to complex numbers
 *@c1: the first complex number
 *@c2: the second complex number
 *@c3: the division
 */
void division(complex c1, complex c2, complex *c3)
{
double x, y;
x = c1.im * (c2.im * -1);
y = c2.im * c2.im;
c3->re = ((c1.re * c2.re) + (x * -1)) / ((c2.re * c2.re) - (y * -1));
c3->im = ((c1.re * (c2.im * -1)) + (c1.im * c2.re)) / ((c2.re * c2.re) -
(y * -1));
}
