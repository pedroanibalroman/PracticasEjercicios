//realizar descuento de 15% al total de todas las compras
#include <stdio.h>

int main(){
	
	float total_compra, descuento, precio;
	
	printf("Ingrese el total de su compra: ");
	scanf("%f",&total_compra);
	
	descuento = total_compra * 0.15;
	precio = total_compra - descuento;
	
	printf("El total a pagar es: %.2f",precio);
	
	return 0;
}
