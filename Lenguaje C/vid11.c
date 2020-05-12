#include <stdio.h>
int main (){
	//pedir dos numeros y realizar todas las operaciones aritmeticas
	int a,b,operacion;
	printf("Ingrese dos numeros:");
	scanf("%i %i", &a, &b);
	
	operacion = a + b;
	printf("La suma es: %i\n",operacion);
	
	operacion = a - b;
	printf("La resta es: %i\n", operacion);
	
	operacion = a * b;
	printf("La multiplicacion es: %i\n", operacion);
	
	operacion = a / b;
	printf("La division es: %f\n", operacion);
	return 0;
}
