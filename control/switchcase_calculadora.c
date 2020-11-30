#include <stdio.h>
#include <math.h>
#include <stdlib.h>

	//Declarando variables
	int opcion;
	float n1, n2, resultado;
	
float suma(float n1, float n2){ //Implementación de función
    float resultado = 0;
    resultado = n1 + n2;
    return resultado;}

float resta(float n1, float n2){ //Implementación de función
    float resultado = 0;
    resultado = n1 - n2;
    return resultado;}
 
 float division(float n1, float n2){ //Implementación de función
    float resultado = 0;
    	if(n2==0){
			printf("La operacion entre 0 no esta definida\n");
		}else{
		resultado = n1 / n2;}
    return resultado;}

float multiplicacion(float n1, float n2){ //Implementación de función
    float resultado = 0;
    resultado = n1 * n2;
    return resultado;}

float potencia(float n1, float n2){ //Implementación de función
    float resultado = 0;
    resultado = pow(n1,n2);
    return resultado;}

float raiz(float n1){ //Implementación de función
    float resultado = 0;
    resultado = sqrt(n1);
    return resultado;}

float factorial(float n1)
{
	if (n1 == 0) /* caso base */
		return 1; /* como 0! = 1, regresa 1*/
	else
		return n1 * factorial (n1 - 1); /* llamada a esta misma función */
}
	   
int main()
{
	
	
	do {
		
	printf("--------------------------\n");
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma\n");
	printf("\t 2.- Resta\n");
	printf("\t 3.- Division\n");
	printf("\t 4.- Multiplicacion\n");
	printf("\t 5.- Potencia\n");
	printf("\t 6.- Raiz cuadrada\n");
	printf("\t 7.- Factorial\n");
	printf("\t 8.- Salir\n");
	printf("--------------------------\n");
	scanf("%d",&opcion);
	system("cls");

	
	if(opcion==6 || opcion==7){
		printf("\nDame el primer valor: ");
		scanf("%f", &n1);
	}
	else if(opcion>=8){
	}
	else{
		printf("\nDame el primer valor: ");
		scanf("%f", &n1);
		printf("\nDame el segundo valor: ");
		scanf("%f", &n2);
	}

	//Estructura de control de selección multiple
	switch(opcion)
	{
	case 1:
		//resultado = n1 + n2;
		printf("%.03f", suma(n1,n2));
		break;
	case 2:
		//resultado = n1 - n2;
		printf("%.03f", resta(n1,n2));
		break;
	case 3: 
		//resultado = n1 / n2;
		printf("%.03f", division(n1,n2));
		
		break;
	case 4: 
		//resultado = n1 * n2;
		printf("%.03f", multiplicacion(n1,n2));
		break;
	case 5: 		
		//resultado = pow(n1,n2);
		printf("%.03f", potencia(n1,n2));
		break;
	case 6: 
		if(n1<0){
				printf("No esta definida");
		}
		else{
			//resultado = sqrt(n1);
			printf("%.03f", raiz(n1));
		}
		break;
	case 7: 		
		//resultado = pow(n1,n2);
		printf("%.03f", factorial(n1));
		break;
	case 8:
	printf("Vuelva Pronto\n");
	break; 
		default:
		printf("Opcion Invalida\n");
	
	}
	printf("\nSwitch Finalizado\n");
	}
		while (opcion !=8);
	printf("\nDo- While Finalizado\n");	//Sale break
} 
