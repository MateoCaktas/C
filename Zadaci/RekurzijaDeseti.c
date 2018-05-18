#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Ispis(int,int,int,bool);

int main()
{
    int n,brojac=0;
    bool up = false;
    printf("Unesite broj n:");
    scanf("%d",&n);

    Ispis(n,brojac,n,up);
    return 0;
}

void Ispis(int broj,int i,int max,bool uzlazno)
{
    if(broj==0 || uzlazno)
    {
        uzlazno = 1;
        if(max==i)
        {
            printf("\nIspis gotov!\n");
            exit(1);
        }
    
    else {
        if(broj%2==1)
            printf("\nNeparni uzlazno:%d",broj);
        Ispis(broj+1,i+1,max,uzlazno);
        }
    }
    else
    {
        if(broj%2==1)
            printf("\nNeparni broj:%d",broj);
            Ispis(broj-1,i,max,uzlazno);
    }
}