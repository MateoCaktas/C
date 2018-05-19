#include <stdio.h>
#include <string.h>

int PrebaciUArapske(char[]);
int Provjeri(int,int);
int Zbroji(int);
int PrebaciBroj(char);

int main()
{
    char niz[20]= {};
    int rezultat=0;

    printf("Unesi niz znakova:");
    
    scanf("%s",niz);

    printf("\n%s\n",niz);

    rezultat = PrebaciUArapske(niz);

    printf("\nRezultat : %d\n",rezultat);
    return 0;
}


int PrebaciUArapske(char niz[])
{
    int duzina = strlen(niz);
    int i,final = 0;
    int rezultat=0;
    int broj1,broj2,broj;

    printf("\nDuljina = %d\n",duzina);

    for(i = 0 ; i<duzina;i++)
    {
        broj1 = PrebaciBroj(niz[i]);
        if(i<duzina)
        broj2 = PrebaciBroj(niz[i+1]);

        broj = Provjeri(broj1,broj2);

        if(broj1 < broj2)
        i++;
            
        
        rezultat +=broj;
    }

    return rezultat;
}

int Provjeri(int a, int b)
{
    if(a < b)
    return b-a;

    else return a;
}



int PrebaciBroj(char slovo)
{
    int broj;
    toupper(slovo);
    switch(slovo)
    {
    case 'M':
        broj = 1000;
        break;
    case 'D':
        broj = 500;
        break;
    case 'C':
        broj = 100;
        break;
    case 'L':
        broj = 50;
        break;
    case 'X':
        broj = 10;
        break;
    case 'V':
        broj = 5;
        break;
    case 'I':
        broj = 1;
        break;
        }

        return broj;
}
