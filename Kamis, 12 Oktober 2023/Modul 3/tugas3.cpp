#include <stdio.h>
#include <math.h>

int main() {
    double alas, tinggi, sisi_miring;

    // Meminta pengguna untuk memasukkan panjang sisi alas dan sisi tinggi
    printf("Masukkan panjang sisi alas (cm): ");
    scanf("%lf", &alas);
    printf("Masukkan panjang sisi tinggi (cm): ");
    scanf("%lf", &tinggi);

    // Menghitung panjang sisi miring menggunakan rumus Pythagoras
    sisi_miring = sqrt(alas * alas + tinggi * tinggi);

    // Menampilkan panjang sisi miring
    printf("Panjang sisi miring segitiga siku-siku adalah: %.2lf cm\n", sisi_miring);

    return 0;
}
