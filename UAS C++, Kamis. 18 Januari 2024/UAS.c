#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Fungsi untuk menghitung kecepatan motor dan waktu mencuci
void hitungKecepatanWaktu(int detected_kekeruhan_air, int kekeruhan_air[], int *kecepatan_motor, int *waktu_mencuci, int level_rata_rata, size_t size_kekeruhan_air) {
    for (size_t i = 0; i < size_kekeruhan_air / sizeof(kekeruhan_air[0]); i++) {
        if (kekeruhan_air[i] == detected_kekeruhan_air) {
            *kecepatan_motor = kekeruhan_air[i] - level_rata_rata + *kecepatan_motor;
            *waktu_mencuci = *waktu_mencuci - 120; // Mengurangi waktu mencuci 2 menit untuk jeda.
            break;
        }
    }
}

// Fungsi untuk menjalankan proses pencucian
void jalankanProsesCucian(int kecepatan_motor, int waktu_mencuci) {
    printf("Motor listrik utama mulai berputar dengan kecepatan %d rpm selama %d menit.\n", kecepatan_motor, waktu_mencuci);

    // Simulasi jeda selama 2 menit untuk membuang air kotor.
    sleep(120);

    printf("Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit.\n");
    sleep(2); // Tunggu 2 detik untuk motor pembuka klep pembuangan air kotor aktif.

    printf("Motor listrik utama berputar dengan kecepatan 2000 rpm selama 3 menit untuk mengeringkan cucian.\n");
    kecepatan_motor = 2000;
    waktu_mencuci = 180; // Mengatur waktu mencuci menjadi 3 menit untuk pengeringan.
    sleep(3); // Tunggu 3 detik untuk pengeringan.

    printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh.\n");
    sleep(120); // Tunggu 2 menit untuk motor pembuka klep pengisian air aktif.

    printf("Motor listrik utama berputar selama sisa waktu mencuci.\n");
    sleep(waktu_mencuci); // Tunggu sisa waktu mencuci.

    printf("Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis.\n");
    sleep(120); // Tunggu 2 menit untuk motor pembuka klep pembuangan air kotor aktif.

    printf("Proses pencucian selesai.\n");
}

int main() {
    int kekeruhan_air[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
    int kecepatan_motor = 1000;
    int waktu_mencuci = 3600;
    int level_rata_rata = 20;
    int detected_kekeruhan_air;

    printf("Tekan Enter untuk memulai proses pencucian...\n");
    getchar();  // Menunggu sampai tombol Enter ditekan.

    printf("Masukkan level kekeruhan air yang Anda inginkan dari array (6, 8, 12, 18, 24, 30, 36, 42, 49): ");
    scanf("%d", &detected_kekeruhan_air);

    // Panggil fungsi untuk menghitung kecepatan motor dan waktu mencuci
    hitungKecepatanWaktu(detected_kekeruhan_air, kekeruhan_air, &kecepatan_motor, &waktu_mencuci, level_rata_rata, sizeof(kekeruhan_air) / sizeof(kekeruhan_air[0]));

    // Panggil fungsi untuk menjalankan proses pencucian
    jalankanProsesCucian(kecepatan_motor, waktu_mencuci);

    return 0;
}
