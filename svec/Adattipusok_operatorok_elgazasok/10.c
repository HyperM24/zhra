#include <stdio.h>
#include <math.h>

#define pi M_PI


int main(){

int d = 0;

printf("Adja meg a kor atmerojet: ");
scanf("%d",&d);

int kor_terulet = (pow(d,2) * pi) / 4;
int kor_kerulet = d * pi;

printf("A kor terulete: %d, A kor kerulete: %d", kor_terulet,kor_kerulet);

return 0;


}