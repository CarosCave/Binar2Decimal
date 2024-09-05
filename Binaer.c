#include "Binaer.h"
#include "func.h"
#include <stdio.h>

int d2b(int zahl) {
    int retVal = 0;
    int schleifendurchlauf = 0;
    int ergebnis;
    int tempZahl = zahl;
    int rest;

    do {
        ergebnis = tempZahl / 2;
        rest = tempZahl % 2;
        printf("%i : 2 = %i R %i\n", tempZahl, ergebnis, rest);
        fflush(stdout); // Puffer leeren
        tempZahl = ergebnis;
        retVal = retVal + rest * power(10,schleifendurchlauf);
        schleifendurchlauf++;
    } while (ergebnis != 0);

    return retVal;
}

int b2d(int zahl)
{
    int number = zahl;
    int rest;
    int retVal = 0;
    int schleifendurchlauf = 0;

    while (number != 0)
    {
        rest = number % 10;
        retVal = retVal + rest * power(2,schleifendurchlauf);
        number = number / 10;
        schleifendurchlauf++;
    }
    
    return retVal;
}