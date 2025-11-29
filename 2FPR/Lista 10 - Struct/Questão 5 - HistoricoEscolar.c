/******************************************************************************

    O histórico de um aluno é representado por um vetor de structs onde cada posição armazena o
    código da disciplina cursada, semestre e ano que a cumpriu e a média final na disciplina.
    
    Implementar uma função que exiba o histórico do aluno com o seguinte formato:
    
        NomeDisciplina1 (código1)    MédiaDisciplina1
    
        NomeDisciplina2 (código2)    MédiaDisciplina2 
    
        .
        .
        .
    
        NomeDisciplinaN (códigoN)    MédiaDisciplinaN
    
        Coeficiente de rendimento: CR
    
    
    ------------------------------------------------------------------------------------
    
        Observações:
    
        1. Para obter os dados da disciplina, um outro vetor de structs deve ser consultado.
        Este, por sua vez, armazena para cada disciplina do curso as seguintes informações:
    
        código, nome e número de créditos;
    
        2. O coeficiente de rendimento consiste em uma média ponderada de todos os graus
        atribuídos às disciplinas cursadas,
        onde os pesos são representados pelo número de créditos da disciplina;
    
        3. Todos os dados em negrito apresentados no formato do histórico devem ser obtidos a
        partir dos vetores.


*******************************************************************************/

#include <stdio.h>
#include <string.h>

// Struct - SEMESTRE
typedef struct{
    
    int semestre;
    int ano;
    
}TSemestre;


// Struct - DISCIPLINA
typedef struct{
    
    char codigo[4];
    char nome[50];
    int creditos;
    
}TDisciplina;

// Struct - HISTORICO
typedef struct{
    
    char codigo[4];
    TSemestre data;
    float media;
    
}THistorico;




// Cabeçalho de Func.
void exibirHistorico(THistorico historicos[], int lenH, TDisciplina disciplinas[], int lenD);
int buscarDisciplina (TDisciplina disciplinas[], int lenD, char codigo[]);

// MAIN -
int main()
{
   
     printf("=== HISTÓRICO ESCOLAR ===\n\n");
    
   // Cadastro de disciplinas
    TDisciplina disciplinas[3];
    
    disciplinas[0].codigo[0] = 'C';
    disciplinas[0].codigo[1] = 'A';
    disciplinas[0].codigo[2] = 'L';
    disciplinas[0].codigo[3] = '\0';
    strcpy(disciplinas[0].nome, "Calculo 1");
    disciplinas[0].creditos = 6;
    
    disciplinas[1].codigo[0] = 'F';
    disciplinas[1].codigo[1] = 'A';
    disciplinas[1].codigo[2] = 'C';
    disciplinas[1].codigo[3] = '\0';
    strcpy(disciplinas[1].nome, "Fundamentos 1");
    disciplinas[1].creditos = 4;
    
    disciplinas[2].codigo[0] = 'A';
    disciplinas[2].codigo[1] = 'L';
    disciplinas[2].codigo[2] = 'G'; 
    disciplinas[2].codigo[3] = '\0';
    strcpy(disciplinas[2].nome, "Algebra");
    disciplinas[2].creditos = 5;
        
    // Histórico do aluno
    THistorico historico[3];
    
    historico[0].codigo[0] = 'C';
    historico[0].codigo[1] = 'A';
    historico[0].codigo[2] = 'L';
    historico[0].codigo[3] = '\0';
    historico[0].data.semestre = 2;
    historico[0].data.ano = 2022;
    historico[0].media = 8.5;
    
    historico[1].codigo[0] = 'F';
    historico[1].codigo[1] = 'A';
    historico[1].codigo[2] = 'C';
    historico[1].codigo[3] = '\0';
    historico[1].data.semestre = 1;
    historico[1].data.ano = 2023;
    historico[1].media = 7.0;
    
    historico[2].codigo[0] = 'A';
    historico[2].codigo[1] = 'L';
    historico[2].codigo[2] = 'G';
    historico[2].codigo[3] = '\0';
    historico[2].data.semestre = 1;
    historico[2].data.ano = 2023;
    historico[2].media = 9.0;
       
    // Exibir histórico
    exibirHistorico(historico, 3, disciplinas, 3);
    
    return 0;
}




// Definição de Func.



/*
  FUNÇÃO: exibirHistorico
  
  OBJETIVO: Exibir o histórico completo do aluno e calcular o CR
  
  PARÂMETROS:
    - historicos[]: vetor com as disciplinas cursadas pelo aluno
    
    - lenH: tamanho do vetor de histórico
    
    - disciplinas[]: vetor com o cadastro completo de todas as disciplinas
    
    - lenD: tamanho do vetor de disciplinas
    
 */
void exibirHistorico
(
    THistorico historicos[], int lenH,
    TDisciplina disciplinas[], int lenD
){
  
  int i, posicao;
  float cr, somaPond = 0;
  int pesos = 0;
    
    for(i=0; i<lenH; i++)
    {
        posicao = buscarDisciplina(disciplinas, lenD, historicos[i].codigo);
        
        printf ("%s (%s) %d/%d %.1f\n",
		         disciplinas[posicao].nome, 
				 historicos[i].codigo,
				 historicos[i].data.semestre, 
				 historicos[i].data.ano,
				 historicos[i].media);
				 
				 somaPond += historicos[i].media * disciplinas[posicao].creditos;
				 pesos += disciplinas[posicao].creditos;
				 
    }
    
    cr = somaPond/pesos;
    
    printf("\nCR: %.2f\n", cr);
  
}


/*
    FUNÇÃO: buscarDisciplina
    
    OBJETIVO: Encontrar uma disciplina no cadastro geral pelo código
    
    PARÂMETROS:
    
     - disciplinas[]: vetor com todas as disciplinas cadastradas
     
     - lenD: tamanho do vetor
     
     - codigo[]: código da disciplina a ser buscada
     
    RETORNO: índice da disciplina encontrada.
  
 */
int buscarDisciplina (TDisciplina disciplinas[], int lenD, char codigo[])
{
    int i;
    
        for(i=0; i<lenD; i++)
        {
            if(strcmp(codigo, disciplinas[i].codigo) == 0)
            {
                return i;    
            }
        }
}








