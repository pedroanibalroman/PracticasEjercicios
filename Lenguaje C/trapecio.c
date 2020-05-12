//calcular areas del trapecio
#include <stdio.h>
#include <math.h>

int main (){
	int basem, baseM, altura, area;
	
	printf("Ingrese la base menor: \n");scanf("%i",&basem);
	printf("Ingrese la base mayor: \n");scanf("%i",&baseM);
	printf("Ingrese la altura: \n");scanf("%i",&altura);
	
	area = ((basem + baseM)*altura)/2;
	
	printf("El area del trapecio es: %i",area);
	return 0;
}
