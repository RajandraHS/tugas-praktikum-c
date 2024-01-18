#include <stdio.h>
#include <string.h>

int main() {
    char str[8] = {'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
    char cari;

    printf("Masukkan abjad yang ingin dicari: ");
    scanf(" %c", &cari); // Perhatikan spasi sebelum %c untuk menghindari masalah newline

    int found = 0; // Flag untuk menunjukkan apakah abjad ditemukan atau tidak

    for (int i = 0; i < 8; i++) {
        if (str[i] == cari) {
            found = 1;
            break; // Keluar dari loop jika abjad ditemukan
        }
    }

    if (found) {
        printf("ADA\n");
        printf("Abjad %c ditemukan dalam array.\n", cari);
    } else {
        printf("TIDAK ADA\n");
        printf("Abjad %c tidak ditemukan dalam array.\n", cari);
    }

    return 0;
}
