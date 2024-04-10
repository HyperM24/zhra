#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>






int main(int argc, char *argv[]){

if (argc != 3)
{
    printf("Hiba!");
    return 1;
}

int szam1 = atoi(argv[1]);
int szam2 = atoi(argv[2]);


/*if  (isdigit(argv[1]) && isdigit(argv[2]) && argv[1] != "0" && argv[2] != "0")
{
    szam1 = atoi(argv[1]);
    szam2 = atoi(argv[2]);
    szorzas = szam1 * szam2;
    printf("A ket szam szorzata: %d\n", szorzas);

}
else
{
    printf("Hiba!");
    return 1;
}
*/

if (szam1 == 0 && *argv[1] != '0' || szam2 == 0 && *argv[2] != '0')
{
    printf("Hiba!");
    return 1;
}

int eredmeny = szam1 * szam2;
printf("A ket szam szorzata: %d", eredmeny);





}