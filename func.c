#include "func.h"

// Exponentialfunktion mit Int als Rückgabe
// Zu beachten ist die Begrenzung eines Int!
int power(int basis, int exp)
{
    int retVal = basis;
    if (exp == 0)
    {
        return 1;
    }
    for(int i = 1; i < exp; i++)
    {
        retVal = retVal * basis;
    }
    return retVal;
}