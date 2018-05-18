#include <stdio.h>

void Ispisi(int,int);

int main()
{
    int n,m;

    printf("Unesite n:");
    scanf("%d",&n);
    printf("\nUnesite m:");
    scanf("%d",&m);

    Ispisi(n,m);

    return 0;
}

void Ispisi(n,m)
{
    if(n==m-1)
    {
        printf("Ispis gotov!");
    }
    else
    {
        printf("%d\t",n+1);
        Ispisi(n+1,m);
    }
}