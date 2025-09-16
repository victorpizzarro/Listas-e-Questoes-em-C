/*
Questão 2 - Lista 6

Pede-se o desenvolvimento
de um programa que leia n valores e
determine o maior e o menor elementos
do conjunto fornecido.

*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



int main() {
	
	int num, val;
	int maior = INT_MIN;
	int menor = INT_MAX;
	
	printf("\nQuantos valores serao lidos: ");
	scanf("%d",&val);
	

	
	for (int i=1; i<=val; i++){
		
		printf("\nEntre com um numero: ");
		scanf("%d", &num);
		
				
		if(num > maior){
			maior = num;
			
		}
		if (num < menor){
			menor = num;
			
		}
		
		
		
		
	}
	
	printf("\nO Maior valor fornecido: %d\nO Menor valor fornecido: %d", maior,menor);
	return 0;
}