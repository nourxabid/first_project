#include <stdio.h>

int main() {
    float longeur, largeur, perimetre, surface;

    printf("donner la longeur en cm: ");
    scanf("%f", &longeur);

    printf("donner la largeur en cm: ");
    scanf("%f", &largeur);

    perimetre = 2 * (largeur + longeur) * 1e-2;  // ×10^-2
    surface   = (longeur * largeur) * 1e-4;      // ×10^-4

    printf("le perimetre : %.2f m \n", perimetre); //only show 2 digits
    printf("la surface : %.2f m \n", surface); //only show 2 digits

    return 0;
}
