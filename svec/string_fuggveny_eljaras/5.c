#include <stdio.h>





int main(){

char abc = 'a';

for (int i = 0; i < 26; i++)
{
    printf("%c %c\n", (abc+i + ('A' - 'a')), abc+i);
}



return 0;



}