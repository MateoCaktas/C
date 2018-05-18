#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void RacunajSve(char[]);

int main()
{
    char niz[20];

    printf("Upisi niz u obliku broj-broj-broj:\n");
        
    scanf("%[^\n]s",niz);
    RacunajSve(niz);

    printf("\n");
    return 0;
}

void RacunajSve(char array[20])
{
    int i=0, j=0,k, size, brojevi[20];
    int suma=0,prosjek;
    int najveci=0;

    size = strlen(array);

    printf("%d\n",size);
    char *new_array;
    new_array = (char*)malloc(20*sizeof(char));
        k=0;
    
    while(i<size)
    {
        if(array[i]!='-'){
            new_array[k] = array[i];
            k++;
        }
        if (array[i]=='-' || i==size-1){
            new_array[k+1]='\0';
           
            brojevi[j]=atoi(new_array);
            j++;
            k=0;
            
            free(new_array);
            new_array = (char*)malloc(k*sizeof(char));
        }
        i++;
    }
    for(i = 0 ; i < j;i++)
        printf("%d\t",brojevi[i]);


    for(i = 0 ; i < j ; i++){
        if(brojevi[i] > najveci)
            najveci = brojevi[i];
    }

    printf("\nU nizu imamo %d brojeva,a najveci broj je : %d\n",j,najveci);
}