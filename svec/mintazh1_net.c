#include <stdio.h>
#include "prog1.h"
#include <string.h>



string makerurl(const string url, char mode){

    if (url == NULL || mode != 'w' && mode != 'h')
    {
        printf("Hiba! Adj meg pontosan egy sztringet és egy program módot!");
        
    }
    
    if (mode == 'w')
    {
        printf("www.%s.hu",url);
    }
    else if (mode == 'h')
    {
        printf("https://%s.hu",url);
    }
    
    return url;
    
}


int main(int argc, char *argv[]){


string url = argv[1];

if (argc != 3 || strlen(argv[2]) != 1)
{
    printf("Hiba! Adj meg pontosan egy sztringet és egy program módot!");
    return 1;
}
else
{
    makerurl(url,argv[2][0]);

}


return 0;

}