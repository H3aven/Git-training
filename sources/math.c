#include <stdio.h>
#include <math.h>
#include <float.h>

double add(double, double);
double substract(double, double);
double multiply(double, double);
double divide(double,double);

int main(int argc, char *argv)
{
    double num1 = 10.0;
    double num2 = 3.14;
    (void) add(num1,num2);
    (void) substract(num1, num2);
    (void) multiply(num1,num2);
    (void) divide(num1,num2);
    return 0;
}

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