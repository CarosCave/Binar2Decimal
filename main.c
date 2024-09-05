#include <stdio.h>
#include <stdlib.h>

#include "Binaer.h"
#include "Hex.h"

int main(void) {
    int auswahl = 0;
    int zahlEingabe = 0;
    int returnValue;

    while (1)
    {
        printf("Binaer - Dezimal Konverter!\n");
        fflush(stdout); // Puffer leeren
        printf("(1) Dezimalzahl in Binaerzahl\n");
        fflush(stdout); // Puffer leeren
        printf("(2) Binaerzahl in Dezimalzahl\n");
        fflush(stdout); // Puffer leeren
        printf("(3) Dezimalzahl in Hexzahl\n");
        fflush(stdout); // Puffer leeren
        printf("(4) Hexzahl in Dezimalzahl\n");
        fflush(stdout); // Puffer leeren
        printf("(9) Beenden\n");
        fflush(stdout); // Puffer leeren
        printf("Auswahl: ");
        fflush(stdout); // Puffer leeren
        scanf("%d", &auswahl);
        // Programm beenden bei 9
        if (auswahl == 9)
        {
            exit(0);
        }
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
        case 3:
            d2h(zahlEingabe);
            break;
        default:
            printf("Irgendwas ist schief gelaufen.\n");
            break;
        }
        printf("%i = %i\n", zahlEingabe, returnValue);
        if (_WIN32 || _WIN64)
        {
            system("pause");
            system("cls");
        }
        
    }
}