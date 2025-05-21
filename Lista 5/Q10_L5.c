#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	
	int contF = 0, contM = 0;
	int pessoas;
	char genero;
	float maiorAltura = 0, menorAltura = 5.00;
	float altura;
	float altMulheres = 0, alturaPop = 0;
	float mediaAltMulheres = 0, mediaAlturaPop = 0;
	float percH = 0;
	
	printf("Quantas pessoas serao entrevistadas: ");
	scanf("%d", &pessoas);
	
	for (int i = 1; i <= pessoas; i++) {
		
		printf("\nInforme sua altura: ");
		scanf("%f", &altura);
		
		printf("\nInforme seu genero ((F)eminino ou (M)asculino): ");				
		scanf(" %c", &genero);
		genero = toupper(genero);
		
		if ((genero != 'F') && (genero != 'M')) {
			printf("Genero invalido!\n");
			return 0;
		}
		
		// Atualiza maior e menor altura
		if (altura > maiorAltura) {
			maiorAltura = altura;
		}
		
		if (altura < menorAltura) {
			menorAltura = altura;
		}
		
		// mulher
		if (genero == 'F') {
			contF++;
			altMulheres += altura;
		} else { // Se for homem
			contM++;
		}
		
		
		alturaPop += altura; // Soma para a altura total da população
	}
	
	// Calcular médias
	if (contF > 0) { // Evita divisão por zero
		mediaAltMulheres = altMulheres / contF;
	} else {
		mediaAltMulheres = 0;
	}
	
	mediaAlturaPop = alturaPop / pessoas;
	percH = (float)contM / pessoas * 100;
	
	// Exibindo resultados
	printf("\nMaior altura: %.2f", maiorAltura);
	printf("\nMenor altura: %.2f", menorAltura);
	
	printf("\nA media de altura das Mulheres e: %.2f", mediaAltMulheres);
	printf("\nA media de altura da Populacao e: %.2f", mediaAlturaPop);
	printf("\nPercentual de homens na populacao e: %.2f%%", percH);
	
	return 0;
}
