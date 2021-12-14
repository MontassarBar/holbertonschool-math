#include <stdio.h>
#include "holberton.h"
/**
 *conjugate - returns the conjugate of a given complex number
 *@c: the complex number
 *Return: c
 */
complex conjugate(complex c)
{
c.im = -(c.im);
return (c);
}
