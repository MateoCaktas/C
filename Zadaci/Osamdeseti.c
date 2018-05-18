#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int JeLiPalindrom(char[],int);
int JeLiDupli(char[],int);

int main()
{  
    char niz[30];
    int velicina,i;
    int istina=1;
    printf("Unesite svoj niz:");
    
    fgets(niz,sizeof(niz),stdin);

    velicina = strlen(niz)-1;
    printf("\n%d\n",velicina);

    for(i = 0 ; i < velicina;i++)
    {
        printf("%c",niz[i]);
    }
    istina = JeLiPalindrom(niz,velicina);
    if(istina)
        printf("\nPalindrom je!\n");

    istina = 1;

    istina = JeLiDupli(niz,velicina);
    if(istina)
        printf("\nDupli su\n");

    return 0;
}
 // NAPOMENA:UNOSITI RIJECI ZAJEDNO,NE ODVOJENO(npr ne Ana voli milovana,nego anavolimilovana)
int JeLiPalindrom(char array[30],int size)
{
    char arrayTemp[size];
    int i;

    printf("\nPrvi niz:\t");
    for(i = 0 ; i < size; i ++)
        printf("%c",array[i]);

    for(i=0;i<size;i++)
        arrayTemp[i] = array[size-i-1];

    printf("\nDrugi niz:\t");
    for(i=0;i<size;i++)
        printf("%c",arrayTemp[i]);

    for(i = 0 ; i < size;i++)
        if(array[i] != arrayTemp[i]){
            printf("\nNije palindrom!");
            return 0;
        }
        
}
int JeLiDupli(char array[30],int size)
{
    int pola,i;
    pola = size/2;
    char arrayTemp1[10],arrayTemp2[10];

    for(i = 0;i < pola;i++)
        arrayTemp1[i] = array[i];

    for(i = 0;i < pola;i++)
        arrayTemp2[i] = array[i+pola];


    printf("\nTemp niz 1 : ");
    for(i = 0;i<pola;i++)
        printf("%c",arrayTemp1[i]);

    printf("\nTemp niz 2 : ");
    for(i = 0 ; i < pola;i++)
        printf("%c",arrayTemp2[i]);
//  POPRAVI OVO
printf("\n\n");
    for(i = 0 ; i < pola;i++)
        if(arrayTemp1[i] != arrayTemp2[i])
        {
            printf("Nisu dupli\n");
            return 0;
        }
    
}