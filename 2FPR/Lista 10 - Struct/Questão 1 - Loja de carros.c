/******************************************************************************

                          
 Uma loja de automóveis mantém os carros à venda sob a forma de um vetor de structs
contendo as seguintes informações, para cada veículo:

placa, modelo, marca, cor, quilometragem, ano modelo/fabricação (deve ser um struct),
valor e tipo (usado ou 0 km, conforme o valor do campo quilometragem).

Pede-se a declaração de uma variável que represente o estoque de veículos da loja,
incluindo todas as declarações de tipos que possam ser necessárias.

Além disso, implementar as seguintes funções:

i. Exibir todos os carros do modelo m, ano de
fabricação entre a1 e a2 (inclusive), com
valor não superior a x reais;

ii. Reajustar os valores de todos os carros 0
km, considerando um aumento de p %;

iii. Retirar do estoque um determinado veículo,
dada a sua placa.


*******************************************************************************/

#include <stdio.h>
#include <string.h>

//-Definição struct

typedef struct {
    
    int modelo;
    int fabricacao;
    
}TAno;



typedef struct {
    
    char placa[8];
    char modelo[20];
    char marca[20];
    char cor[20];
    float quilometragem;
    TAno ano;
    float valor;
    char tipo[20];
    
    
}TCarro;



//-Cabeçalho Func.
void exibirCarro(TCarro carro);
void exibirTodosCarros(TCarro estoque[], int len, char modelo[], int ano1, int ano2, float x);
void reajustarValor0km(TCarro estoque[], int len, float taxa);
int removerCarro(TCarro estoque[], int *len, char placa[]);


//-Main
int main()
{
   // Criando estoque com 5 carros
    TCarro estoque[10];
    int len = 5; // quantidade atual de carros no estoque
    
    // Preenchendo os carros manualmente
    // Carro 1 - 0km
    strcpy(estoque[0].placa, "ABC1234");
    strcpy(estoque[0].modelo, "Gol");
    strcpy(estoque[0].marca, "Volkswagen");
    strcpy(estoque[0].cor, "Vermelho");
    estoque[0].quilometragem = 0;
    estoque[0].ano.fabricacao = 2023;
    estoque[0].ano.modelo = 2024;
    estoque[0].valor = 45000.00;
    strcpy(estoque[0].tipo, "0km");
    
    // Carro 2 - usado
    strcpy(estoque[1].placa, "DEF5678");
    strcpy(estoque[1].modelo, "Onix");
    strcpy(estoque[1].marca, "Chevrolet");
    strcpy(estoque[1].cor, "Prata");
    estoque[1].quilometragem = 45000.5;
    estoque[1].ano.fabricacao = 2020;
    estoque[1].ano.modelo = 2020;
    estoque[1].valor = 38000.00;
    strcpy(estoque[1].tipo, "usado");
    
    // Carro 3 - 0km
    strcpy(estoque[2].placa, "GHI9012");
    strcpy(estoque[2].modelo, "HB20");
    strcpy(estoque[2].marca, "Hyundai");
    strcpy(estoque[2].cor, "Branco");
    estoque[2].quilometragem = 0;
    estoque[2].ano.fabricacao = 2023;
    estoque[2].ano.modelo = 2024;
    estoque[2].valor = 52000.00;
    strcpy(estoque[2].tipo, "0km");
    
    // Carro 4 - usado
    strcpy(estoque[3].placa, "JKL3456");
    strcpy(estoque[3].modelo, "Gol");
    strcpy(estoque[3].marca, "Volkswagen");
    strcpy(estoque[3].cor, "Preto");
    estoque[3].quilometragem = 80000.0;
    estoque[3].ano.fabricacao = 2019;
    estoque[3].ano.modelo = 2019;
    estoque[3].valor = 32000.00;
    strcpy(estoque[3].tipo, "usado");
    
    // Carro 5 - 0km
    strcpy(estoque[4].placa, "MNO7890");
    strcpy(estoque[4].modelo, "Onix");
    strcpy(estoque[4].marca, "Chevrolet");
    strcpy(estoque[4].cor, "Azul");
    estoque[4].quilometragem = 0;
    estoque[4].ano.fabricacao = 2023;
    estoque[4].ano.modelo = 2024;
    estoque[4].valor = 48000.00;
    strcpy(estoque[4].tipo, "0km");
    
    printf("=== TESTE DO SISTEMA DA LOJA DE AUTOMÓVEIS ===\n\n");
    
    // Teste 1: Exibir todos os carros inicialmente
    printf("1. TODOS OS CARROS NO ESTOQUE:\n");
    for(int i = 0; i < len; i++) {
        exibirCarro(estoque[i]);
    }
    
    // Teste 2: Exibir carros do modelo "Gol" entre 2018-2020 com valor até 35000
    printf("\n2. CARROS DO MODELO 'Gol' (2018-2020) ATÉ R$ 35000:\n");
    exibirTodosCarros(estoque, len, "Gol", 2018, 2020, 35000.00);
    
    // Teste 3: Reajustar valores dos carros 0km em 10%
    printf("\n3. REAJUSTANDO CARROS 0KM EM 10%%:\n");
    reajustarValor0km(estoque, len, 10.0);
    printf("Valores reajustados!\n");
    
    // Mostrar carros 0km após reajuste
    printf("\nCarros 0km após reajuste:\n");
    for(int i = 0; i < len; i++) {
        if(estoque[i].quilometragem == 0) {
            exibirCarro(estoque[i]);
        }
    }
    
    // Teste 4: Remover um carro pela placa
    printf("\n4. REMOVENDO CARRO COM PLACA 'DEF5678':\n");
    if(removerCarro(estoque, &len, "DEF5678")) {
        printf("Carro removido com sucesso!\n");
    } else {
        printf("Carro não encontrado!\n");
    }
    
    // Mostrar estoque após remoção
    printf("\nESTOQUE APÓS REMOÇÃO (%d carros):\n", len);
    for(int i = 0; i < len; i++) {
        exibirCarro(estoque[i]);
    }
    
    // Teste 5: Tentar remover carro que não existe
    printf("\n5. TENTANDO REMOVER CARRO INEXISTENTE 'XXX9999':\n");
    if(removerCarro(estoque, &len, "XXX9999")) {
        printf("Carro removido com sucesso!\n");
    } else {
        printf("Carro não encontrado!\n");
    }
    
    return 0;
    
}



//-Implementação Func.

//Exibir os dados de um carro
void exibirCarro(TCarro carro)
{
    
    printf ("\nPlaca: %s", carro.placa);
	printf ("\nMarca/Modelo: %s/%s", carro.marca, carro.modelo);
	printf ("\nCor: %s", carro.cor);
	printf ("\nKm: %.1f", carro.quilometragem);
	printf ("\nAno: %d/%d", carro.ano.fabricacao, carro.ano.modelo);
	printf ("\nValor: %.2f", carro.valor);
	printf ("\nTipo: %s\n", carro.tipo);
    
    
}


// 1. Exibir todos os carros do modelo m, ano de fabricação 
//    entre a1 e a2 (inclusive), com valor não superior a x reais
void exibirTodosCarros(TCarro estoque[], int len, char modelo[], int ano1, int ano2, float x)
{
    int i;
    
    for(i=0; i<len; i++)
    {
        if ((strcmp(estoque[i].modelo, modelo) == 0) &&
            (estoque[i].ano.fabricacao >= ano1) &&
            (estoque[i].ano.fabricacao <= ano2) &&
            (estoque[i].valor <= x)){
                
                exibirCarro(estoque[i]);
            }
    }
}



// 2. Reajustar os valores de todos os carros 0 km, considerando um 
//    aumento de p %
void reajustarValor0km(TCarro estoque[], int len, float taxa)
{
    int i;
    
    for(i=0; i<len; i ++){
        
        if(estoque[i].quilometragem == 0){
            estoque[i].valor += estoque[i].valor * (taxa/100);
        }
    }
 
 
}



// 3. Retirar do estoque um determinado veículo, dada a sua placa
int removerCarro(TCarro estoque[], int *len, char placa[])
{

    int i, j;
    
    for (i=0; i<*len; i++)
    {
        
        if (strcmp(estoque[i].placa, placa) == 0)
        {
            
            for (j=i; j<*len-1; j++)
            {
                estoque[j] = estoque[j+1];
            }
            
            (*len)--;
            
            return 1;
        }
    }

    return 0;
    
}






























