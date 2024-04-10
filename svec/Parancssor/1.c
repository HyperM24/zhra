#include <stdio.h>
#include <string.h>





int main(int argc, const char *argv[]){

    char szavak[100];

    do
    {
        printf("Irj be szavakat: ");
        fgets(szavak,100,stdin);

        szavak[strlen(szavak)-1] = '\0';



    } while (strcmp(argv[1],szavak) != 0);

    printf("Vege!");


return 0;



    
}