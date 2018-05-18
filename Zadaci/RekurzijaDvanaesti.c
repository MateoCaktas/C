#include <stdio.h>
#include <stdlib.h>

int i=0;
void rekurzija(int);

int main()
{
    int broj;
    printf("unesi broj: \n");
    scanf("%d",&broj);
    rekurzija(broj);
    printf("\nBroj koraka:%d\n",i);

    return 0;
}

void rekurzija(int broj)
{
    int j=10, umnozak=1;
    while(j<=broj*10)
    {
        umnozak*=((broj%j)/(j/10));
        j*=10;
    }
    
    i++;
    printf("%d. umnozak iznosi:%d\n",i,umnozak);
    if(umnozak>9)
    rekurzija(umnozak);
}