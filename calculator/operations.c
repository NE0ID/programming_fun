#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

/**
 * add - perform addition
 *
 * @
 *
 * Return: addition's sum
 */
float add(int num_arg, ...)
{
	int sum;
	int i = 0;

	while (i <= num_arg)
	{
		sum += arg;
		return (sum);
	}
}

/**
 * sub - perform substraction
 *
 * @
 *
 * Return: substraction's difference
 */
float sub(int num_arg, ...)
{
        int dif;
        int i = 0;

        while (i <= num_arg)
        {
                dif -= arg;
                return (dif);
        }
}

/**
 * mul - perform multiplication
 *
 * @
 *
 * Return: mul's product
 */
float mul(int num_arg, ...)
{
        int product;
        int i = 0;

        while (i <= num_arg)
        {
                product *= arg;
                return (product);
        }
}

/**
 * div - perform division (quotient)
 *
 * @
 *
 * Return: division's quotient
 */
float div(int num_arg, ...)
{
        int quotient;
        int i = 0;

        while (i <= num_arg)
        {
                quotient /= arg;
                return (quotient);
        }
}

/**
 * mod - perform division (rest)
 *
 * @
 *
 * Return: division's rest
 */
float mod(int num_arg, ...)
{
        int rest;
        int i = 0;

        while (i <= num_arg)
        {
                rest %= arg;
                return (rest);
        }
}

/**
 * per - perform percentage
 *
 * @
 *
 * Return: percentage's result
 */
float per(int num_arg, ...)
{
        int result;
        int i = 0;

        while (i <= num_arg)
        {
                result = arg / 100;
                return (result);
        }
}
