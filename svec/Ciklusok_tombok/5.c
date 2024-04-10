#include <stdio.h>





int main(){

int num = 0;
printf("Adjon meg egy egesz szamot: ");
scanf("%d",&num);

int ujszam = 0;
int osszeg = 0;
int darab = 0;

while (1)
{
    printf("Adjon meg uj egesz szamot: ");
    scanf("%d",&ujszam);

    osszeg = osszeg + ujszam;
    darab++;

    if (osszeg > num)
    {
        break;
    }
    
    
}

int atlag = osszeg/darab;

printf("Az atlag: %d", atlag);

return 0;


}