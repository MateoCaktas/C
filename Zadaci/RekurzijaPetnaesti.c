#include <stdio.h>

#define MAX 10

void TraziNajveci(int[],int,int);

int main()
{
    int n,niz[MAX],i,brojac=0;

    printf("Koliko brojeva zelite:");
    scanf("%d",&n);

    printf("Unesi %d brojeva:",n);
    for(i = 0 ; i < n ; i++)
        scanf("%d",&niz[i]);

    TraziNajveci(niz,n,brojac);
    return 0;
}

void TraziNajveci(int array[MAX],int broj,int counter)
{
    static int najveciBroj=1;
    if(counter == broj)
        printf("Najveci broj je: %d",najveciBroj);
        else
        {
        if(array[counter] > najveciBroj)
        najveciBroj = array[counter];
        TraziNajveci(array,broj,counter+1);
        }
}