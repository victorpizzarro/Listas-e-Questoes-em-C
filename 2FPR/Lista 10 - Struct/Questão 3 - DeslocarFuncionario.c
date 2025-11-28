/******************************************************************************

Considere a existência de um vetor de structs com quant posições,
onde cada uma destas armazena os seguintes dados sobre os funcionários de uma empresa:

matricula (int), nome (string), gênero (char) e salário (float).

Pede-se uma função que, dado um gênero,
desloque todos os funcionários deste gênero para o início do vetor
(e, consequentemente, os funcionários do outro gênero ficarão ao final do
conjunto).

*******************************************************************************/

#include <stdio.h>
#include <string.h>

// Struct - FUNCIONÁRIO
typedef struct{
    
    int matricula;
    char nome[15];
    char genero;
    float salario;
    
}TFuncionario;



// Cabeçalho de Func.
void exibirFuncionario(TFuncionario pessoa);
void exibirTodosFuncionarios(TFuncionario funcionarios[], int len);
void deslocarFuncionarios(TFuncionario funcionarios[], int len, char g);

// MAIN -
int main()
{
   
    TFuncionario funcionarios[6];
    
    // Inicializando funcionários
    funcionarios[0].matricula = 1001;
    strcpy(funcionarios[0].nome, "Joao");
    funcionarios[0].genero = 'M';
    funcionarios[0].salario = 2500.50;
    
    funcionarios[1].matricula = 1002;
    strcpy(funcionarios[1].nome, "Agatha");
    funcionarios[1].genero = 'F';
    funcionarios[1].salario = 3200.75;
    
    funcionarios[2].matricula = 1003;
    strcpy(funcionarios[2].nome, "Pedro");
    funcionarios[2].genero = 'M';
    funcionarios[2].salario = 1800.00;
    
    funcionarios[3].matricula = 1004;
    strcpy(funcionarios[3].nome, "Ana");
    funcionarios[3].genero = 'F';
    funcionarios[3].salario = 4100.25;
    
    funcionarios[4].matricula = 1005;
    strcpy(funcionarios[4].nome, "Carlos");
    funcionarios[4].genero = 'M';
    funcionarios[4].salario = 2900.80;
    
    funcionarios[5].matricula = 1006;
    strcpy(funcionarios[5].nome, "Julia");
    funcionarios[5].genero = 'F';
    funcionarios[5].salario = 3500.00;
    
    
    printf("=== TESTE DA FUNÇÃO DESLOCAR FUNCIONARIOS ===\n\n");
    
    // TESTE 1: Caso normal com mistura de gêneros
    printf("*** TESTE 1: Caso normal com mistura de generos ***\n");
    printf("\nAntes (genero 'F' para o inicio):\n");
    exibirTodosFuncionarios(funcionarios, 6);
    
    deslocarFuncionarios(funcionarios, 6, 'F');
    
    printf("\nDepois (gênero 'F' para o inicio):\n");
    exibirTodosFuncionarios(funcionarios, 6);
    
    
    // TESTE 2: Ordem inversa - mover masculino para início
    printf("\n\n\n*** TESTE 2: Mover 'M' para o inicio ***\n");
    
    
  
    printf("Antes (mover 'M' para inicio):\n");
    exibirTodosFuncionarios(funcionarios, 6);
    
    deslocarFuncionarios(funcionarios, 6, 'M');
    
    printf("\nDepois (mover 'M' para inicio):\n");
    exibirTodosFuncionarios(funcionarios, 6);
    
    printf("\n=== TODOS OS TESTES CONCLUIDOS ===\n");
    
    return 0;
}




// Definição de Func.
void exibirFuncionario(TFuncionario pessoa)
{
    printf("\nMatricula: %d\n", pessoa.matricula);
    printf("Nome: %s\n",pessoa.nome);
    printf("Genero: %c\n", pessoa.genero);
    printf("Salario: %.2f\n", pessoa.salario);
}

void exibirTodosFuncionarios(TFuncionario funcionarios[], int len)
{
    
    int i;
    
    for(i=0; i<len; i++)
    {
      exibirFuncionario(funcionarios[i]); 
      
    }
}


// 1. Pede-se uma função que, dado um gênero,
//    desloque todos os funcionários deste gênero para o início do vetor
//    (e, consequentemente, os funcionários do outro gênero ficarão ao final do conjunto).
void deslocarFuncionarios(TFuncionario funcionarios[], int len, char g)
{
    int i;
    TFuncionario aux;
    int final = len;
    
    for(i=0; i<final; i++)
    {
        if(funcionarios[i].genero != g){
            
            aux = funcionarios[final-1];
            funcionarios[final-1] = funcionarios[i];
            funcionarios[i] = aux;
            final--;
            i--;
        }
        
    }
}









