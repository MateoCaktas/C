#include <stdio.h>

void IspisiRekurzivno(int);

int main()
{
    int n;

    printf("Unesite broj:");
    scanf("%d",&n);

    IspisiRekurzivno(n);

    return 0;
}

void IspisiRekurzivno(int broj)
{
    if(broj==0)
        printf("Gotov ispis!");
        else
        {
            if(broj%2==1)
                printf("\nBroj:%d",broj);

            IspisiRekurzivno(broj-1);
        }
}