#include <stdio.h>

int main() {
    // Mencetak deret 2^n dari 0 hingga 10
    for (int i = 0; i <= 10; ++i) {
        printf("%d ", 1 << i);
    }

    return 0;
}
