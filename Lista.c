#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct struk;
typedef struct struk *pok;

pok CreateNode();
void UpisBroja(pok,int);
void IspisBroja(pok);
pok DodajIspred(pok);
pok DodajNakon(pok);
typedef struct struk
{
    int broj;
    int redni;

    pok next;
}Struktura;

int main()
{
    srand(time(NULL));
    int i,nasumicni;
    pok S;
    char znak;

    S = NULL;

    S = CreateNode();

    nasumicni= rand()%10+1;
    printf("Upisi %d brojeva:\n",nasumicni);
    for(i=0;i<nasumicni;i++)
    UpisBroja(S,i+1);
    IspisBroja(S->next);
    printf("Odaberi : Dodaj ispred : I - Dodaj nakon : N = \t");

    scanf(" %c",&znak);
    znak = toupper(znak);
    if(znak == 'I')
        DodajIspred(S);
        else if(znak=='N')
        DodajNakon(S);
    else printf("\nNiste upisali 'i' ili 'n' ! \n");

    IspisBroja(S->next);
    return 0;
}

pok CreateNode()
{
    pok Q = (pok)malloc(sizeof(Struktura));
    if(Q==NULL)
        return NULL;
        else return Q;
}

void UpisBroja(pok Q,int redbroj)
{
    pok L;
    L = CreateNode();
    scanf("%d",&L->broj);
    L->redni =redbroj ;
    
    while(Q->next != NULL)
    Q=Q->next;
    L->next = Q->next;
    Q->next = L;
}

void IspisBroja(pok Q)
{
    while(Q != NULL)
        {
            printf("[%d] = %d\n",Q->redni,Q->broj);
            Q = Q->next;
        }
}
pok DodajIspred(pok L)
{
    int novibroj;
    printf("Ispred kojeg broja zelite unijeti svoj broj?");
    scanf("%d",&novibroj);
    while(L->next->broj != novibroj)
        L = L->next;

    pok Q = CreateNode();
    if(Q==NULL)
        return NULL;
            else
            {
                scanf("%d",&Q->broj);
                Q->next = L->next;
                L->next = Q;
                Q->redni = L->redni;
            }
        L=L->next;
        while(L != NULL)
        {
            L->redni++;
            L=L->next;
        }      
}
pok DodajNakon(pok L)
{

    int novibroj;
    printf("Ispred kojeg broja zelite unijeti svoj broj?");
    scanf("%d",&novibroj);
    while(L->broj != novibroj)
        L = L->next;

     pok Q = CreateNode();
    if(Q==NULL)
        return NULL;
            else
            {
                scanf("%d",&Q->broj);
                Q->next = L->next;
                L->next = Q;
            }
        L=L->next;
        while(L != NULL)
            {
            L->redni++;
            L=L->next;
            }       
}