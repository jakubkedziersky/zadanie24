#include  <stdio.h>
#include <math.h>

float r = 0;
float oblicz(float a, float b);


float obliczPoleKola(float r){
    return(M_PI*r*r);
}

void obsluzObliczaniePolaKola() {
    printf("Podaj promien kola\t");
    scanf("%f", &r);
    printf("Pole kola wynosi:\t%f\n", obliczPoleKola(r));

    return;
}





float oblicz(float a, float b) {
	return(a*b);
}

float main() {
    float a = 0;
    float b = 0;


	printf("Podaj wartosc a:\t ");
	scanf("%f", &a);
	printf("Podaj wartosc b:\t");
	scanf("%f", &b);


	printf ("\n wynik:\t%f\n", oblicz(a,b));

	obsluzObliczaniePolaKola();
	return 0;

}
