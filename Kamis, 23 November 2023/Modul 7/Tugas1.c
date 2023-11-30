#include <stdio.h>

int main() {
    // Mendefinisikan array untuk menyimpan nilai mahasiswa
    int nilai[10];

    // Menginput nilai mahasiswa ke dalam array
    printf("Masukkan 10 nilai mahasiswa:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    // Mencetak daftar nilai mahasiswa yang lulus (nilai >= 60)
    printf("\nDaftar nilai mahasiswa yang lulus:\n");
    for (int i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("Nilai mahasiswa ke-%d: %d\n", i + 1, nilai[i]);
        }
    }

    return 0;
}
