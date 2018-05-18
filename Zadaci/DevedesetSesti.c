#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define brojKvadrova 5

typedef struct struktura{
    int stranica1;
    int stranica2;
    int visina;
    int volumen;
}kvadar;

kvadar RacunajVolumen(kvadar,kvadar*);
void UpisiKvadar(kvadar*);
int main()
{
    int i;
    kvadar K[brojKvadrova];
    kvadar* pokazivac;

    pokazivac = K;
    for(i = 0 ; i < brojKvadrova;i++){
        UpisiKvadar(K+i);
       
    }
    pokazivac->volumen = 1000;

    printf("Volumen prije racunanja:%d\n",pokazivac->volumen);
    for(i = 0;i<brojKvadrova;i++)
        RacunajVolumen(K[i],pokazivac);

    printf("Najmanji volumen iznosi:%d\n",pokazivac->volumen);
    return 0;
}

kvadar RacunajVolumen(kvadar K,kvadar *pok)
{
    printf("Poslan kvadar sa %d %d %d dimenzijama.\n",K.stranica1,K.stranica2,K.visina);
    K.volumen = K.stranica1*K.stranica2*K.visina;

    if(K.volumen < pok->volumen)
        pok->volumen = K.volumen;
}
void UpisiKvadar(kvadar *K)
{
    printf("Za kvadar unesi stranicu 1:");
    scanf("%d",&K->stranica1);
    printf("Unesi stranicu 2:");
    scanf("%d",&K->stranica2);
    printf("Unesi visinu:");
    scanf("%d",&K->visina);
}