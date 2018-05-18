#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //NAPRAVI DATOTEKU "my_file.txt" !!
    FILE *fp;
    char rijec[20];
    int broj,i;
    fp = fopen("my_file.txt","r");
    if(fp==NULL)
        {
            printf("Greska!Nemoguce otvaranje fajla!\n");
            exit(1);
        }
        else
        {
            while(!feof(fp))
            {
                fscanf(fp,"%s %d " , rijec,&broj);
                for(i=0;i<broj;i++)
                    {
                        printf("%s\t",rijec);
                    }
                    printf("\n");
            }
            fclose(fp);
        }

    return 0;
}