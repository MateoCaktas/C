#include <stdio.h>

void IspisiNormalno(int,int);

int main()
{
    int n,brojac = 0;

    printf("Unesi broj n:");
    scanf("%d",&n);

    IspisiNormalno(n,brojac);
    
    return 0;
}

void IspisiNormalno(int broj,int i)
{
    
    if(i==broj)
        printf("Gotov ispis!");
    else
        {
            if(i%2==1)
                printf("\nBroj:%d",i);
            IspisiNormalno(broj,i+1);
        }

}