#include <stdio.h>
#include "holberton.h"
#include <math.h>
/**
 *complex_from_mod_arg - update the real and the imaginary parts
 *@m: modulus
 *@arg: argument
 *@c3: the complex number
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
c3->re = m * cos(arg);
c3->im = m * sin(arg);
}
