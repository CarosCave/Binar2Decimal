#include "Hex.h"
#include "func.h"
#include <stdio.h>
#include <string.h>

void d2h(char* out, int zahl)
{
    int schleifendurchlauf = 0;
    int ergebnis;
    int rest;
    int tempZahl = zahl;
    char tempChar[1];
    char tempString[10];
    for (int i = 0; i < 10; i++)
    {
        tempString[i] = 0;
    }

    do
    {
        ergebnis = tempZahl / 16;
        rest = tempZahl % 16;
        
        if (rest >= 0 && rest < 10)
        {
            sprintf(tempChar, "%i", rest);
            tempString[schleifendurchlauf] = tempChar[0];
        }
        else if (rest == 10)
        {
            tempString[schleifendurchlauf] = 'A';
        }
        else if (rest == 11)
        {
            tempString[schleifendurchlauf] = 'B';
        }
        else if (rest == 12)
        {
            tempString[schleifendurchlauf] = 'C';
        }
        else if (rest == 13)
        {
            tempString[schleifendurchlauf] = 'D';
        }
        else if (rest == 14)
        {
            tempString[schleifendurchlauf] = 'E';
        }
        else if (rest == 15)
        {
            tempString[schleifendurchlauf] = 'F';
        }

        printf("%i : 16 = %i R %i => %c\n", tempZahl, ergebnis, rest, tempString[schleifendurchlauf]);
        tempZahl = ergebnis;

        schleifendurchlauf++;
    }
    while (ergebnis != 0);

    for (int i = 0; i < schleifendurchlauf; i++)
    {
        out[i] = tempString[schleifendurchlauf - 1 - i];
    }
}

int h2d(char hexZahl[10])
{
    int retVal = 0;

    retVal = strlen(hexZahl);
    printf("%i", retVal);
    
    return retVal;
}
