#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	
	char genero;
	float salario, mediaSalHomens, salH = 0; 
	int maiorMatricula, menorMatricula, matricula, idade, tempo;
	int contI = 0, contG = 0, homens = 0;
	int maiorTempo = 0;
	int menorTempo = 999;
	
	for(int i = 1; i <= 4; i++) {
		
		printf("Seja bem vindo a empresa!\n");

		printf("\nInforme sua matricula: ");
		scanf("%d", &matricula);
		
		printf("Informe seu genero (M ou F): ");
		scanf(" %c", &genero);  // espaço ignora enter anterior
		genero = toupper(genero);
		
		printf("Informe sua idade: ");
		scanf("%d", &idade);
		if (idade < 21) {
			contI++;
		}
		
		printf("Informe seu salario: ");
		scanf("%f", &salario);
		
		printf("Informe o tempo que esta na empresa (em anos): ");
		scanf("%d", &tempo);
		
		printf("\n----------------------------\n\n");

		
		if (genero == 'F') {
			contG++;
		} else if (genero == 'M') {
			homens++;
			salH += salario;
		}

	
		if (tempo > maiorTempo) {
			maiorTempo = tempo;
			maiorMatricula = matricula;
		}
		if (tempo < menorTempo) {
			menorTempo = tempo;
			menorMatricula = matricula;
		}
	}
	

	if (homens > 0) {
		mediaSalHomens = salH / homens;
	} else {
		mediaSalHomens = 0;
	}

	printf("\n\nQuantidade de Funcionarios com menos de 21 anos: %d", contI);
	printf("\nQuantidade de Funcionarias: %d", contG);
	printf("\nMedia Salarial dos Homens: R$ %.2f", mediaSalHomens);
	printf("\nMatricula do mais antigo: %03d", maiorMatricula);
	printf("\nMatricula do mais recente: %03d\n", menorMatricula);

	return 0;
}
