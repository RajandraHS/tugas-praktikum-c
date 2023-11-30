#include <stdio.h>

int main() {
    int A[11];
    int inputData[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int length = sizeof(inputData) / sizeof(inputData[0]);
    int count = 0;

    // Input data ke dalam array dan menyimpan nilai genap
    for (int i = 0; i < length; i++) {
        // Memeriksa apakah nilai input genap
        if (inputData[i] % 2 == 0) {
            // Menyimpan nilai genap ke dalam array A
            A[count] = inputData[i];
            count++;

            // Mencetak nilai yang disimpan
            printf("%d ", inputData[i]);
        }
    }

    printf("\n");

    return 0;
}
