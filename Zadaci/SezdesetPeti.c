#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RacunajSve(char[]);

int main()
{
    char niz[20];
    int num1, num2, num3;
    int rez;
    printf("Upisi niz u obliku broj-broj-broj:\n");
    fgets(niz,sizeof(niz),stdin);

    
    RacunajSve(niz);

    printf("\n");
    return 0;
}

void RacunajSve(char array[20])
{
    int i=0, j,k, size, brojevi[3];
    int suma=0,prosjek;
    size = strlen(array);
    for(j=0;j<3;j++) {
        char new_array[20];    
        k=0;
    while(array[i]!='-' && i<size)
    {
        new_array[k] = array[i];
        i++;
        k++;
    }
    brojevi[j]=atoi(new_array);
    i++;
    }

    for(j=0;j<3;j++){
        printf("Broj:%d\n",brojevi[j]);
        suma +=brojevi[j];
    }
    prosjek = suma/3;

    printf("Suma brojeva je %d\nA prosjek %d",suma,prosjek);
}

