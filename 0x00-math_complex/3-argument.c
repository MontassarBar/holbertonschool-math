#include <stdio.h>
#include "holberton.h"
#include <math.h>
/**
 *argument - returns the argument of a given complex number
 *@c: the complex number
 *Return: x
 */
double argument(complex c)
{
double x;
x = atan(c.im / c.re);
return (x);
}
