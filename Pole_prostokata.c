#include <stdio.h>
#include <math.h>

#define TRUE    1

float obliczPoleKola(float r){
    return(M_PI*r*r);
}

void obsluzObliczaniePolaKola() {
    float r;

    printf("Podaj promien kola\t");
    scanf("%f", &r);
    printf("Pole kola wynosi:\t%f\n", obliczPoleKola(r));

    return;
}

float obliczPoleProstokata(float a, float b) {
	return(a*b);
}

void obsluzObliczaniePolaProstokata() {
    float a;
    float b;

	printf("Podaj wartosc a:\t ");
	scanf("%f", &a);
	printf("Podaj wartosc b:\t");
	scanf("%f", &b);

	printf ("\n wynik:\t%f\n", obliczPoleProstokata(a, b));
}

int main(){
    int select;

    while(TRUE) {
        printf("\nOblicz Pole Prostokata - 1\nOblicz Pole ko³a - 2\nZakoñcz Dzia³anie Kalkulatora - 3\n");
        scanf("%d", &select);

        switch (select){
            case 1: obsluzObliczaniePolaProstokata(); break;
            case 2: obsluzObliczaniePolaKola(); break;
            case 3: return 0;
            default: printf("WprowadŸ poprawn¹ wartoœc\n");
        }
    }

    return(0);
}
