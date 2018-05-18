#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void Racunaj(double[]);

int main()
{
    double niz[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("A[%d] = ",i+1);
        scanf("%lf",&niz[i]);
    }

    Racunaj(niz);

    printf("\n");
    return 0;
}

void Racunaj(double array[5])
{
    double suma=0,umnozak=1;
    int i;

    for(i=0;i<5;i++)
    {
        array[i] = pow(array[i],3);
    }

    for(i = 0 ; i <5;i++)
    {
        suma+=array[i];
        umnozak*=array[i];
    }

    printf("\nUkupna suma kubiranih clanova:%f\nUkupni umnozak kubiranih clanova:%f",suma,umnozak);
}