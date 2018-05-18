#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DuljinaStr 10

void DodajStringove(char[],char[],char[]);

int main(){
    char niz1[DuljinaStr],niz2[DuljinaStr],niz3[DuljinaStr];
    char tresh;

    printf("Unesite 3 stringa:\n");
    scanf("%[^\n]s",niz1);
    scanf("%c",&tresh);
    printf("Unesi drugi string:");
    scanf("%[^\n]s",niz2);
    scanf("%c",&tresh);
    printf("Unesi treci string:");
    scanf("%[^\n]s",niz3);
    scanf("%c",&tresh);

    DodajStringove(niz1,niz2,niz3);

    printf("\n");
    return 0;
}

void DodajStringove(char str1[DuljinaStr],char str2[DuljinaStr],char str3[DuljinaStr]){
char * new_str ;
if((new_str = malloc(strlen(str1)+strlen(str2)+strlen(str3)+2)) != NULL){
    new_str[0] = '\0';   // ensures the memory is an empty string
    strcat(new_str,str1);
    strcat(new_str," ");
    strcat(new_str,str3);
    strcat(new_str," ");
    strcat(new_str,str2);
} else {
    printf("Greska!\n");
 
}   
    printf("Novi string je : \n%s",new_str);
}