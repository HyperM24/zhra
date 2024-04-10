#include <stdio.h>



int main(){

int a = 0;
int b = 0;
int c = 0;

printf("Adja meg az a oldal hosszat: ");
scanf("%d",&a);

printf("Adja meg az b oldal hosszat: ");
scanf("%d",&b);

printf("Adja meg az c oldal hosszat: ");
scanf("%d",&c);

if (a + b > c && a + c > b && b + c > a)
{
    printf("A haromszog megszerkesztheto!");
}
else
{
    printf("A haromszog nem megszerkesztheto!");
}

return 0;

}