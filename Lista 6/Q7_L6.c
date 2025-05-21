/* 
Questão 7 - Lista 6

Faça um programa que leia
150 números reais e, ao final, exiba:

a) A soma dos 50 primeiros;

b) menor número do 51° ao 100°
valores fornecidos;

c) A média entre os últimos 50
valores.

*/

#include <stdio.h>
#include <stdlib.h>
#include <float.h>



int main() {
	
	float somaN = 0, somaM = 0;
	float menor = FLT_MAX;
	
	float numR, media;
	
	for (int i=1; i<=150; i++){
		
		printf("Entre com numeros reais: ");
		scanf("%f", &numR);
		
		if (i <= 50)
		{
			somaN = somaN + numR;
		}
		else
		{
			if (i <= 100){
				if (numR < menor)
				{
					menor = numR;
				}
			}
			else
			{
			somaM = somaM + numR;
			
			
			}
		}
		
		
	}
	
	media = somaM / 50.0;
	
	printf("\nA soma dos 50 primeiros numeros: %.2f ",somaN);
	printf("\nMenor numero do 51o ao 100o e: %.2f", menor);
	printf("\nA media dos ultimos 50 valores: %.2f", media);
	
	return 0;
}