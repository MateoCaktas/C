#include <stdio.h>

void RacunajBinarni(int*,int,int,int*,int);
int *PretvoriUBinarni(int,int*);
int main()
{
    int broj,*bin,i,*velicina,k,niz2[10];
    int brojacJed=0,brojacNul=0,counter=0;
    k=0;
    velicina = &k;

    printf("Unesite zeljeni broj:");
    scanf("%d",&broj);
    bin = PretvoriUBinarni(broj,velicina);

    for(i = *velicina-1 ; i >= 0;i--)
    printf("\nBinarni zapis:%d",*(bin+i));

    printf("Velicina:%d\n",*velicina);
    for(i = 0 ; i < *velicina;i++)
        niz2[i] = bin[i];
    RacunajBinarni(niz2,brojacJed,brojacNul,velicina,counter);

    printf("\n");
    return 0;
}

void RacunajBinarni(int *broj,int brojacJedinica,int brojacNula,int *size,int counter)
{
    if(counter==*size)
    {
        printf("\nGotovo!Rezultat:%d jedinica i %d nula\n",brojacJedinica,brojacNula);
    }
    else 
    {
        printf("Broj:%d\n",*broj);
        if(*(broj)%10 == 1)
            brojacJedinica++;
        else brojacNula++;
        counter++;
       *broj = *(broj+counter);
        RacunajBinarni(broj,brojacJedinica,brojacNula,size,counter);
    }
}

int *PretvoriUBinarni(int broj,int *size)
{
    static int num[10];

    int i = 0,j;
    while(broj > 0)
    {
        num[i] = broj%2;
        broj = broj/2;
        i++;
    }

    for(j = i-1;j>=0 ; j--)
        printf("%d",num[j]);

    *size = i;
    return num;
}