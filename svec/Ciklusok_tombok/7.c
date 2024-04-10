#include <stdio.h>





int main(){

int n = 0;

do {
        printf("Kerem adja meg a pozitiv egesz szamot: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Hibas bemenet! Adjon meg egy pozitiv egesz szamot.\n");
        }
    } while (n <= 0);


for (int i = 1; i <= n; i++)
{
    for (int j = 0; j <= i; j++)
    {
        printf("%d",j);
    }
    printf("\n");
}


return 0;

}