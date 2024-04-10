#include <stdio.h>


int main(){

int a = 0;

printf("Adjon meg egy egesz szamot: ");
scanf("%d",&a);

if (a % 2 == 0)
{
    printf("A szam paros!");
}
else
{
    printf("A szam paratlan!");
}

return 0;

}