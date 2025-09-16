/*
Questão 6 - Lista 6

Faça um programa que leia
200 números inteiros. Ao final, exibir:

a) O maior número fornecido, de
ordem par (isto é, o maior dentre o
segundo, quarto, sexto, oitavo, etc
valores fornecidos).

b) A média dos valores pares.

*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



int main() {
	int numero;
	int maior = INT_MIN;
	int somaPar = 0, cont = 0;
	float media;
	for (int i=1; i<=5; i++)
	{
		
		printf("\nEntre com um numero: ");
		scanf("%d", &numero);
		
		if(numero % 2 == 0)
		{
			
			if (numero > maior)
			{
				maior = numero;
			}
							
			somaPar = somaPar + numero;
			cont++;	
			
		}
	}
	
	media = somaPar / (float)cont;
	
	printf("\nO maior numero par fornecido e: %d", maior);
	printf("\nA media dos numeros pares e: %.2f",media);
	
	return 0;
}