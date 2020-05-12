//sacar la hipotenusa de un triangulo , pidiendo el valor de 2 catetos
#include <stdio.h>
#include <math.h>

int main (){
	float cat1, cat2,hip;
	
	printf("Ingrese el valor del 1er cateto:");
	scanf("%f",&cat1);
	printf("Ingrese el valor del 2do cateto:");
	scanf("%f",&cat2);
	
	hip = sqrt(pow(cat1,2) + pow(cat2,2));
	printf("La hipotenusa es: %.2f",hip);	
	
	return 0;
}
