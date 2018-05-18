#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

void CitajIzDatoteke(char[]);

int main(void)
{
    char imeDatoteke[20];
    //POTREBNO PRIJE NAPRAVITI DATOTEKU SA ODREDENIM IMENOM
    printf("Unesi ime datoteke:\n");     
    
    scanf("%[^\n]s",imeDatoteke);

    CitajIzDatoteke(imeDatoteke);
    
    return 0;
}

void CitajIzDatoteke(char FileName[20])
{
    int maxDuljina=0;
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen(FileName, "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        printf("Redak duljine %zu :\n", read);
        printf("%s", line);
        if(read > maxDuljina)
            maxDuljina = read;
    }

    printf("Najveca duljina:%d\n",maxDuljina);

    fclose(fp);
    
    fp = fopen("primjer.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        if(read == maxDuljina)
             printf("Redak sa najvecom duljinom:\n%s", line);
    }
    fclose(fp);
    if(line)
        free(line);
    exit(EXIT_SUCCESS);
}   