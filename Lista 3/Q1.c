#include <stdio.h>
#include <stdlib.h>


int main() {
	int num, i, mult; 
	printf("Forneca um numero: ");
	scanf("%d",&num);
	
	printf("\nForneca outro numero para receber seus multiplos ate %d: ", num);
	scanf("%d",&mult);
	
	for (i = mult; i < num; i += mult){
		printf("%d ", i);
	}
	return 0;
}