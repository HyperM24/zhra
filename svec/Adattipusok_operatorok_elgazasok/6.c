#include <stdio.h>



int main(){

double a = 0;
double b = 0;

printf("Adja meg az elso lebegeopontos szamot: ");
scanf("%lf",&a);

printf("Adja meg a masodik lebegopontos szamot: ");
scanf("%lf",&b);

if (a > b)
{
    printf("Az a ertek nagyobb: %lf",a);
}
else if (b > a)
{
    printf("A b ertek nagyobb: %lf",b);
}
else printf("Egyenlo a ket ertek!");


return 0;



}