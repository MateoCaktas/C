//U liste upisi podatke o studentima,brisi podatke,sortiraj po prezimenu,pretrazi,itd.
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


struct lista;
typedef struct lista *pokList;

void PrintMenu();
void Ispis(pokList);
pokList DodajUListu(pokList);
pokList CreateNode();
void Upisi(pokList);
void IspisListe(pokList);
pokList Find(pokList,char[]);
void Sort(pokList);

typedef struct lista
{
    char ime[10];
    char prezime[10];
    int MB;
    int g_rod;
    pokList next;
}List;

pokList CreateNode()
{
    pokList Q = (pokList)malloc(sizeof(List));
    if(Q==NULL)
        return NULL;
    else return Q;
}

int main()
{
    pokList L;
    L = NULL;

    L = CreateNode();
    char izbor;
    PrintMenu();
    scanf("%c",&izbor);
    toupper(izbor);
    while(izbor != 'K'){
    switch(izbor){
        case '1':L = DodajUListu(L);
                PrintMenu();
                break;
        case '2':IspisListe(L->next);
                PrintMenu();
                break;
        case '3':printf("Upisi prezime:");
                char prez[10];
                scanf("%s",prez);
                Find(L,prez);
                PrintMenu();
                break;
        case '4':Sort(L);
                PrintMenu();
                break;
        case 'k':
        case 'K':
                exit(1);

    }
    //PrintMenu();
    scanf("%c",&izbor);
}
    return 0;
}

void PrintMenu()
{
    printf("\n\nOdaberi opciju:\n");
    printf("1- Dodaj studenta u listu\n");
    printf("2- Ispis liste\n");
    printf("3- Trazenje nekog clana po prezimenu\n");
    printf("4- Sortiraj\n");
    printf("k - Kraj\n");
}

pokList DodajUListu(pokList L)
{
    pokList Q = CreateNode();

    Upisi(Q);
    
    Q->next = L->next;
    L->next = Q;

    return L;
}

void Upisi(pokList K)
{
    printf("Upisite ime:");
    scanf("%s",K->ime);
    printf("\nUpisite prezime:");
    scanf("%s",K->prezime);
    printf("\nUpisite maticni broj:");
    scanf("%d",&K->MB);
    printf("\nUpisite godinu rodenja:");
    scanf("%d",&K->g_rod);

}
void IspisListe(pokList L)
{
    while(L != NULL)
        {
            printf("Ime:%s\nPrezime:%s\nMaticni broj:%d\nGodina rodenja:%d\n",L->ime,L->prezime,L->MB,L->g_rod);
            L = L->next;
        }
}

pokList Find(pokList L,char pr[])
{
    while(L != NULL && strcmp(L->prezime,pr) != 0)
        L = L->next;

    Ispis(L);

    return L;
}

void Ispis(pokList L)
{
    printf("Ime:%s\nPrezime:%s\nMaticni broj:%d\nGodina rodenja:%d",L->ime,L->prezime,L->MB,L->g_rod);

}

void Sort(pokList L)
{
    pokList temp,trenutni,prethodni,iduci;
    pokList end = NULL;
    trenutni = L;
    while(trenutni->next != NULL)
            {
                prethodni->next = trenutni;
                iduci = trenutni->next;
                    while(iduci->next != NULL)
                            {
                                if(strcmp(iduci->prezime,iduci->next->prezime) > 0)
                                            {
                                                temp = iduci->next;
                                                iduci->next = temp->next;

                                                prethodni->next = temp;
                                                temp->next = iduci;
                                                
                                                iduci = temp;
                                            }
                                    prethodni = iduci;
                                    iduci = iduci->next;
                            }
                            end = iduci;

            }
}