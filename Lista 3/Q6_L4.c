#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int N, num, soma, digito;
	printf("Informe um numero de 1 a 18: ");
	scanf("%d",&N); // 14
	
	if((N > 18) || (N<1)){
		printf("Erro!!!");
		return 0;
		
	}
	else{
		
		for (int i=1; i < 99; i++){
			
			soma = 0;
			num = i; 
			35
				while (num > 0) {
					
	    			digito = num % 10;
	    			soma += digito;
	    			num /= 10; 
	    		}
			
			if (soma == N){
				
				printf("%d ", i);
			}
		}
	}
	return 0;
}