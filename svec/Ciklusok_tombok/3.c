#include <stdio.h>
#include <math.h>




int main(){

int n = 100;

for (int i = 1; i <= n; i++)
{
    if (n % i == 1)
    {
        printf("%d\n",i);
    }
    
}


return 0;

}