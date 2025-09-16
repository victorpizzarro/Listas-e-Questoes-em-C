/* 

Quatão 6 - Lista 10

Faça uma função que, dado um vetor de reais,
altere todas as ocorrências do número A pelo
número B.



*/

#include <stdio.h>
#include <stdlib.h>

void mostrarVetor(float vet[], int len);
void trocarOcorrencias(float vet[], int len, float a, float b);

int main() {
	
	float vet[7] = {1.6, 2.4, 3.3, 4.2, 5.1, 2.4, 2.4};
	float a, b;
	
	printf("\nVetor Principal\n");
	mostrarVetor(vet, 7);
				
	printf("\n\nInforme o numero que deseja trocar: ");
	scanf("%f",&a);
	
	printf("\nInforme o numero que deseja adicionar: ");
	scanf("%f",&b);
	
	trocarOcorrencias(vet, 7, a, b);
	printf("\n\nVetor Alterado\n");
	mostrarVetor(vet, 7);
	
	return 0;
}


void trocarOcorrencias(float vet[], int len, float a, float b){
	
	int i;

	
	for (i = 0; i<len; i++){
		
		if (vet[i] == a){
			
			vet[i]= b;
		}
	}
}

void mostrarVetor(float vet[], int len){
	int i;
	
	for (i = 0; i<len; i++){
		
		printf("%.1f  ", vet[i]);
	}
}