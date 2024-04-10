#include <stdio.h>
#include <time.h>
#include <stdlib.h>





int main(){

int n = 0;
printf("Hany db random szamot kersz?: ");
scanf("%d",&n);

int also_hatar = 0;
printf("Also hatar: ");
scanf("%d",&also_hatar);

int felso_hatar = 0;
printf("Felso hatar: ");
scanf("%d",&felso_hatar);

srand(time(NULL));



printf("A generalt szamok: ");
for (int i = 0; i < n; i++)
{
    int veletlen = rand() % (felso_hatar - also_hatar + 1) + also_hatar;
    printf("%d ", veletlen);
}





}