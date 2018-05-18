#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void JeLiAkronim(char[]);

int main()
{
    char niz[50];
    
    
    printf("Unesi niz: ");

    fgets(niz,sizeof(niz),stdin);

    JeLiAkronim(niz);

    return 0;
}

void JeLiAkronim(char niz[50])
{
    int i=0,j=1,velicina;

    velicina = strlen(niz);

    while(i < velicina)
        {
            if(niz[i] != ' ')
                i++;
            else {
                i++;
                if(niz[i]!=niz[j]) {
                printf("Nije akronim\n");
                i=velicina;
                j=-2;
                }
                j++;
                i++;
            }
        }
        if(j>=0)
        printf("Akronim je\n");
    
}