#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int A;
	float Q, R, valorT;
	
printf("\nInforme a quantidade investida: ");
scanf("%f",&Q);

printf("\nInforme a %% de rendimento fixo: ");
scanf("%f",&R);

printf("\nInforme a quantidade de anos investidos: ");
scanf("%d", &A);

for (int i=1; i <= A; i++){
	Q = Q + (Q * (R/100));
	valorT = Q;
	
}

printf("\nO valor Total disponivel depois de %d anos de investimento e: %.2f ", A, valorT);	
	return 0;
}