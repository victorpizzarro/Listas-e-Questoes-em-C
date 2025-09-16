/*
Questão 4 - Lista 6

A prefeitura de uma cidade
fez uma pesquisa com 300 de seus
habitantes, coletando dados sobre o
salário e número de filhos. A prefeitura
deseja saber:

a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até
R$ 1.000,00.

*/

#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#define quant 3

int main() {
	
	float salario, mediaSal, mediaFil, percPessoas; 
	float totalSal = 0;
	float maiorSal = FLT_MIN;
	int filhos, totalFilhos = 0, cont = 0;
	
	for(int i = 1; i <= quant; i++) {
		printf("\nEntre com o salario: ");
		scanf("%f", &salario);
		
		totalSal += salario;
		
		printf("Quantos filhos possui: ");
		scanf("%d", &filhos);
		
		totalFilhos += filhos;
		
		if (salario > maiorSal) {
			maiorSal = salario;
		}
		
		if(salario <= 1000) {
			cont++;
		}
	}
	
	mediaSal = totalSal / quant;
	mediaFil = (float)totalFilhos / quant;
	percPessoas = ((float)cont / quant) * 100;
	
	printf("\nMedia de salario populacional: %.2f", mediaSal);
	printf("\nMedia de filhos populacional: %.2f", mediaFil);
	printf("\nMaior salario da populacao: %.2f", maiorSal);
	printf("\nPercentual de pessoas com salario ate R$ 1.000,00: %.2f%%", percPessoas);
	
	return 0;
}
