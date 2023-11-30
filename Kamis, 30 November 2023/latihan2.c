#include <stdio.h>

// Maksimal jumlah elemen dalam array
#define MAX_SIZE 100

int findAllOccurrences(char arr[], int size, char target, int result[]) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            result[count++] = i;
        }
    }
    return count;
}

int main() {
    char arr[] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    int size = sizeof(arr) / sizeof(arr[0]);
    char target;
    int indices[MAX_SIZE];
    int count;

    printf("Masukkan Karakter = ");
    scanf(" %c", &target); // Perhatikan spasi sebelum %c untuk menghindari karakter newline (\n)

    count = findAllOccurrences(arr, size, target, indices);

    if (count > 0) {
        printf("ADA\nLokasi karakter yang sama: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", indices[i]);
        }
        printf("\n");
    } else {
        printf("\nTIDAK DITEMUKAN\n");
    }

    return 0;
}
