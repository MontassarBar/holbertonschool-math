#include <stdio.h>
#include "holberton.h"
/**
 *substraction - performs the substraction operation to complex numbers
 *@c1: the first complex number
 *@c2: the second complex number
 *@c3: the substraction
 */
void substraction(complex c1, complex c2, complex *c3)
{
c3->re = c1.re - c2.re;
c3->im = c1.im - c2.im;
}
