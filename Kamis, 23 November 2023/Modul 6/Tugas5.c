#include <stdio.h>

int main() {
    // Inisialisasi saldo awal
    double saldo = 1000000.0;

    // Tingkat bunga per bulan (2%)
    double bunga = 0.02;

    // Jumlah bulan
    int jumlah_bulan = 10;

    // Perulangan untuk menghitung saldo setiap bulan
    for (int bulan = 1; bulan <= jumlah_bulan; bulan++) {
        // Menghitung bunga bulan ini
        double bunga_bulan_ini = saldo * bunga;

        // Menambahkan bunga ke saldo
        saldo = saldo + bunga_bulan_ini;

        // Cetak saldo setelah bulan ini
        printf("Saldo setelah bulan %d: Rp. %.2f\n", bulan, saldo);
    }

    return 0;
}
