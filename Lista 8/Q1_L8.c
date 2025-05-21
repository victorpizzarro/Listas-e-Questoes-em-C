/*

Questão 1 - Lista 8

Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.

*/




#include <stdio.h>
#include <stdlib.h>

void multN(int n1, int n2, int mult) {
	int i;			
	for(i = n1; i<= n2; i++){
		
		if (i % mult == 0){
			printf("%d ",i);
		}
	}
		
}

int main(){
	int i, n1, n2, mult;
	printf("\nEntre com n1: ");
	scanf("%d",&n1);
	printf("\nEntre com n2: ");
	scanf("%d",&n2);	
	printf("\nEntre com um N para multiplos no intervalo n1/n2: ");
	scanf("%d",&mult);
	printf("\n");
		
	multN(n1, n2, mult);
	
	return 0;
}





