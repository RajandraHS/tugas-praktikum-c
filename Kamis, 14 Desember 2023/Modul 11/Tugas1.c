#include <stdio.h>

int main() {
    // Inisialisasi array A, B, dan C
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];

    // Menghitung nilai rata-rata array A
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    float avg = (float)sum / 12.0;

    // Memindahkan nilai ke array B dan C
    int lulus_count = 0, tidak_lulus_count = 0;
    for (int i = 0; i < 12; i++) {
        if (A[i] >= avg) {
            B[lulus_count] = A[i];
            lulus_count++;
        } else {
            C[tidak_lulus_count] = A[i];
            tidak_lulus_count++;
        }
    }

    // Menampilkan isi array A
    printf("Nilai: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }

    // Menampilkan isi array B
    printf("\nLulus: ");
    for (int i = 0; i < lulus_count; i++) {
        printf("%d ", B[i]);
    }

    // Menampilkan isi array C
    printf("\nTidak Lulus: ");
    for (int i = 0; i < tidak_lulus_count; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
