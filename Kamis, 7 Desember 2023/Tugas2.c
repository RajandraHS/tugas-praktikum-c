#include <stdio.h>

int main() {
  // Deklarasi variabel untuk menyimpan input dari pengguna
  int n;
  int A[5];
  int B[7];

  // Membaca input dari pengguna
  printf("Masukkan jumlah elemen dari array A: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("Masukkan elemen ke-%d dari array A: ", i + 1);
    scanf("%d", &A[i]);
  }
  printf("Masukkan jumlah elemen dari array B: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("Masukkan elemen ke-%d dari array B: ", i + 1);
    scanf("%d", &B[i]);
  }

  // Menggabungkan elemen dari array A dan B ke dalam array C
  int C[n + n];
  for (int i = 0; i < n; i++) {
    C[i] = A[i];
  }
  for (int i = 0; i < n; i++) {
    C[i + n] = B[i];
  }

  // Mencetak isi array C
  for (int i = 0; i < n + n; i++) {
    printf("%d ", C[i]);
  }

  return 0;
}
