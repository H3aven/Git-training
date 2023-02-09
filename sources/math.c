#include "module.h"

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