#include "module.h"

int main(int argc, char **argv)
{
    double num1 = 10.0;
    double num2 = 3.14;
    double result;
    result = add(num1,num2);
    result = substract(num1, num2);
    result = multiply(num1,num2);
    result = divide(num1,num2);
    return 0;
}