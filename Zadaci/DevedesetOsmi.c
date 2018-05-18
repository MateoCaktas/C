#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct struktura{
    int brojnik;
    int nazivnik;
}razlomak;

void PrintMenu();
float Zbroji(int,int,int,int);
float Podijeli(int,int,int,int);
float Oduzmi(int,int,int,int);
float Pomnozi(int,int,int,int);

int main()
{
    float rezultat;
    char izbor,i=1;
    razlomak R;
    razlomak K;
    printf("Upisi brojnik:");
    scanf("%d",&R.brojnik);

    printf("Upisi nazivnik:");
    scanf("%d",&R.nazivnik);

    PrintMenu();
    scanf("%c",&izbor);
    //NAPOMENA: Nakon sta se upise broj izmedu 1-4(za operaciju) i unese drugi razlomak,obavezno pritisnit 5!
    while(izbor != '5'){
    switch(izbor)
    {
        case '1':printf("Unesi drugi razlomak:");
                scanf("%d",&K.brojnik);
                scanf("%d",&K.nazivnik);
                rezultat = Zbroji(R.brojnik,R.nazivnik,K.brojnik,K.nazivnik);
                break;
        case '2':printf("Unesi drugi razlomak:");
                scanf("%d",&K.brojnik);
                scanf("%d",&K.nazivnik);
                rezultat = Oduzmi(R.brojnik,R.nazivnik,K.brojnik,K.nazivnik);
                break;
        case '3':printf("Unesi drugi razlomak:");
                scanf("%d",&K.brojnik);
                scanf("%d",&K.nazivnik);
                rezultat = Podijeli(R.brojnik,R.nazivnik,K.brojnik,K.nazivnik);
                break;
        case '4':printf("Unesi drugi razlomak:");
                scanf("%d",&K.brojnik);
                scanf("%d",&K.nazivnik);
                rezultat = Pomnozi(R.brojnik,R.nazivnik,K.brojnik,K.nazivnik);
                break;        
        default:
                break;
    }
    
    
    scanf("%c",&izbor);
}    

    printf("Rezultat operacije = %f\n",rezultat);
    return 0;
}

float Zbroji(int br1,int naz1,int br2,int naz2)
{
    printf("Uslo u zbroji\n");
    int ukupNaz;
    int ukupBrojnik;
    int manji,i;
    ukupNaz = naz2*naz1;
    br1 = br1 * (ukupNaz / naz1);
    br2 = br2 * (ukupNaz / naz2);
    ukupBrojnik = br1 + br2;

    if(ukupBrojnik < ukupNaz)
        manji = ukupBrojnik;
        else manji = ukupNaz;

    for(i = 1;i< manji;i++)
    {
        if(ukupBrojnik%i==0 && ukupNaz%i==0){
            ukupBrojnik /= i;
            ukupNaz /=i;
        }
    }
    printf("Broj: %d / %d \n" , ukupBrojnik,ukupNaz);

    return (float)ukupBrojnik/(float)ukupNaz;
}

float Oduzmi(int br1,int naz1,int br2,int naz2)
{
    int ukupNaz;
    int ukupBrojnik;
    int manji,i;
    
    ukupNaz = naz2*naz1;
    br1 = br1 * (ukupNaz / naz1);
    br2 = br2 * (ukupNaz / naz2);
    ukupBrojnik = br1-br2;

    if(ukupBrojnik < ukupNaz)
        manji = ukupBrojnik;
        else manji = ukupNaz;

    for(i = 1;i< manji;i++)
    {
        if(ukupBrojnik%i==0 && ukupNaz%i==0){
            ukupBrojnik /= i;
            ukupNaz /=i;
        }
    }
    printf("Broj: %d / %d \n" , ukupBrojnik,ukupNaz);

    return (float)ukupBrojnik/(float)ukupNaz;
}
float Pomnozi(int br1,int naz1,int br2,int naz2)
{
    int ukupNaz;
    int ukupBrojnik;
    int manji,i;
    
    ukupNaz = naz2*naz1;
    ukupBrojnik = br1*br2;

    if(ukupBrojnik < ukupNaz)
        manji = ukupBrojnik;
        else manji = ukupNaz;

    for(i = 1;i< manji;i++)
    {
        if(ukupBrojnik%i==0 && ukupNaz%i==0){
            ukupBrojnik /= i;
            ukupNaz /=i;
        }
    }
    printf("Broj: %d / %d \n" , ukupBrojnik,ukupNaz);

    return (float)ukupBrojnik/(float)ukupNaz;
}
float Podijeli(int br1,int naz1,int br2, int naz2)
{
    int ukupNaz;
    int ukupBrojnik;
    int manji,i;
    
    ukupBrojnik = br1 * naz2;
    ukupNaz = br2 * naz1;

    if(ukupBrojnik < ukupNaz)
        manji = ukupBrojnik;
        else manji = ukupNaz;

    for(i = 1;i< manji;i++)
    {
        if(ukupBrojnik%i==0 && ukupNaz%i==0){
            ukupBrojnik /= i;
            ukupNaz /=i;
        }
    }
    printf("Broj: %d / %d \n" , ukupBrojnik,ukupNaz);

    return (float)ukupBrojnik/(float)ukupNaz;
}
void PrintMenu()
{
    printf("Unesite svoj odabir:\n");
    printf("1 - Zbroji razlomke\n");
    printf("2 - Oduzmi razlomke\n");
    printf("3 - Podijeli razlomke\n");
    printf("4 - Pomnozi razlomke\n");
    printf("5 - Izlaz iz petlje\n");
}