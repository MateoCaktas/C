#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BrojRijeci 5

void Prebaci(char[]);

int main()
{
    char str1[100];
    
    
    printf("\n\n Ubaci svoj niz rijeci:\n");
        
    fgets(str1, sizeof str1, stdin);

    Prebaci(str1);
}
void Prebaci(char str1[]){
    char newString[10][10];
    char Akronim[10];
    int i,j,ctr;

    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        // ako je space ili prazno -> NULL na prostoru inicijaliziran
        if(str1[i]==' '||str1[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //za iducu rijec
            j=0;    //za iducu rijec,inicijalizirat indeks na 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }
    printf("\n Rijeci rastavljene :\n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);

    for(i = 0; i < ctr;i++)
    {
        Akronim[i] = newString[i][0];
    }

    printf("Akronim:");
    for(i=0;i<ctr;i++)
    {
        printf("%c",Akronim[i]);
    }

    printf("\n");
    
}