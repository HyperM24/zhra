#include <stdio.h>



int main(){

char karakter;
char karakter2;

printf("Adjon meg egy karaktert: ");
scanf("%c%*c",&karakter);

printf("Adjon meg megegy karaktert: ");
scanf("%c%*c",&karakter2);


if (karakter == karakter2)
{
    printf("Azonosak!");
}
else
{
    printf("Nem azonosak!");
}

return 0;

}
