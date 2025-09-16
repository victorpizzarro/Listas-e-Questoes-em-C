/*

Questão 1 -  Lista 10

Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.


*/


#include <stdio.h>

// Declaração de Funções --
int numOcorrencias (int numero, int vetor[], int tamanho);
void preencherAleatorio (int vetor[], int tamanho, int limite);
void mostrarVetor (int vetor[], int tamanho);

// Principal --
void main ()
{
	
	int vetor[20];
	int i, valor, quant, tam = 20;
	
	//preenchendo o vetor de forma aleatória
	preencherAleatorio (vetor, tam, 10);
	
	
	mostrarVetor (vetor, tam);
	
	
	printf ("\n\nEntre com o valor a ser buscado: ");
	scanf ("%d", &valor);
	

	quant = numOcorrencias (valor, vetor, tam);
	
	printf ("\n\nForam encontradas %d ocorrencias do numero %d no vetor.", quant, valor);
}



// Implementação das funções --
int numOcorrencias (int numero, int vetor[], int tamanho)
{
	
	int i, cont = 0;
	

	for (i=0;i<tamanho;i++)
	{
	
		if (vetor[i] == numero)
		{
			cont++;
		}
	}
	

	return cont;
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
