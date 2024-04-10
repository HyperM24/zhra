#include <stdio.h>
#include <string.h>







int main(int argc, const char *argv[]){

int szoveg = strlen(argv[1]);


for (int i = 0; i < szoveg; i++)
{
    if (argv[1][i] == ',')
    {
        printf("\n");
    }
    else
    {
        printf("%c",argv[1][i]);
    }
}



return 0;


}