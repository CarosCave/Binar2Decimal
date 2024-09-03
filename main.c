#include <stdio.h>

int d2b(int zahl);
int b2d(int zahl);
int power(int basis, int exp);

int main(void) {
    int auswahl = 0;
    int zahlEingabe = 0;
    int returnValue;

    printf("Binaer - Dezimal Konverter!\n");
    fflush(stdout); // Puffer leeren
    printf("(1) Dezimalzahl in Binaerzahl\n");
    fflush(stdout); // Puffer leeren
    printf("(2) Binaerzahl in Dezimalzahl\n");
    fflush(stdout); // Puffer leeren
    printf("Auswahl: ");
    fflush(stdout); // Puffer leeren
    scanf("%d", &auswahl);
    printf("Zahl: ");
    fflush(stdout); // Puffer leeren
    scanf("%d", &zahlEingabe);


    switch (auswahl) {
        case 1:
           returnValue = d2b(zahlEingabe);
        break;
        case 2:
            returnValue = b2d(zahlEingabe);
        break;
        default:
            printf("Irgendwas ist schief gelaufen.\n");
        break;
    }
    printf("%i = %i\n", zahlEingabe, returnValue);
    return 0;
}


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