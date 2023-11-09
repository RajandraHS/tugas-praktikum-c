	#include <stdio.h>
	#include <math.h>
	
	int main(){
	
	    int alas, tinggi;
	    float miring;
	
	    alas = 4;
	    tinggi = 5;
	    miring = sqrt(alas * alas + tinggi * tinggi);
	
	    printf("Program Segitiga Pythagoras\n\n");
	    printf("Alas = %i\nTinggi = %i\n", alas, tinggi);
	    printf("Sisi Miring = %f", miring);
	
	    return 0;
	}
