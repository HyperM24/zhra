#include <stdio.h>

int main() {
    int n;

    // Pozitív egész szám bekérése és ellenőrzése
    do {
        printf("Kerem adja meg a pozitiv egesz szamot: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Hibas bemenet! Adjon meg egy pozitiv egesz szamot.\n");
        }
    } while (n <= 0);

    // Négyzet kirajzolása
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            // Az első és az utolsó sor teljesen csillagokkal legyen
            for (int j = 0; j < n; j++) {
                printf("* ");
            }
        } else {
            // Az egyéb sorok közepén legyenek csillagok, a széleken pedig üres helyek
            printf("* ");
            for (int j = 1; j < n - 1; j++) {
                printf("  ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
