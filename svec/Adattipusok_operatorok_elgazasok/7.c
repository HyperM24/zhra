#include <stdio.h>





int main(){

int a = 0;
int b = 0;
int c = 0;

printf("Adja meg az a erteket: ");
scanf("%d",&a);

printf("Adja meg a b erteket: ");
scanf("%d",&b);

printf("Adja meg a c erteket: ");
scanf("%d",&c);

if (a < b && a < c)
{
    printf("A legkisebb ertek: %d",a);
}
else if (b < a && b < c)
{
    printf("A legkisebb ertek: %d",b);
}
else if (c < a && c < b)
{
    printf("A legkisebb ertek: %d",c);
}
else printf("A harom ertek egyenlo!"); 


return 0;





}