/* 
   FAETERJ-Rio
   Fundamentos de Programação - FPR - Manhã
   Professor Leonardo Vianna
   Data: 30/10/2025
   
   Teste 4 (Structs):
   
   Uma instituição de ensino armazenou sob a forma de vetores de 
   structs, um por turno (manhã, tarde e noite), os dados das 
   diversas disciplinas (código, nome e a quantidade de alunos 
   inscritos).
   
   Considerando a existência dos vetores vetManha, vetTarde e 
   vetNoite, conforme definido anteriormente, pede-se a 
   implementação de uma função que gere um novo vetor, do mesmo 
   tipo, que armazene, para cada disciplina ministrada na 
   instituição, o total de alunos nela inscritos (somando as 
   quantidades matriculadas em cada turno). 
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

// Struct - DISCIPLINA
typedef struct {
	int codigo;
	char nome[50];
	int matriculados;	
} TDisciplina;



//protótipos das funções
void totalMatriculados (TDisciplina vManha[], int lenM,
                        TDisciplina vTarde[], int lenT,
                        TDisciplina vNoite[], int lenN,
                        TDisciplina vFinal[], int *lenF);


void checarVetores (TDisciplina vetInicio[], int lenI,
                    TDisciplina vetFinal[], int lenF,
                    int *tam);

void preencherVetores (TDisciplina vManha[], int quantM, 
                       TDisciplina vTarde[], int quantT,
					   TDisciplina vNoite[], int quantN);

void exibirVetor (TDisciplina vDisciplina[], int quant);



//main - 
void main ()
{
	//declaração de variáveis
	TDisciplina vetManha[5];
	TDisciplina vetTarde[4];
	TDisciplina vetNoite[6];
	TDisciplina vetFinal[30];
	int lenFinal;
	//preenchendo os vetores de disciplinas
	preencherVetores (vetManha, 5, vetTarde, 4, vetNoite, 6);
	
	//chamando a função implementada
	totalMatriculados(vetManha,5,vetTarde,4,vetNoite,6,vetFinal,&lenFinal);
			
	//exibindo os vetores
	printf ("\n\nDISCIPLINAS - MATUTINO:\n");
	exibirVetor (vetManha, 5);
	
	printf ("\n\nDISCIPLINAS - VESPERTINO:\n");
	exibirVetor (vetTarde, 4);
	
	printf ("\n\nDISCIPLINAS - NOTURNO:\n");
	exibirVetor (vetNoite, 6);

	//exibindo o vetor gerado pela função implementada
	printf("\n\n---EXIBINDO VETOR FINAL---\n");
	exibirVetor(vetFinal, lenFinal);
}

//implementação das funções
void preencherVetores (TDisciplina vManha[], int quantM, 
                       TDisciplina vTarde[], int quantT,
					   TDisciplina vNoite[], int quantN)
{
	//preenchedo os dados do turno da manhã
	vManha[0].codigo = 1234;
	strcpy (vManha[0].nome, "Lingua Portuguesa");
	vManha[0].matriculados = 25;
	
	vManha[1].codigo = 2345;
	strcpy (vManha[1].nome, "Organizacao de Computadores");
	vManha[1].matriculados = 38;
	
	vManha[2].codigo = 3456;
	strcpy (vManha[2].nome, "Matematica para Computacao");
	vManha[2].matriculados = 28;
	
	vManha[3].codigo = 4567;
	strcpy (vManha[3].nome, "Fundamentos de Algoritmos de Computacao");
	vManha[3].matriculados = 41;
	
	vManha[4].codigo = 5678;
	strcpy (vManha[4].nome, "Engenharia de Requisitos");
	vManha[4].matriculados = 20;
	
	
	//preenchedo os dados do turno da tarde
	vTarde[0].codigo = 6789;
	strcpy (vTarde[0].nome, "Interface Homem-Maquina");
	vTarde[0].matriculados = 13;
	
	vTarde[1].codigo = 4567;
	strcpy (vTarde[1].nome, "Fundamentos de Algoritmos de Computacao");
	vTarde[1].matriculados = 18;

	vTarde[2].codigo = 2345;
	strcpy (vTarde[2].nome, "Organizacao de Computadores");
	vTarde[2].matriculados = 15;

	vTarde[3].codigo = 7890;
	strcpy (vTarde[3].nome, "Fundamentos de Programacao");
	vTarde[3].matriculados = 21;	

	
	//preenchedo os dados do turno da noite
	vNoite[0].codigo = 3456;
	strcpy (vNoite[0].nome, "Matematica para Computacao");
	vNoite[0].matriculados = 28;
	
	vNoite[1].codigo = 4567;
	strcpy (vNoite[1].nome, "Fundamentos de Algoritmos de Computacao");
	vNoite[1].matriculados = 41;

	vNoite[2].codigo = 8901;
	strcpy (vNoite[2].nome, "Calculo");
	vNoite[2].matriculados = 35;
	
	vNoite[3].codigo = 2345;
	strcpy (vNoite[3].nome, "Organizacao de Computadores");
	vNoite[3].matriculados = 38;
	
	vNoite[4].codigo = 6789;
	strcpy (vNoite[4].nome, "Interface Homem-Maquina");
	vNoite[4].matriculados = 13;
	
	vNoite[5].codigo = 9012;
	strcpy (vNoite[5].nome, "Estrutura de Dados");
	vNoite[5].matriculados = 33;
}

void exibirVetor (TDisciplina vDisciplina[], int quant)
{
	//declaração de variáveis
	int i;
	
	//exibindo os dados das disciplinas do vetor
	for (i=0;i<quant;i++)
	{
		printf ("\nDisciplina: %s (%d)", vDisciplina[i].nome, vDisciplina[i].codigo);
		printf ("\nTotal de matriculados: %d\n\n", vDisciplina[i].matriculados);
	}
}



void totalMatriculados (TDisciplina vManha[], int lenM,
                        TDisciplina vTarde[], int lenT,
                        TDisciplina vNoite[], int lenN,
                        TDisciplina vFinal[], int *lenF)
    {
        
        int i, j;
        int tam = 0, existe = 0;
        
        // Preenchedo vetor final com Noite (Maior vetor)
        for(i=0; i<lenN; i++)
        {
            vFinal[tam] =  vNoite[i];
            tam++;
        }
        
        // FAZER - Manha
        checarVetores(vManha, lenM, vFinal, *lenF, &tam);
        
        // FAZER - Tarde
        checarVetores(vTarde, lenT, vFinal, *lenF, &tam);
      
        (*lenF) = tam;
        
        
    }  
        
       
void checarVetores (TDisciplina vetInicio[], int lenI,
                    TDisciplina vetFinal[], int lenF,
                    int *tam)
    {
         
         
         int i, j;
        int existe;
         
           
        // Checando vetores - Manha
        for(j=0; j<lenI; j++)
        {
            
            //ZERANDO existe
            existe = 0;
            
            
            //percorrendo Final
            for(i=0; i<*tam; i++)
            {
                
                if(vetFinal[i].codigo == vetInicio[j].codigo)
                {
                    vetFinal[i].matriculados += vetInicio[j].matriculados;
                    existe = 1;
                    break;
                
                }
                
            }
            
            // Se não existe no vetor Final - Acrescentar
                if (!existe)
                {
                    vetFinal[*tam] = vetInicio[j];
                    (*tam)++;
                }
            
           
            
        }
               
    }
     
     
        
    
        