#include <stdio.h>
#include "holberton.h"
#include <math.h>

/**
 *modulus - returns the modulus of a given complex number
 *@c: the complex number
 *Return: x
 */
double modulus(complex c)
{
double x;
x = sqrt(pow(c.re, 2) + pow(c.im, 2));
return (x);
}
