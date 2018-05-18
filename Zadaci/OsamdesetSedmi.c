#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct lista;
typedef struct lista *pok;
typedef struct lista{
    char rijec[50];
    pok next;
}Znakovi;

void PrebaciBrojeve(pok);
pok CreateNode();
void UbaciUListu(pok,char*);
void IspisListe(pok);

int main()
{
    char niz[50];
    int i,brojRijeci;
    pok L;
    L=NULL;
    L=CreateNode();
    L->next = NULL;
    printf("Unesi koliko rijeci/brojki zelis:");
    
    scanf("%d",&brojRijeci);
    
    for(i=0;i<brojRijeci;i++){
        scanf("%s",niz);
        UbaciUListu(L,niz); 
        }
    
  

    printf("\nIspis programa\n");
    IspisListe(L);

    
    PrebaciBrojeve(L);

    printf("\nPrebacivanje:\n");
    IspisListe(L);
    printf("\n");

    return 0;
}

pok CreateNode(){
    pok Q = (pok)malloc(sizeof(Znakovi));
    if(Q==NULL)
        return NULL;
    else return Q;
}
void IspisListe(pok L){
    L = L->next;
        while(L!=NULL)
        {
            printf("%s ",L->rijec);
            L=L->next;
        }
}
void UbaciUListu(pok L,char *slova){
    pok Q = CreateNode();

    
    strcpy(Q->rijec,slova);

    while(L->next!=NULL)
        L=L->next;

    Q->next = L->next;
    L->next = Q;
}

void PrebaciBrojeve(pok L)
{
    L=L->next;

   while(L!=NULL)
    {
        if(strcmp(L->rijec,"0") ==0)
            strcpy(L->rijec,"nula");
        else if(strcmp(L->rijec,"1") == 0)
            strcpy(L->rijec,"jedan");

        else if(strcmp(L->rijec,"2") == 0)
            strcpy(L->rijec,"dva");
        else if(strcmp(L->rijec,"3") == 0)
            strcpy(L->rijec,"tri");

        else if(strcmp(L->rijec,"4") == 0)
            strcpy(L->rijec,"cetiri");
        else if(strcmp(L->rijec,"5") == 0)
           strcpy(L->rijec,"pet");

        else if(strcmp(L->rijec,"6") == 0)
            strcpy(L->rijec,"sest");
        else if(strcmp(L->rijec,"7") == 0)
            strcpy(L->rijec,"sedam");

        else if(strcmp(L->rijec,"8") == 0)
            strcpy(L->rijec,"osam");
        else if(strcmp(L->rijec,"9") == 0)
            strcpy(L->rijec,"devet");

        L=L->next;
    }
}