//calcular la longitud de una circunferencia. formula 2 x PI x RADIO
#include <stdio.h>
#include <math.h>

#define Pi 3.1416
int main (){
	float radio, longitud;
	
	printf("Ingrese el radio de la circunferencia:");
	scanf("%f",&radio);
	
	longitud = 2 * Pi * radio;
	printf("La longitud de la circunferencia es: %.2f",longitud);
	
	return 0;
}
