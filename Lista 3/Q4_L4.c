#include <stdio.h>
#include <stdlib.h>



int main() {
	int i, cont=0, calcM=0;
	float valorF, somaN=0, num;
	
	for (i =1; i<=5; i++){
		
		printf("Informe o %d numero real: ", i);
		scanf("%f", &num);
		
		if (num < 0){
			cont++;
		}
			else{
				if (num >= 0){
				somaN = somaN + num;
				calcM ++;
				}
			}
	}
	
	if(calcM > 0)
	{
		valorF = somaN / ((float)calcM);	
	}
		else{
			valorF = 0;
		}
	
	
	printf("\nQuantidade de Numeros Negativos: %d", cont);
	printf("\nA media de Numeros Positivos: %.2f", valorF);
	
	return 0;
}