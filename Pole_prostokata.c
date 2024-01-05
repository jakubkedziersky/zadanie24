#include  <stdio.h>

float oblicz(float a, float b);

float main() {
    float a = 0;
    float b = 0;


	printf("Podaj wartosc a:\t ");
	scanf("%f", &a);
	printf("Podaj wartosc b:\t");
	scanf("%f", &b);


	printf ("\n wynik:\t%f", oblicz(a,b));
	return 0;

}
float oblicz(float a, float b) {
	return(a*b);
}
