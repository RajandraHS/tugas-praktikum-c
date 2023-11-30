#include <stdio.h>

// Maksimal jumlah elemen dalam array
#define MAX_SIZE 100

int findAllOccurrences(int arr[], int size, int target, int result[]) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            result[count++] = i;
        }
    }
    return count;
}

int main() {
    int arr[] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    int indices[MAX_SIZE];
    int count;

    printf("Masukkan Bilangan Integer = ");
    scanf("%d", &target);

    count = findAllOccurrences(arr, size, target, indices);

    if (count > 0) {
        printf("ADA\nLokasi bilangan yang sama: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", indices[i]);
        }
        printf("\n");
    } else {
        printf("\nTIDAK DITEMUKAN\n");
    }

    return 0;
}
