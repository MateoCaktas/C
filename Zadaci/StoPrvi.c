#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Racunaj(char[],char);

int main()
{
    char imeDatoteke[20];
    char znak;

    printf("Unesite ime datoteke:");
    
    scanf("%[^\n]s",imeDatoteke);

    printf("Unesite znak:");
    scanf(" %c",&znak);

    Racunaj(imeDatoteke,znak);

    return 0;
}

void Racunaj(char imeFajla[20],char zn)
{
    char znak;
    int brojac=0;
    FILE *fp;
    fp = fopen(imeFajla,"r");
    if(fp==NULL)
        {
            printf("Ne moze otvorit fajl sa %s imenom.\n",imeFajla);
            exit(1);
        }
    else
        {
            while(!feof(fp))
            {
                fscanf(fp, "%c",&znak);
                if(znak == zn)
                {
                    brojac++;
                }
            }
            fclose(fp);
        }
        printf("Znak %c se ponavlja %d. puta.\n",zn,brojac);
}