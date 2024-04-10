#include <stdio.h>
#include <stdlib.h>









int main(int argc, const char *argv[]){

if (argc != 2)
{
    printf("Hiba!");
    return 1;
}

int a = atoi(argv[1]);
int fakt = 1;

for (int i = 1; i <= a; i++)
{
    fakt = fakt * i;
}

printf("%d", fakt);

return 0;


}