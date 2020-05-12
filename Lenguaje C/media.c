//calcular la media aritmetica de 3 numeros
#include <stdio.h>

int main(){
	
	int num1, num2, num3, media;
	
	printf("Ingrese 3 numeros:");
	scanf("%i %i %i",&num1, &num2, &num3);
	
	media = (num1 + num2 + num3) / 3;
	printf("La media de los 3 numeros es: %i",media);
	return 0;
}
