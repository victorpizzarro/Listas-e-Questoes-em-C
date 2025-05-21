/*
Questão 3 - Lista 6

Implementar um programa
que calcule o valor de baseexpoente, onde
base e expoente são números inteiros
dados pelo usuário.

*/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int base, expoente, resultado;
	
	printf("\nEntre com a base: ");
	scanf("%d",&base);
	
	resultado = base;

	do
	{
		
		printf("\nEntre com o expoente: ");
		scanf("%d",&expoente);
		
		if( expoente < 0)
		{
			printf("\nO valor %d e um expoente invalido! Tente novamente. \n\n", expoente);
			
		}
	}while(expoente < 0);
	
	
	if (expoente == 0)
	{
		printf("\nResultado: 1\n");
	}
	else
	{
		for (int i=1; i<=expoente-1;i++){
			resultado = resultado*base;
		}
		
		printf("\nResultado: %d",resultado);
	}
	
	return 0;
}