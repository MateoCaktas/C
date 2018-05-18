#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Provjeri(char[],int);

int main()
{
    char niz[50];
    int velicina;
    printf("Unesi niz:");

    fgets(niz,sizeof(niz),stdin);
    velicina = strlen(niz);

    Provjeri(niz,velicina);

    return 0;
}
int Provjeri(char niz[50],int velicina)
{
    int i,j;
    for(i=0;i<velicina-1;i++)
    {
        niz[i] = toupper();
        for(j=i+1;j<velicina;j++)
        
        niz[j] = toupper();
            if(niz[i] == niz[j] && niz[i] != ' '){
                printf("Nije heterogram\n");
                return 0;

            }
    }
    printf("Heterogram je\n");
    return 0;
}