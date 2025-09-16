#include <stdio.h>
#include <stdlib.h>

// Declaração de Funções --
void mostrarVetor(int vet[], int len);
void tamanhoParImpar(int vet[], int len, int *lenPar, int *lenImpar);
void dividirParImpar(int vet[], int len, int vetorPar[], int tamanhoPar, int vetorImpar[], int tamanhoImpar);

// Principal --
int main() {
	
	int vetor[7] = {1,2,3,4,5,6,7};		
	int vetorPar [7];
	int vetorImpar[7];
	int tamanhoPar, tamanhoImpar;
	
	printf("\nVetor Principal\n");
	mostrarVetor(vetor, 7);
	printf("\n\n");
	
	tamanhoParImpar(vetor, 7,  &tamanhoPar, &tamanhoImpar);
		
	dividirParImpar(vetor, 7, vetorPar, tamanhoPar, vetorImpar, tamanhoImpar);
	
	printf("\nVetor Par\n");
	mostrarVetor(vetorPar, tamanhoPar);
	printf("\n\n");
	
	printf("\nVetor Impar\n");
	mostrarVetor(vetorImpar, tamanhoImpar);
	printf("\n\n");
	
	return 0;
}

// Exibir o vetor --
void mostrarVetor(int vet[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", vet[i]);
	}
}

// Checar o tamanho dos vetores Par e Impar --
void tamanhoParImpar(int vet[], int len, int *lenPar, int *lenImpar)
{
	int i;
	*lenPar = 0;
	*lenImpar = 0;
	
	for(i = 0; i < len; i++)
	{
		if (vet[i] % 2 == 0)
			(*lenPar)++;
		else
			(*lenImpar)++;
	}
}

// Preencher o VetorPar e o VetorImpar --
void dividirParImpar(int vet[], int len, int vetorPar[], int tamanhoPar, int vetorImpar[], int tamanhoImpar)
{
	int i;
	int iP = 0, iI = 0;
	
	for (i = 0; i < len; i++)
	{
		if (vet[i] % 2 == 0)
		{
			vetorPar[iP] = vet[i];
			iP++;
		}
		else
		{
			vetorImpar[iI] = vet[i];
			iI++;
		}
	}
}
