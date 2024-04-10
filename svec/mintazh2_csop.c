#include <stdio.h>
#include <stdlib.h>
#include <time.h>








int main(){

int random_db = 5;
int negativ_db = 0;
int random_tomb[random_db];
int felso_hatar = 2024;
int also_hatar = -2024;

srand(time(NULL));

for (int i = 0; i < random_db; i++)
{
    random_tomb[i] = rand() % (felso_hatar - also_hatar + 1) + also_hatar;

    if (random_tomb[i] < 0)
    {
        negativ_db++;
    }
    
    printf("%d\n", random_tomb[i]);

}

printf("Negativ ertekek darabja: %d", negativ_db);

return 0;





}