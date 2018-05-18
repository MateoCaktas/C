#include <stdio.h>
#include <stdbool.h>

bool Provjeri(int);

int main()
{
    int n;

    printf("Unesi broj n:");
    scanf("%d",&n);

    if(Provjeri(n))
        printf("Broj je repunit!\n");
        else printf("Broj nije repunit!\n");

    return 0;
}

bool Provjeri(int broj)
{
    if(broj==0)
        printf("Uspjesno!");
    else
    {
       
        
            if(broj%10 == 1)
            {
               
            } 
            else 
            {
            
            return 0;
            }
        
        Provjeri(broj/10);
    }
}