/******************************************************************************

Considere a existência de um vetor de structs com quant posições, onde cada uma destas
armazena os seguintes dados sobre um grupo de pessoas:

nome (string), gênero (char) e idade (int).

Pede-se uma função que determine se os elementos deste vetor estão ordenados e
retorne 1, caso estejam ordenados, e 0, caso contrário.

Observação: o vetor será considerado ordenado se estiver organizado crescentemente em função da
idade. Porém, no caso de pessoas com a mesma idade, estas devem estar ordenadas
crescentemente pelo nome.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

// Struct - PESSOA
typedef struct{
    
    char nome[15];
    char genero;
    int idade;
    
}TPessoa;



// Cabeçalho de Func.
int checarOrdenacao(TPessoa pessoas[], int len);
void exibirPessoa(TPessoa pessoa);
void exibirTodasPessoas(TPessoa pessoas[], int len);


// MAIN -
int main()
{
   
    TPessoa pessoas[6];
    
    // Inicializando pessoas
    
    strcpy(pessoas[0].nome, "Joao");
    pessoas[0].genero = 'M';
    pessoas[0].idade = 1;
    
    
    strcpy(pessoas[1].nome, "Agatha");
    pessoas[1].genero = 'F';
    pessoas[1].idade = 12;
    
    
    strcpy(pessoas[2].nome, "Ana");
    pessoas[2].genero = 'F';
    pessoas[2].idade = 15;
    
    
    strcpy(pessoas[3].nome, "Pedro");
    pessoas[3].genero = 'M';
    pessoas[3].idade = 15;
    
   
    strcpy(pessoas[4].nome, "Carlos");
    pessoas[4].genero = 'M';
    pessoas[4].idade = 17;
    
   
    strcpy(pessoas[5].nome, "Julia");
    pessoas[5].genero = 'F';
    pessoas[5].idade = 21;
    
    
    printf("=== TESTE DA FUNÇÃO CHECAR ORDEM DE PESSOAS ===\n\n");
    
    exibirTodasPessoas(pessoas, 6);
    
    if(checarOrdenacao(pessoas, 6) == 1)
    {
        printf("\nO vetor esta ordenado");
    }
    else{
        
        printf("\nO vetor nao esta ordenado");
    }
    
    return 0;
}




// Definição de Func.


// 1. Observação: o vetor será considerado ordenado se estiver organizado crescentemente em função da idade.
//   Porém, no caso de pessoas com a mesma idade, estas devem estar ordenadas crescentemente pelo nome.
int checarOrdenacao(TPessoa pessoas[], int len)
{
    int i;
  
    for(i=0; i<len-1; i++)
    {
      
      if(pessoas[i].idade > pessoas[i+1].idade)
      {
         return 0;
      }
      
        if(pessoas[i].idade == pessoas[i+1].idade)
        {
          if(strcmp(pessoas[i].nome, pessoas[i+1].nome) > 0)
          {
                return 0;
                
          }    
        }
      
      
      
    }
    
    return 1;
}


void exibirPessoa(TPessoa pessoa)
{
    //printf("\nNome: %s\n", pessoa.nome);
    //printf("Genero: %c\n", pessoa.genero);
   // printf("Idade: %d\n", pessoa.idade);
     printf("Nome: %-8s | Genero: %c | Idade: %2d\n", 
           pessoa.nome, pessoa.genero, pessoa.idade);
}


void exibirTodasPessoas(TPessoa pessoas[], int len)
{
    
    int i;
    
        for(i=0; i<len; i++)
        {
            exibirPessoa(pessoas[i]);
        }
}












