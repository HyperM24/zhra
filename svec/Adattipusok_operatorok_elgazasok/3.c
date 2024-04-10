#include <stdio.h>
#include <math.h>




int main(){

int a = 0;
int b = 0;

printf("Add meg a testsulyod: ");
scanf("%d",&a);

printf("Add meg a magassagod: ");
scanf("%d",&b);

int bmi = a / pow(b,2);

printf("A testtomegindexed eredmenye: %d", bmi);

return 0;



}