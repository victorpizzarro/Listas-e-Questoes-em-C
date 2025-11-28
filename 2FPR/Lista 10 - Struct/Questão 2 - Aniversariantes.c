/******************************************************************************

Suponha a existência de um vetor de tamanho TAM,
cada posição armazenando o nome da pessoa e a sua data de aniversário
(representada por um struct do tipo TData, contendo os campos dia e mes).

Pede-se o desenvolvimento das seguintes funções:

1. Determinar a quantidade de pessoas que
fazem aniversário no mês M;

2. Exibir os nomes de todas pessoas que fazem
aniversário entre as datas d1 e d2, ambas
do tipo TData.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

// Struct - DATA
typedef struct{
    int dia, mes;
}TData;

// Struct - ANIVERSÁRIO
typedef struct{
    char nome[15];
    TData aniversario;
}TPessoa;

// Cabeçalho de Func.
int aniversariantesMes(TPessoa pessoas[], int len, int mes);
int fazAniversario(TData data, TData d1, TData d2);
void exibirAniversariante(TPessoa pessoas[], int len, TData d1, TData d2);
void exibirPessoa(TPessoa pessoa);

// MAIN -
int main()
{
    // Criando um vetor de pessoas para teste
    TPessoa pessoas[8];
    
    // Inicializando cada pessoa individualmente
    strcpy(pessoas[0].nome, "Joao");
    pessoas[0].aniversario.dia = 15;
    pessoas[0].aniversario.mes = 3;
    
    strcpy(pessoas[1].nome, "Agatha");
    pessoas[1].aniversario.dia = 20;
    pessoas[1].aniversario.mes = 5;
    
    strcpy(pessoas[2].nome, "Pedro");
    pessoas[2].aniversario.dia = 10;
    pessoas[2].aniversario.mes = 7;
    
    strcpy(pessoas[3].nome, "Ana");
    pessoas[3].aniversario.dia = 25;
    pessoas[3].aniversario.mes = 5;
    
    strcpy(pessoas[4].nome, "Carlos");
    pessoas[4].aniversario.dia = 5;
    pessoas[4].aniversario.mes = 9;
    
    strcpy(pessoas[5].nome, "Julia");
    pessoas[5].aniversario.dia = 12;
    pessoas[5].aniversario.mes = 5;
    
    strcpy(pessoas[6].nome, "Lucas");
    pessoas[6].aniversario.dia = 30;
    pessoas[6].aniversario.mes = 7;
    
    strcpy(pessoas[7].nome, "Fernanda");
    pessoas[7].aniversario.dia = 8;
    pessoas[7].aniversario.mes = 12;
    
    int tamanho = 8;
    TData d1, d2;
    
    printf("=== TESTE DO SISTEMA DE ANIVERSARIANTES ===\n\n");
    
    // Teste 1: Contar aniversariantes do mês 5 (Maio)
    printf("1. QUANTIDADE DE ANIVERSARIANTES NO MES 5:\n");
    int quantidade = aniversariantesMes(pessoas, tamanho, 5);
    printf("Existem %d pessoas que fazem aniversario no mes 5.\n\n", quantidade);
    
    // Teste 2: Contar aniversariantes do mês 7 (Julho)
    printf("2. QUANTIDADE DE ANIVERSARIANTES NO MES 7:\n");
    quantidade = aniversariantesMes(pessoas, tamanho, 7);
    printf("Existem %d pessoas que fazem aniversario no mes 7.\n\n", quantidade);
    
    // Teste 3: Aniversariantes entre 01/04 e 30/06
    printf("3. ANIVERSARIANTES ENTRE 01/04 E 30/06:\n");
    d1.dia = 1; d1.mes = 4;
    d2.dia = 30; d2.mes = 6;
    exibirAniversariante(pessoas, tamanho, d1, d2);
    
    // Teste 4: Aniversariantes entre 01/07 e 31/08
    printf("\n4. ANIVERSARIANTES ENTRE 01/07 E 31/08:\n");
    d1.dia = 1; d1.mes = 7;
    d2.dia = 31; d2.mes = 8;
    exibirAniversariante(pessoas, tamanho, d1, d2);
    
    // Teste 5: Aniversariantes entre 01/12 e 31/12
    printf("\n5. ANIVERSARIANTES ENTRE 01/12 E 31/12:\n");
    d1.dia = 1; d1.mes = 12;
    d2.dia = 31; d2.mes = 12;
    exibirAniversariante(pessoas, tamanho, d1, d2);
    
    // Teste 6: Exibir todas as pessoas
    printf("\n6. TODOS OS CADASTRADOS:\n");
    for(int i = 0; i < tamanho; i++) {
        exibirPessoa(pessoas[i]);
    }
    
    return 0;
}

// Definição de Func.

// 1. Determinar a quantidade de pessoas que fazem aniversário no mês M;
int aniversariantesMes(TPessoa pessoas[], int len, int mes)
{
    int i, cont = 0;
    
    for(i=0; i<len; i++)
    {
        if(pessoas[i].aniversario.mes == mes)
        {
            cont++;
        }  
    }
    return cont;
}

int fazAniversario(TData data, TData d1, TData d2)
{
    // Primeiro verifica se o mês está entre d1.mes e d2.mes
    if ((data.mes > d1.mes) && (data.mes < d2.mes))
    {
        return 1;
    }
    
    // Se o mês é igual ao mês final, verifica o dia
    if((data.mes == d2.mes) && (data.dia <= d2.dia))
    {
        return 1;
    }
    
    // Se o mês é igual ao mês inicial, verifica o dia
    if((data.mes == d1.mes) && (data.dia >= d1.dia))
    {
        return 1;
    }
    
    return 0;
}

// 2. Exibir os nomes de todas pessoas que fazem aniversário entre as datas d1 e d2, ambas do tipo TData.
void exibirAniversariante(TPessoa pessoas[], int len, TData d1, TData d2)
{
    int i;
    int encontrou = 0;
    
    for (i=0; i < len; i++)
    {
        if (fazAniversario(pessoas[i].aniversario, d1, d2) == 1)
        {
            exibirPessoa(pessoas[i]);
            encontrou = 1;
        }
    }
    
    if (!encontrou) {
        printf("Nenhum aniversariante encontrado neste periodo.\n");
    }
}

void exibirPessoa(TPessoa pessoa)
{
    printf("Nome: %s", pessoa.nome);
    printf(" - Aniversario: %d/%d\n", pessoa.aniversario.dia, pessoa.aniversario.mes);
}

















