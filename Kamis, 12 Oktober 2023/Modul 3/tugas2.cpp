#include <stdio.h>

int main() {
    int celcius;
    float fahrenheit, reamur;

    // Meminta pengguna untuk memasukkan suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius (bilangan bulat): ");
    scanf("%d", &celcius);

    // Menghitung suhu dalam Fahrenheit dan Reamur
    fahrenheit = (celcius * 9 / 5.0) + 32;
    reamur = celcius * 4 / 5.0;

    // Menampilkan suhu dalam Fahrenheit dan Reamur
    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f\n", reamur);

    return 0;
}
