#include <stdio.h>
#include <stdlib.h>

/* 
Questão 8 - Lista 6

Faça um programa que leia
um número real x e um número inteiro y.
Em seguida, o programa deve ler 100
números reais e calcular quantos destes
estão no intervalo definido por [x-y,x+y].

*/

int main() {
	int cont=0;
	int numI;
	float numF, num;
	
	printf("\nDigite um numero real (x): ");
	scanf("%f",&numF);
	
	printf("Digite um numero inteiro (y): ");
	scanf("%d",&numI);
	
	
	for (int i=1; i <=10; i++){
		
		printf("\nEntre com %d numero real: ",i);
		scanf("%f",&num);
		
		if ((num >= (numF - numI)) && (num <= (numF + numI))){
			cont++;
		}
	}
	
	
	
	printf("\nQuantidade de numeros no intervalo [%.2f, %.2f]: %d", numF - numI, numF + numI, cont);
	
	return 0;
}