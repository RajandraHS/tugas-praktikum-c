#include <stdio.h>

int main() {
  int A[5] = {12, 8, 17, 5, 15};
  int B[7] = {5, 11, 7, 25, 9, 12, 14};

  // Membuat array baru
  int C[8];

  // Inisialisasi indeks awal array C
  int i = 0;

  // Menggabungkan elemen dari array A yang lebih besar dari 10 ke dalam array C
  for (int j = 0; j < 5; j++) {
    if (A[j] > 10) {
      C[i++] = A[j];
    }
  }

  // Menggabungkan elemen dari array B yang lebih besar dari 10 ke dalam array C
  for (int j = 0; j < 7; j++) {
    if (B[j] > 10) {
      C[i++] = B[j];
    }
  }

  // Mencetak isi array C
  for (int i = 0; i < 12; i++) {
    if (C[i] != 0) {
      printf("%d ", C[i]);
    }
}


  return 0;
}
