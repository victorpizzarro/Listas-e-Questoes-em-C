/* 

Questão 3 - Lista 10

Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.

- está sendo utilizado a função do codigo anterior, por isso o uso de numeros interiros.

 */


#include <stdio.h>

// Declaração de Funções --
int verificarOrdenacao (int vetor[], int tamanho);

void preencherAleatorio (int vetor[], int tamanho, int limite);
void preencherAleatorioOrdenado (int vetor[], int tamanho);
void exibirVetor (int vetor[], int tamanho);

// Principal --
void main ()
{

	int vetor1[10], vetor2[20];
	int tam1 = 10, tam2 = 20;
	

	preencherAleatorio (vetor1, tam1, 10);
	
	
	exibirVetor (vetor1, tam1);
		

	if (verificarOrdenacao (vetor1, tam1) == 1)
	{
		printf ("O vetor 1 esta ordenado!\n");
	}
	else
	{
		printf ("O vetor 1 NAO esta ordenado!\n");
	}
	
	
	preencherAleatorioOrdenado (vetor2, tam2);
	

	exibirVetor (vetor2, tam2);
		
	
	if (verificarOrdenacao (vetor2, tam2) == 1)
	{
		printf ("O vetor 2 esta ordenado!\n");
	}
	else
	{
		printf ("O vetor 2 NAO esta ordenado!\n");
	}
}

// Implementação de Função --
int verificarOrdenacao (int vetor[], int tamanho)
{

	int i;
	
	
	for (i=0;i<tamanho-1;i++)
	{
	
		if (vetor[i] > vetor[i+1])
		{
			return 0;
		}
	}
	
	return 1;
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

void exibirVetor (int vetor[], int tamanho)
{
	
	int i;
		
	
	printf ("\n\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);	
	}		
	
	printf ("\n\n");
}

void preencherAleatorioOrdenado (int vetor[], int tamanho)
{

	int i;
	
	srand (time(NULL));
	
	
	vetor[0] = rand()%4;
	
	for (i=1;i<tamanho;i++)
	{
		vetor[i] = vetor[i-1]+rand()%2;	
	}		
}