#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct struktura{
    int dan;
    int mjesec;
}datum;

void UnesiDatume(datum[],datum*);

int main()
{
    datum D[10];
    
    datum *pokazivac;
    

    UnesiDatume(D,pokazivac);


    return 0;
}

void UnesiDatume(datum D[10],datum *pok)
{
    int i,brojac=1;
    int brojacLjetnih = 0;
    
    for(i=0;i<10;i++)
    {
        printf("Unesi dan:");
        scanf("%d",&(D+i)->dan);

        printf("Unesi mjesec:");
        scanf("%d",&(D+i)->mjesec);

        if((D+i)->mjesec == 2){
            if(!((D+i)->dan >= 1 && (D+i)->dan <= 28))
                printf("Krivi datum!Veljaca ima 28 dana");
        }
        else if(!((D+i)->dan >= 1 && (D+i)->dan <= 31))
            printf("Krivi unos!Dan mora biti izmedu 1. i 31.");

        else if(!((D+i)->mjesec >0 && (D+i)->mjesec <= 12))
            printf("Krivi unos!Mjesec mora biti izmedu 1. i 12.");
                else 
                {
                    brojac++;
                    if((D+i)->mjesec >=6 && (D+i)->mjesec <=8)
                    brojacLjetnih++;
        
        }

        printf("Preslo petlje\n");
    }
    printf("Broj korektno unesenih:%d\n",brojac);
    printf("Broj ljetnih:%d\n",brojacLjetnih);
}