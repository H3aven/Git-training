#include <math.h>

#define epsilon 1e-6

double add(double, double);
double substract(double, double);
double multiply(double, double);
double divide(double,double);

double add(double num1, double num2)
{
    double retval = num1 + num2;
    return retval;
}

double substract(double num1, double num2)
{
    double retval = num1 - num2;
    return retval;
}

double multiply(double num1, double num2)
{
    double retval = num1 * num2;
    return retval;
}

double divide(double num1, double num2)
{
    double retval = 0.0;
    if (fabs(num2) > epsilon)
    {
        retval = num1 / num2;
    }
    return retval;
}