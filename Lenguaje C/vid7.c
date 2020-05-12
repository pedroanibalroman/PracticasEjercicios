//directivas del preprocesador y variables
#include <stdio.h>

//la macro sirve para asignar un valor a una variable que no cambia ej: #define PI 3.1416
#define PI 3.1416 //macro

int y = 5; //variable global
int main(){
	int x = 10;//variable local
	
	float sum = 0;
	
	sum = PI + x;
	
	printf("Suma es: %.2f",sum);
	
	return 0;
}
