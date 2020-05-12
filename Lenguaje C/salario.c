//calcular las horas trabajadas segun valor por hora
#include <stdio.h>

int main(){
	
	int horas, precio, salario;
	
	printf("Ingrese la cantidad de horas trabajads: "); scanf("%i",&horas);
	printf("Ingrese el precio por horas: "); scanf("%i",&precio);
	
	salario = horas * precio;
	
	printf("Su salario es: %i",salario);
	
	return 0;
}
