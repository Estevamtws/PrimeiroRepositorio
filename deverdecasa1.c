#include <stdio.h>
#include <stdlib.h>
int main () {
    float NotaA, NotaB, NotaC, MEDIA;
    scanf("%f %f %f", &NotaA, &NotaB, &NotaC);
    MEDIA = ((NotaA * 2) + (NotaB * 3) + (NotaC * 5)) / 10;
    printf("MEDIA = %.1f\n", MEDIA);
    return 0;
}