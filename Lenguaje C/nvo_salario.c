//incrementar 25% al salario de un empleador

#include <stdio.h>

int main(){
	
	int salario, incremento, total;
	
	printf("Ingrese su salario: ");
	scanf("%i",&salario);
	
	incremento = salario * 0.25;
	total = salario + incremento;
	
	printf("Su nuevo salario es: %i",total);
	
	return 0;
}
