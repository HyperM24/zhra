#include <stdio.h>

int main() {
    int n, szam, osszeg = 0, legnagyobb, legkisebb;
    float atlag;


    do {
        printf("Kerem adja meg a pozitiv egesz szamot (n): ");
        scanf("%d", &n);
    } while (n <= 0);


    printf("Kerem adja meg az %d darab egesz szamot:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d. szam: ", i + 1);
        scanf("%d", &szam);

        osszeg += szam;

        if (i == 0 || szam > legnagyobb)
            legnagyobb = szam;
        if (i == 0 || szam < legkisebb)
            legkisebb = szam;
    }

    atlag = (float)osszeg / n;

    
    printf("\nAz szamok osszege: %d\n", osszeg);
    printf("Az szamok atlaga: %.2f\n", atlag);
    printf("Legnagyobb szam: %d\n", legnagyobb);
    printf("Legkisebb szam: %d\n", legkisebb);

    return 0;
}
