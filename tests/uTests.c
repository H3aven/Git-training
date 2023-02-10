#include "../sources/module.h"
#include <float.h>
#include <stdio.h>

#define NUM_OF_TCS  10
#define PASS    1
#define FAIL   -1
#define NOT_EXECUTED    0

/* Variables for holding values of each test case for function add() */
unsigned short add_testVerdict[NUM_OF_TCS];
double add_val1[NUM_OF_TCS]     = {-DBL_MAX,    -1.0,    0.0,   1.0,    DBL_MAX,    -1.0,           1.0,    1.0,    1.0,    1.0};
double add_val2[NUM_OF_TCS]     = {-1.0,        1.0,     1.0,   1.0,    1.0,        -DBL_MAX,       -1.0,   0.0,    1.0,    DBL_MAX};
double add_retVal[NUM_OF_TCS]   = {-DBL_MAX,    0.0,     1.0,   2.0,    DBL_MAX,    -DBL_MAX,       0.0,    1.0,    2.0,    DBL_MAX};

/* Variables for holding values of each test case for function divide() */
double divide_val1[NUM_OF_TCS]      = {-DBL_MAX,    -1.0,   0.0,    1.0,    DBL_MAX,    1.0,        1.0,    1.0,    1.0};
double divide_val2[NUM_OF_TCS]      = {1.0,         1.0,    1.0,    1.0,    1.0,        -DBL_MAX,   -1.0,   0.0,    DBL_MAX};
double divide_retVal[NUM_OF_TCS]    = {-DBL_MAX,    -1.0,   0.0,    1.0,    DBL_MAX,    -0.0,       -1.0,   0.0,    0.0};
unsigned short divide_testVerdict[NUM_OF_TCS];

int main(void)
{
    unsigned short fails = 0;

    fputs("Starting tests for file: \"module.h\"\n", stdout);

    /* Test function add() */
    printf("Function: %s\n", "add()");
    for (unsigned short i = 0; i < NUM_OF_TCS; i++) 
    {
        double retval = 0.0;
        retval = add(add_val1[i],add_val2[i]);
        if (retval >= (add_retVal[i] - epsilon) && (retval <= (add_retVal[i] + epsilon))) add_testVerdict[i] = PASS;
        else 
        {
            add_testVerdict[i] = FAIL;
            fails += 1;
            printf("Testcase: %d\n\tReceived: %f\n\tExpected: %f\n", i+1, retval, add_retVal[i]);
        }
    }
    printf("Test completed. %d / %d tests passed. %d tests failed.\n\n", NUM_OF_TCS-fails, NUM_OF_TCS, fails);
    
    /* Test function divide() */
    fails = 0;
    printf("Function: %s\n", "divide()");
    for (unsigned short i = 0; i < NUM_OF_TCS; i++)
    {
        double retval = 0.0;
        retval = divide(divide_val1[i],divide_val2[i]);
        if (retval >= (divide_retVal[i] - epsilon) && (retval <= (divide_retVal[i] + epsilon))) divide_testVerdict[i] = PASS;
        else 
        {
            divide_testVerdict[i] = FAIL;
            fails += 1;
            printf("Testcase: %d\n\tReceived: %f\n\tExpected: %f\n", i+1, retval, divide_retVal[i]);
        }
    }
    printf("Test completed. %d / %d tests passed. %d tests failed.\n\n", NUM_OF_TCS-fails, NUM_OF_TCS, fails);

    return 0;
}