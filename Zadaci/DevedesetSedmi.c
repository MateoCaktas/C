#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct struktura{
    float radijus;
    float opseg;
    float povrsina;
}kruznica;

float RacunajOpseg(float);
float RacunajPovrsinu(float);

int main()
{
    kruznica K;
    float rad,opseg,povrsina;

    printf("Upisi radijus kruznice:");
    scanf("%f",&rad);    

    opseg = RacunajOpseg(rad);
    povrsina = RacunajPovrsinu(rad);


    printf("Opseg kruznice:%f\nPovrsina kruznice:%f\n",opseg,povrsina);
    return 0;
}

float RacunajOpseg(float broj)
{
    return 2*broj*3.14;
}
float RacunajPovrsinu(float broj)
{
    return broj*broj*3.14;
}