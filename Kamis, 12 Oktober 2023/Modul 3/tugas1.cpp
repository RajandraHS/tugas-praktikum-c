#include <stdio.h>
#include <math.h>

int main() {
    double alas, tinggi, luas, keliling;

    // Meminta pengguna memasukkan panjang alas dan tinggi segitiga
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%lf", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%lf", &tinggi);

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menghitung sisi miring segitiga (dengan menggunakan teorema Pythagoras)
    double sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menghitung keliling segitiga
    keliling = alas + tinggi + sisi_miring;

    // Menampilkan hasil luas dan keliling segitiga
    printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);

    return 0;
}
