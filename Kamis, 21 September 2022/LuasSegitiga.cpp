#include <stdio.h>

int main(){

    int alas, tinggi;
    float luas;

    alas = 8;
    tinggi = 5;
    luas = alas * tinggi / 2;

    printf("Menghitung Luas Segitiga\n");
    printf("\nAlas= %i\nTinggi= %i\nLuas= %.3f",alas, tinggi, luas);

    return 0;

}
