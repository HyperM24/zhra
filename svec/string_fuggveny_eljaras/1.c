#include <stdio.h>
#include <string.h>
#include "prog1.h"

#define SIZE 100

int main(){


char szoveg[SIZE];
printf("Adjon meg egy szoveget: ");
fgets(szoveg,SIZE,stdin);

int hossz = strlen(szoveg);

for (int i = hossz; i >= 0; i--)
{
    printf("%c",szoveg[i]);
}

return 0;


}