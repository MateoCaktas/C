#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define brojTrokuta 5

int brTrokutaO;
int brTrokutaP;

typedef struct struktura{
    int stranica1;
    int stranica2;
    int stranica3;
    int visina1;
    int visina2;
    int visina3;
    int opseg;
    int povrsina;
}trokut;

trokut PotraziNajveciOpseg(trokut[],trokut*,int);
trokut PotraziNajvecuPovrsinu(trokut[],trokut*,int);
int main()
{
    
    int i;
    trokut *pokazivac;
    trokut *pokazivac2;
    trokut T[brojTrokuta];

    pokazivac = T;
    pokazivac2 = T;
    for(i=0;i<brojTrokuta;i++)
    {
        printf("Unesi stranice i visine za %d. trokut\n", i+1);
        printf("Str 1:");
        scanf("%d",&T[i].stranica1);
        printf("\nStr 2:");
        scanf("%d",&T[i].stranica2);
        printf("\nStr 3:");
        scanf("%d",&T[i].stranica3);
        printf("\nVisina 1:");
        scanf("%d",&T[i].visina1);
        printf("\nVisina 2:");
        scanf("%d",&T[i].visina2);
        printf("\nVisina 3:");
        scanf("%d",&T[i].visina3);
    }

    
    for(i= 0; i <brojTrokuta;i++)
        PotraziNajveciOpseg(T+i,pokazivac,i+1);

    printf("Najveci opseg ima %d. trokut sa opsegom %d.\n" ,brTrokutaO,pokazivac->opseg);

    for(i = 0 ; i < brojTrokuta;i++)
        PotraziNajvecuPovrsinu(T+i,pokazivac2,i+1);

    printf("Najvecu povrsinu ima %d. trokut sa povrsinom %d.\n",brTrokutaP,pokazivac2->povrsina);
    return 0;
}

trokut PotraziNajveciOpseg(trokut T[brojTrokuta],trokut *pok,int num)
{
    T->opseg = T->stranica1+T->stranica2+T->stranica3;

    if(T->opseg > pok->opseg){
        pok->opseg = T->opseg;
        brTrokutaO = num;
    }
}

trokut PotraziNajvecuPovrsinu(trokut T[brojTrokuta],trokut *pok,int num)
{
    T->povrsina = (T->stranica1 * T->visina1)/2;

    if(T->povrsina > pok->povrsina){
        pok->povrsina = T->povrsina;
        brTrokutaP = num;
    }
}