#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int Rekurzija();

int main()
{
    printf("Unosi znakove,za prekid unosa unesi 0:\n");

    Rekurzija();

    return 0;
}

int Rekurzija()
{
    char znak;
    scanf("%c",&znak);
    
    if(znak == '0')
    {
        return 0;        
    }
    else
    {
        Rekurzija();
        printf("%c,",znak);
    }
}