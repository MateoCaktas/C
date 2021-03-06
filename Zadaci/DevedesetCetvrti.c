#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define brojTrokuta 5

typedef struct struktura{
    int stranica1;
    int stranica2;
    int stranica3;
    int najvecaStr;
    int opseg;
}trokut;

trokut PotraziNajveciOpseg(trokut[],trokut*);
int main()
{
   
    int i;
    trokut *pokazivac;

    trokut T[brojTrokuta];

    pokazivac = T;
    for(i=0;i<brojTrokuta;i++)
    {
        printf("Unesi stranice za %d. trokut", i+1);
        scanf("%d %d %d", &T[i].stranica1,&T[i].stranica2,&T[i].stranica3);
    }

    
    for(i= 0; i <brojTrokuta;i++)
        PotraziNajveciOpseg(T+i,pokazivac);

    printf("Najveca stranica medu trokutima iznosi %d.\n" , pokazivac->najvecaStr);

    return 0;
}

trokut PotraziNajveciOpseg(trokut T[brojTrokuta],trokut *pok)
{
    if(T->stranica1 > T->stranica2 && T->stranica1 > T->stranica3)
        T->najvecaStr = T->stranica1;
    else if(T->stranica2 > T->stranica1 && T->stranica2 > T->stranica3)
        T->najvecaStr = T->stranica2;
    else T->najvecaStr = T->stranica3;

    if(T->najvecaStr > pok->najvecaStr)
        pok->najvecaStr = T->najvecaStr;
}

