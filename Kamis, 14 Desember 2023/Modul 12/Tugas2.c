#include <stdio.h>

int main() {
    // Array dengan 11 elemen berisi abjad
    char str[11] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};

    // Array untuk menghitung frekuensi setiap huruf
    int count[26] = {0};

    // Menghitung frekuensi setiap huruf pada array str
    for (int i = 0; i < 11; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
    }

    // Mencari huruf terbanyak dan jumlahnya
    char mostFrequentChar;
    int maxCount = 0;

    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentChar = 'a' + i;
        }
    }

    // Menampilkan hasil
    printf("Huruf terbanyak: %c\n", mostFrequentChar);
    printf("Jumlah: %d\n", maxCount);

    return 0;
}
