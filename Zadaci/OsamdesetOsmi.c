#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MIN 10
#define MAX 1000

struct lista;
typedef struct lista *pok;
typedef struct lista{
    int br;
    pok next;
}Brojevi;

pok CreateNode();
void IspisListe(pok);
void UbaciUListu(pok,int);
void UbaciNaKraj(pok,int);

int main()
{
    srand(time(NULL));

    pok L = NULL;
    L = CreateNode();
    L->next = NULL;
    int broj[20],i;

    for(i=0;i<20;i++)
    {
        broj[i] = rand()% MAX - MIN +1;
        printf("A=%d\t",broj[i]);
        if(i == 0)
            UbaciUListu(L,broj[i]);
        else if (broj[i] > broj[i-1])
            UbaciNaKraj(L,broj[i]);
        else if(broj[i] < broj[i-1])
            UbaciUListu(L,broj[i]);
    }

    IspisListe(L);

    return 0;
}

pok CreateNode(){
    pok Q = (pok)malloc(sizeof(Brojevi));
    if(Q==NULL)
        return NULL;
    else return Q;
}

void UbaciUListu(pok L , int broj)
{
    pok Q = CreateNode();

    Q->br = broj;

    Q->next = L->next;
    L->next = Q;

}
void UbaciNaKraj(pok L,int broj)
{
    pok Q = CreateNode();
    Q->br = broj;

    while(L->next != NULL)
        L=L->next;

    Q->next = L->next;
    L->next = Q;
}

void IspisListe(pok L){
    L=L->next;
    while(L!=NULL)
    {
        printf("%d\t",L->br);
        L=L->next;
    }
}