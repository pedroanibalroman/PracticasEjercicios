#include <stdio.h>

int main(){
	
	float c1,c2,c3,exf,traf,calificacion;
	
	printf("\nIngrese la calificacion de los 3 parciales: ");
	scanf("%f %f %f",&c1,&c2,&c3);
	
	printf("\nIngrese calificacion de examen final: ");
	scanf("%f",&exf);
	
	printf("Ingrese la calificacion de trabajo final: ");
	scanf("%f",&traf);
	
	calificacion = ((c1+c2+c3)/3)*0.55 + (exf *0.30) + (traf * 0.15);
	
	printf("Su calificacion es: %.2f",calificacion);
	
	return 0;
}
