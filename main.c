#include <stdio.h>
#include <stdlib.h>

#include "Binaer.h"
#include "Hex.h"

int main(void) {
    // Deaktivieren der Pufferung von stdout
    setbuf(stdout, NULL);
    int auswahl = 0;
    int zahlEingabe = 0;
    char hexEingabe[10];
    char hexTempEingabe[10];
    int returnValue;
    char returnString[10];
    // Initialisieren des Char Arrays
    for (int i = 0; i < 10; i++)
    {
        hexEingabe[i] = 0;
        hexTempEingabe[i] = 0;
        returnString[i] = 0;
    }

    while (1)
    {
        printf("Binaer - Dezimal Konverter!\n");
        printf("(1) Dezimalzahl in Binaerzahl\n");
        printf("(2) Binaerzahl in Dezimalzahl\n");
        printf("(3) Dezimalzahl in Hexzahl\n");
        printf("(4) Hexzahl in Dezimalzahl\n");
        printf("(9) Beenden\n");
        printf("Auswahl: ");
        scanf("%d", &auswahl);
    
        // Beenden des Programms
        if (auswahl == 9)
        {
            exit(0);
        }
        printf("Zahl: ");
        if (auswahl != 4)
        {
            scanf("%d", &zahlEingabe);
        }
        else if(auswahl == 4)
        {
            scanf("%s", &hexEingabe);
        }
        
        switch (auswahl) {
        case 1:
            returnValue = d2b(zahlEingabe);
            break;
        case 2:
            returnValue = b2d(zahlEingabe);
            break;
        case 3:
            d2h(returnString, zahlEingabe);
            break;
        case 4:
            returnValue = h2d(hexEingabe);
            break;
        default:
            printf("Irgendwas ist schief gelaufen.\n");
            break;
        }

        if (auswahl == 1 || auswahl == 2)
        {
            printf("%i = %i\n", zahlEingabe, returnValue);
        }
        else if (auswahl == 3)
        {
            printf("%i = %s\n", zahlEingabe, returnString);
        }
        else if (auswahl == 4)
        {
            printf("%s = %i\n", hexEingabe, returnValue);
        }
        //char* string = d2h(20);
        //printf("%s\n", string);
        
        // Für Windowsausgabe
        #if defined(_WIN32) || defined(_WIN64)
                {
                    system("pause");
                    system("cls");
                }
        #elif defined(__unix__) || defined(__APPLE__) || defined(__linux__)
        {
            system("read -p 'Press Enter to continue...' var");
            system("clear");
        }
        #endif
    }
}