#include "Hex.h"
#include <stdio.h>

void d2h(int zahl)
{
    int schleifendurchlauf = 0;
    int ergebnis;
    int rest;
    int tempZahl = zahl;
    char retVal[10];

    do
    {
        ergebnis = tempZahl / 16;
        rest = tempZahl % 16;
        printf("%i : 16 = %i R %i\n", tempZahl, ergebnis, rest);
        fflush(stdout); // Puffer leeren
        if (rest >= 0 && rest < 16)
        {
            sprintf(retVal, "%i", rest);
            //retVal = (char)rest;
        }
        else if (rest == 10)
        {
            retVal[0] = 'A';
        }
        else if (rest == 11)
        {
            retVal[0] = 'B';
        }
        else if (rest == 12)
        {
            retVal[0] = 'C';
        }
        else if (rest == 13)
        {
            retVal[0] = 'D';
        }
        else if (rest == 14)
        {
            retVal[0] = 'E';
        }
        else if (rest == 15)
        {
            retVal[0] = 'F';
        }
        printf("%s\n", retVal);
    }
    while (ergebnis != 0);
    
}