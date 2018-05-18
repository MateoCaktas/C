#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define brojKvadrata 5

int brKvadrataPovrs;
int brKvadrataOpseg;


typedef struct struktura{
    int stranica;
    int opseg;
    int povrsina;
}kvadrat;

kvadrat PotraziNajveciOpseg(kvadrat[],kvadrat*,int);
kvadrat PotraziNajvecuPovrsinu(kvadrat[],kvadrat*,int);

int main()
{
    
    int i;
    kvadrat *pokazivac;
    kvadrat *pokazivac2;
    kvadrat K[brojKvadrata];

    pokazivac = K;
    pokazivac2 = K;
    for(i=0;i<brojKvadrata;i++)
    {
        printf("Unesi stranicu za %d. kvadrat:", i+1);
        scanf("%d", &K[i].stranica);
    }

    
    for(i= 0; i <brojKvadrata;i++)
        PotraziNajveciOpseg(K+i,pokazivac,i+1);

    printf("Najveci opseg ima kvadrat %d. sa opsegom %d.\n" , brKvadrataOpseg,pokazivac->opseg);

    for(i = 0 ; i <brojKvadrata;i++)
        PotraziNajvecuPovrsinu(K+i,pokazivac,i+1);

    printf("Najvecu povrsinu ima kvadrat %d. sa povrsinom %d.\n",brKvadrataPovrs,pokazivac->povrsina);

    return 0;
}

kvadrat PotraziNajveciOpseg(kvadrat K[brojKvadrata],kvadrat *pok,int num)
{
    K->opseg = 4*K->stranica;

    if(K->opseg > pok->opseg){
        pok->opseg = K->opseg;
        brKvadrataOpseg = num;
    }
}
kvadrat PotraziNajvecuPovrsinu(kvadrat K[brojKvadrata],kvadrat *pok,int num)
{
    K->povrsina = K->stranica * K->stranica;

    if(K->povrsina > pok->povrsina){
        pok->povrsina = K->povrsina;
        brKvadrataPovrs = num;
    }
}
