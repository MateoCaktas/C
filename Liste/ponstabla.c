#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Stablo;
typedef struct Stablo *pokStablo;

pokStablo CreateNode();
void IspisStabla();
pokStablo Unos();

typedef struct Stablo{
    char rijec[20];
    char prvoslovo;
    int brojac;

    pokStablo lijevo;
    pokStablo desno;
}Tree;

int main()
{
    pokStablo S;

    S = NULL;

    S = CreateNode();

    printf("Prije unosa:\n");
    Unos(S);

    printf("Nakon unosa:\n");

    IspisStabla(S);

    return 0;
}
pokStablo CreateNode()
{
    pokStablo Q = (pokStablo)malloc(sizeof(Tree));
    if(Q==NULL)
        return NULL;
    else return Q;
}
void IspisStabla(pokStablo S)
{
    IspisStabla(S->lijevo);
    {
    printf("%s\t",S->rijec);
    printf("- %c",S->prvoslovo);
    }
    IspisStabla(S->desno);
}
pokStablo Unos(pokStablo S)
{   
    char ric[20];
   
    if(S==NULL)
    {
    S = CreateNode();
    S->lijevo = NULL;
    S->desno = NULL;
    S->brojac = 1;
    printf("Unesi idiote\n");
     scanf("%s",ric);
   
    strcpy(S->rijec,ric);
    }
    else if(strcmp(S->rijec,ric)< 0)
        S->lijevo = Unos(S->lijevo);
    else if(strcmp(S->rijec,ric) > 0)
        S->desno = Unos(S->desno);
    
    return S;
}