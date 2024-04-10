#include <stdio.h>


int main(){

int a = 0;
int b = 0;

printf("Add meg az a erteket: ");
scanf("%d",&a);

printf("Add meg a b erteket: ");
scanf("%d",&b);

int osszeg = a + b;
int kulonbseg = a - b;
int szorzat = a * b;
int hanyados = a / b;

printf("Az osszeg: %d, A kulonbseg: %d, A szorzat: %d, A hanyados: %d", osszeg,kulonbseg,szorzat,hanyados);

return 0;

}