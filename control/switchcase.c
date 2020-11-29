#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a;
float b;
float c;
int main()
{
	int opcion; 
	
	printf("Asigna valor de a:");
	scanf("%f",&a);
	printf("Asigna valor de b:");
	scanf("%f",&b);
	printf("Elige una opcion:");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Division:\n");
	printf("\t 4.- Multiplicacion:\n");
	printf("\t 5.- Raiz Cuadrada:\n");
	printf("\t 6.- Potencia:\n");
	printf("\t 7.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion){
	case 1: 
		c= a + b; //Operacion matematica
	printf("La suma es igual a: %.03f", c);
		break;
	case 2: 
		c= a - b ;
		printf("La resta es igual a: %.03f", c);
		break;
	case 3: 
		if(b==0){
			printf("No esta definida la division entre 0");	
		}else{
		c= a / b;
		printf("La division es igual a: %.03f", c);}
		break;
	case 4: 
		c= a * b ;
		printf("La multiplicacion es igual a: %.03f", c);
		break;
	case 5: 
		if(a==0){
			printf("\nNo esta definida la raiz cuadrada de 0\n");	
		}else{
		c= sqrt(a);
		printf("\nLa raiz cuadrada de a es igual a: %.03f\n", c);}
		if(b==0){
			printf("\nNo esta definida la raiz cuadrada de 0\n");	
		}else{
		c= sqrt(b);
		printf("\nLa raiz cuadrada de b es igual a: %.03f\n", c);}
		break;
	case 6: 
		c= pow(a,b);
		printf("\na elevado a la potencia b es igual a: %.03f\n", c);	
		c= pow(b,a
		);
		printf("\nb elevado a la potencia a es igual a: %.03f\n", c);
		default:
		printf("No está puesta correctamente la unidad\n");
		exit(0);
	}
	printf("\nFin de Switch\n");
	return 0;
} 
