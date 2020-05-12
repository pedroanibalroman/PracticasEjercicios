//convertir grados celcius a fahrenheit
#include <stdio.h>
int main (){
	int celsius; 
	float fah;
	printf("Ingrese los grados celsius a convertir:");
	scanf ("%i",&celsius);
	
	fah = (celsius * 9/5) + 32;
	
	printf("%i grados Celsius son %.2f grados Fahrenheit",celsius, fah);
	return 0;
}
