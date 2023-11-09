#include <stdio.h>

int main(){

    int jari;
    float keliling, luas; jari = 7;

    luas = 3.14 * jari * jari;
    keliling = 2 * 3.14 * jari;

    printf("Luas dan Keliling Lingkaran");
    printf("\nJari - Jari = %i", jari);
    printf("\nLuas = %.3f", luas);
    printf("\nKeliling = %.2f", keliling);

    return 0;
}
