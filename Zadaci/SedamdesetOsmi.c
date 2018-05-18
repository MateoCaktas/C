#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Provjeri(char[],char[],int,int);

int main()
{
    char niz1[20],niz2[20];
    int vel1,vel2;
    printf("Unesi prvi string:");
    fgets(niz1,sizeof(niz1),stdin);

    printf("\nUnesi drugi string:");
    fgets(niz2,sizeof(niz2),stdin);

    vel1 = strlen(niz1);
    vel2 = strlen(niz2);
    printf("%d velicina prvog \n %d velicina drugog\n",vel1,vel2);
    Provjeri(niz1,niz2,strlen(niz1),strlen(niz2));
        
    return 0;
}

int Provjeri(char array1[20],char array2[20],int size1,int size2)
{
    printf("%s \t%s\n",array1,array2);
    if(array1[0] == array2[size2-3] && array1[1] == array2[size2-2])
     {
        printf("Jesu!\n");
        return 0;
     }
    else if(array1[size1-3] == array2[0] && array1[size1-2] == array2[1])
    {
        printf("Jesu !\n");
        return 0;
    }
    else printf("Nisu ! \n");    
}