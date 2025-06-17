/*

Questão 2 - Lista 3

Construir um programa que permita ao usuário
calcular a área de uma figura geométrica. Para
isto, o usuário deverá escolher a figura desejada
([C]írculo, [R]etângulo, [Q]uadrado ou
[T]riângulo) e fornecer as informações
necessárias para que a área desta figura possa
ser calculada.

Notas:
1. Fórmulas para o cálculo das áreas:

a. Acírculo = π.raio2, onde π = 3.14159;

b. Aretângulo = base.altura;

c. Aquadrado = lado2;

d. Atriângulo = (base.altura)/2.

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main() {
	char caracterie;
	float base, altura, raio, lado, areaC, areaT, areaQ, areaR;
	
	printf("Escolha um das opcoes abaixo para calcurar a area: \n[C]-Circulo \n[R]-Retangulo \n[Q]-Quadrado \n[T]-Triangulo\n");
	scanf("%c",&caracterie);
	
	caracterie = toupper(caracterie);
	
	
	switch (caracterie){
		
		case 'C':
			
			printf("\nEntre com o Raio do Circulo: ");
			scanf("%f",&raio);
			
			areaC = 3.14159 *(raio *raio);
			printf("\nArea do Circulo: %.2f", areaC);
			break;
			
		case 'R':
			printf("\nEntre com a base: ");
			scanf("%f",&base);
			printf("\nEntre com a altura: ");
			scanf("%f",&altura);
			areaR = base * altura;
			printf("\nArea do Retangulo: %.2f", areaR);
			break;
			
			
		case 'Q':
		
			printf("\nEntre com o lado do quadrado: ");
			scanf("%f",&lado);
			areaQ = lado * lado;
			printf("\nArea do Quadrado: %.2f",areaQ);
			break;
		
		case 'T':
			
			printf("\nEntre com a base do triangulo: ");
			scanf("%f",&base);
			printf("\nEntre com a altura do triangulo: ");
			scanf("%f",&altura);
			areaT = (base * altura) / 2;
			printf("Area do Triangulo: %.2f", areaT);
			break;
			
		default:
			printf("Escolha invalida.");
			break;
			
			
	}
	
	return 0;
}