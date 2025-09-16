/* 

Questão 2 - Lista 10

Implementar uma função que, dado um vetor
de reais, troque o 1 e o 2 elementos, em
seguida o 3 e o 4 elementos e assim
sucessivamente, até se chegar ao final do vetor.


*/


#include <stdio.h>

// Declaração de Funções --
void trocarElementos (int vetor[], int tamanho);

void preencherAleatorio (int vetor[], int tamanho, int limite);
void mostrarVetor (int vetor[], int tamanho);

// Principal --
void main ()
{
	
	int vetor[6];
	int tam = 6;
	

	preencherAleatorio (vetor, tam, 10);
	

	mostrarVetor (vetor, tam);
	

	trocarElementos (vetor, tam);

	mostrarVetor (vetor, tam);
}




// Implementação das funções --
void trocarElementos (int vetor[], int tamanho)
{

	int i, temp;	
	

	for (i=0;i<tamanho-1;i+=2)
	{
		temp = vetor[i];
		vetor[i] = vetor[i+1];
		vetor[i+1] = temp;
	}
}

void preencherAleatorio (int vetor[], int tamanho, int limite)
{

	int i;
	
	srand (time(NULL));
	

	for (i=0;i<tamanho;i++)
	{
		vetor[i] = rand()%limite;	
	}	
}

void mostrarVetor (int vetor[], int tamanho)
{

	int i;
		
	
	printf ("\n\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);	
	}		
	
	printf ("\n\n");
}