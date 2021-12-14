#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <math.h>
/**
 *struct complex - a complex number a + ib is represented by two doubles
 *@re: the reel part of the complex number
 *@im: the imaginary part of the complex number
 */
typedef struct complex
{
double re;
double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);
#endif
