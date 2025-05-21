#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int aux,n;
	
	printf("\nEntre com um numero: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
		aux += i;
	}
	
	printf("\nA soma de todos os numeros ate %d e: %d", n, aux);
	
	return 0;
}