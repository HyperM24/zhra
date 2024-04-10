#include <stdio.h>



int main(){

int a = 0;

printf("Add meg az eletkorod: ");
scanf("%d",&a);

if (a >= 18)
{
    printf("Nagykoru!");
}
else
{
    printf("Kiskoru!");
}



return 0;


}