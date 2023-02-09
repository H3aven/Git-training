#include <math.h>

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
    double retval = num1 / num2;
    if (retval == NAN)
    {
        retval = 0.0;
    }
    return retval;
}