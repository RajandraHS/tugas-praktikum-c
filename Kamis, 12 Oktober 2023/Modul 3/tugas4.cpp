#include <stdio.h>

int main() {
    int bilangan;

    // Meminta pengguna untuk memasukkan bilangan
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Memeriksa apakah bilangan adalah ganjil atau genap
    if (bilangan > 0) {
        if (bilangan % 2 == 0) {
            printf("GENAP\n");
        } else {
            printf("GANJIL\n");
        }
    } else {
        printf("Bilangan yang Anda masukkan bukan bilangan bulat positif.\n");
    }

    return 0;
}
