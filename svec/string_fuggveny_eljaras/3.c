#include <stdio.h>
#include <string.h>
#include <ctype.h>

int tartalmaz(char szoveg[]){

    int kisbetu = 0;
    int nagybetu = 0;
    int szam = 0;
    int specialis = 0;


    for (int i = 0; szoveg[i] != '\0'; i++)
    {
        if (islower(szoveg[i]))
        {
            kisbetu = 1;
            
        }
        
        if (isupper(szoveg[i]))
        {
            nagybetu = 1;
        }

        if (isdigit(szoveg[i]))
        {
            szam = 1;
        }
        
        if (!islower(szoveg[i]) && !isupper(szoveg[i]) && !isdigit(szoveg[i]))
        {
            specialis = 1;   
        }
        
        
        
    }
    
    return (kisbetu && nagybetu && szam && specialis) ? 1:0;

}







int main(){

char szoveg[100];
printf("Adjon meg egy szoveget: ");
fgets(szoveg,100,stdin);

printf("%d", tartalmaz(szoveg));

}