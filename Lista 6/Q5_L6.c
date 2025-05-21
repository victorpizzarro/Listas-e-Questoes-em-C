/*
Questão 5 - Lista 6

Elabore um programa que
calcule a média ponderada de n elementos.

Observação: na média ponderada, cada
elemento possui um peso que representa a
sua contribuição no cálculo da média final.

*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	float totalcima=0, totalbaixo = 0;
	float nota;
	int peso, quant;
	float mediaPonderada;
	
	printf("\nQuantos elementos quer checar a media ponderada: ");
	scanf("%d",&quant);
	
	for (int i=1; i<= quant; i++){
		printf("\nEntre com %d nota: ",i);
		scanf("%f",&nota);
		
		printf("Entre com %d peso: ",i);
		scanf("%d", &peso);
		
		totalcima= totalcima + (peso * nota);
		totalbaixo = totalbaixo + peso;
	}
	
	mediaPonderada = totalcima / totalbaixo;
	
	printf("\nmedia ponderada: %.2f",mediaPonderada);
	printf("\ntotal cima: %.2f",totalcima);
	printf("\ntotal baixo: %.2f",totalbaixo);
	
	
	
	
	
	return 0;
}