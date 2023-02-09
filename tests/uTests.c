#include "../sources/module.h"
#include <float.h>
#include <stdio.h>

#define NUM_OF_TCS  10
#define PASS    1
#define FAIL   -1
#define NOT_EXECUTED    0


unsigned short testVerdict[NUM_OF_TCS];
double add_val1[NUM_OF_TCS]     = {DBL_TRUE_MIN,    -1.0,    0.0,   1.0,    DBL_MAX,    -1.0,               1.0,    1.0,    1.0, 1.0};
double add_val2[NUM_OF_TCS]     = {-1.0,            1.0,     1.0,   1.0,    1.0,        DBL_TRUE_MIN,       -1.0,   0.0,    1.0, DBL_MAX};
double add_retVal[NUM_OF_TCS]   = {DBL_TRUE_MIN,    0.0,     1.0,   2.0,    DBL_MAX,    DBL_TRUE_MIN,       0.0,    1.0,    2.0, DBL_MAX};

int main(void)
{
    printf("Module: %s\n", "add");
    for (unsigned short i = 0; i < NUM_OF_TCS; i++)
    {
        double retval = 0.0;
        retval = add(add_val1[i],add_val2[i]);
        if (retval == add_retVal[i]) testVerdict[i] = PASS;
        else 
        {
            testVerdict[i] = FAIL;
            printf("Testcase: %d\n\tReceived: %f\n\tExpected: %f\n", i+1, retval, add_retVal[i]);
        }
    }
    
    return 0;
}