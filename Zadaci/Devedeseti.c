#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct struktura{
    char imeAutora[20];
    char imeSeminara[20];
    int god_izd;
    int ocjena;
}zavrsni;

void Potrazi(zavrsni,int);

int main()
{
    char imedatoteke[15]; //Napravi datoteku "primjer.txt" u isti folder kao i projekt
    int brojac=0,i;
    int num;
    FILE *fp;

    printf("Unesi ime datoteke iz koje zelis citati podatke:"); // Pazi na velika i mala slova
    scanf("%s",imedatoteke);    
    fp = fopen(imedatoteke,"r");
    if(fp==NULL)
        {
            printf("Ne mogu otvorit datoteku.\n"); // Ako se ovo pojavi,datoteka
                                            // mora bit u istom folderu kao i projekt
            exit(1);
        }
        else
        {
            while(!feof(fp))
                if(fgetc(fp) =='\n')
                    brojac++;

        fclose(fp);
        }
    zavrsni S[brojac];
    
 
    fp = fopen(imedatoteke,"r");
    if(fp==NULL){
        printf("Neuspjesno!\n");
        exit(1);
    }
        else{
            while(!feof(fp))
            {
               fscanf(fp,"%s %s %d %d", S[i].imeAutora,S[i].imeSeminara, &S[i].god_izd, &S[i].ocjena);
               printf("\n%s %s %d %d " ,S[i].imeAutora,S[i].imeSeminara,S[i].god_izd,S[i].ocjena);
               i++;
            }
            fclose(fp);
        }  

    printf("Upisi koju rijec zelis potraziti:");
    scanf("%d",&num);
    for(i = 0 ; i < brojac;i++)
        Potrazi(S[i],num);
        return 0;
}

void Potrazi(zavrsni Z,int num)
{
    if(Z.ocjena == num)
        printf("Ime autora koji ima tu ocjenu:%s\n",Z.imeAutora);
}