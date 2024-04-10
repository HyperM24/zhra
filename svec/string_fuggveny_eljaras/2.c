#include <stdio.h>
#include <string.h>
#include "prog1.h"


int szokoz(char szoveg[]){

    int szokozok = 0;

    for (int i = 0; szoveg[i] != '\0'; i++)
    {
        if (szoveg[i] == ' ')
        {
            szokozok++;
        }
        
    }
    
    return szokozok;

}


int main(){


char szoveg[100];
printf("Adjon meg egy szoveget: ");
fgets(szoveg,100,stdin);

printf("%d",szokoz(szoveg));


return 0;

}