#include <stdio.h>



int main(){

    double a = 0;
    double b = 0;


printf("Adja meg az elso lebegeopontos szamot: ");
scanf("%lf",&a);

printf("Adja meg a masodik lebegopontos szamot: ");
scanf("%lf",&b);

double osszeg = a + b;
double kulonbseg = a - b;
double szorzat = a * b;
double hanyados = a / b;

printf("osszeg: %lf, kulonbseg: %lf, szorzat: %lf, hanyados: %lf",osszeg,kulonbseg,szorzat,hanyados);

return 0;

}