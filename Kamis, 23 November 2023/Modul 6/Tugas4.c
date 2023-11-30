#include <stdio.h>

int main() {
    // Kecepatan sepeda (meter/detik)
    int kecepatan = 2;

    // Waktu dalam detik
    int waktu;

    // Mencetak header
    printf("Waktu (detik)\tJarak yang ditempuh (meter)\n");

    // Menggunakan struktur pengulangan for
    for (waktu = 10; waktu <= 100; waktu += 10) {
        // Menghitung jarak yang ditempuh
        int jarak = kecepatan * waktu;

        // Mencetak hasil
        printf("%d\t\t%d\n", waktu, jarak);
    }

    return 0;
}
