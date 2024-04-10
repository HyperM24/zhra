#include <stdio.h>
#include <math.h>

#define SIZE 1000000


int main(){

int db = 0;

for (int i = 1; i < SIZE; i++)
{
    int szam = i;
    int elsoszam, utolsoszam;

    while (szam >= 10)
    {
        szam /= 10;
    }
    elsoszam = szam;

    utolsoszam = i % 10;

    if (elsoszam == utolsoszam)
    {
        printf("%d\n",i);
        db++;
    }
    
    
}

printf("Ennyi darab olyan szam van: %d", db);


return 0;
}