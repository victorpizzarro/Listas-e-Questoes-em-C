/*

Questão 5 - Lista 10

Elaborar uma função que, dado um conjunto de
300 valores inteiros, distribua-os em 2 vetores
conforme forem pares ou ímpares.


*/

#include <stdio.h>
#include <stdlib.h>

// Declarção de Funções --
void mostarVetor(int vet[], int len);
void tamanhoParImpar(int vet[], int len, int *lenPar, int *lenImpar);
void dividirParImpar(int vet[], int len, int vetorPar[], int vetorImpar[]);



// Principal --
int main() {
	
	int vetor[7] = {1,2,3,4,5,6,7};
	
	
	int tamanhoPar, tamanhoImpar;
	
	printf("\nVetor Principal\n");
	mostrarVetor(vetor, 7);
	printf("\n\n");
	
	tamanhoParImpar(vetor, 7,  &tamanhoPar, &tamanhoImpar);
	
	int vetorPar [tamanhoPar];
	int vetorImpar[tamanhoImpar];
	
	dividirParImpar(vetor, 7, vetorPar, vetorImpar);
	
	
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
	
	for(i=0; i<len; i++)
	{
		
		if (vet[i] % 2 == 0)
		{
			(*lenPar)++;
		}
		else
		{
			(*lenImpar)++;
		}
	}
	
}


// Preencher o VetorPar e o VetorImpar
void dividirParImpar(int vet[], int len, int vetorPar[], int vetorImpar[]){
	
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