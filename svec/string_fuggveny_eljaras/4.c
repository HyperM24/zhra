#include <stdio.h>
#include <string.h>


void osszefuz(char dest[], char str1[], char str2[]){

int meret = strlen(str1);
int meret2 = strlen(str2);

for (int i = 0; i < meret; i++)
{
    dest[i] = str1[i];
}

for (int j = 0; j < meret2; j++)
{
    dest[j + meret] = str2[j];
}





}




int main(){

char str1[64];
char str2[64];
char osszefuzott[128];

printf("Adjon meg egy szoveget: ");
fgets(str1,64,stdin);

printf("Adjon meg egy masik szoveget: ");
fgets(str2,64,stdin);

str1[strlen(str1)-1] = '\0';
str2[strlen(str2)-1] = '\0';

osszefuz(osszefuzott,str1,str2);
printf("%s + %s = %s",str1,str2,osszefuzott);





}