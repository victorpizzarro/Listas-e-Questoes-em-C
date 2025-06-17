/* 

Questão 4 - Lista 10

Fazer uma função que armazene em um vetor
os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...

Nota: observem que a diferença entre o 1o e 2o
elementos é igual a 1, entre o 2o e 3o é igual a
2, entre o 3o e o 4o é igual a 3, e assim
sucessivamente.

*/


#include <stdio.h>

// Declaração de Funções --

void mostrarVetor(int vet[], int len);
void armezenarTermos(int vet[], int len);


// Principal --
int main (){
	int vetor [10];
	
	
	armezenarTermos(vetor, 10);
	
	mostrarVetor(vetor, 10);
	
	
	
	return 0;
}



// Implementação de Funções --
void mostrarVetor(int vet[], int len){
	int i;
	
	for (i = 0; i < len; i++){
		printf("%d ", vet[i]);
	}
}



void armezenarTermos(int vet[], int len){
	
	int i;
	int aux = 1;
	for (i = 0; i < len; i++){
		
		
		vet[i] = aux;		
		aux = aux + (i+1);
		
		
	}
	
}
