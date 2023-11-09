#include <stdio.h>

int main(){

    int diameter;
    float jari, volume, phi;

    diameter = 15;
    phi = 3.14;
    jari = diameter / 2.0;
    volume = 0.75 * phi * jari * jari * jari;

    printf("Program Menghitung Volume Bola\n");
    printf("\nDiameter= %i", diameter);
    printf("\nJari - Jari = Diameter / 2 = %.1f", jari);
    printf("\nVolume Bola = %.5f", volume);
    
    return 0;
}
