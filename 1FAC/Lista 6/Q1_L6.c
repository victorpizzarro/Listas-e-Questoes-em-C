/*
Questão 1 - Lista 6

Faça um programa que leia
um número inteiro x e, em seguida, solicite
ao usuário outros 50 valores inteiros. Ao
final, o programa deve exibir o total de
múltiplos de x fornecidos.

*/



#include <stdio.h>
#include <stdlib.h>



int main() {
	int mult, val;
	int cont=0;
	
	printf("\nEntre com um valor:");
	scanf("%d",&mult);
	
	for (int i = 1; i<= 5; i++){
		printf("entre com o %d valor: ", i);
		scanf("%d",&val);		
		
		if(val % mult == 0){
			cont++;
		}
	}
	
	printf("Existem %d multiplos de %d para os numeros fornecidos.", cont, mult);
	
	
	return 0;
}