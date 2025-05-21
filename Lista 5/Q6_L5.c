//Questão 6 - Lista 5

/*Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,8,64,1024,...*/


#include <stdio.h>
#include <stdlib.h>

int main() {			
	int expoente=2, valor=1;
	int numero;
	
	printf("Quantos numeros voce quer exibir: ");
	scanf("%d",&numero);
	
	for(int i=1; i<=numero; i++){
		
  	printf("%d ",valor);
  	
	valor *= expoente;	
	expoente *= 2;


}
	return 0;
}