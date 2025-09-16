//Questão 8 - Lista 5

/*

Fazer um programa que auxilie o órgão
regulador no cálculo do total de recursos
arrecadados com a aplicação de multas de
trânsito.

O programa deve ler as seguintes
informações para cada motorista:

- O número da carteira de motorista;
- Número de multas;
- Valor de cada uma das multas.

Deve ser exibido o valor da dívida de cada
motorista e ao final da leitura o total de
recursos arrecadados (somatório de todas
as multas).

O programa também deverá
apresentar o número da carteira do
motorista que obteve o maior número de
multas.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
    float valTotalMultas = 0, arrecadacao = 0;
    float valMultas;
    int motoristas, numCarteira, multas;
    int maxMultas = 0, carteiraMaxMultas = 0;

    printf("\nQuantos motoristas foram multados: ");
    scanf("%d", &motoristas);

    for (int i = 1; i <= motoristas; i++) {
        printf("\nInforme o numero da carteira de motorista: ");
        scanf("%d", &numCarteira);

        printf("\nInforme o numero de multas: ");
        scanf("%d", &multas);

        valTotalMultas = 0; 

        for (int j = 1; j <= multas; j++) {
            printf("\nInforme o valor da multa %d: ", j);
            scanf("%f", &valMultas);
            valTotalMultas += valMultas;
        }

        printf("\nValor total do motorista com carteira %d: R$ %.2f\n", numCarteira, valTotalMultas);

        arrecadacao += valTotalMultas;

        
        if (multas > maxMultas) {
            maxMultas = multas;
            carteiraMaxMultas = numCarteira;
        }
        
    }

    printf("\nO valor total arrecadado e: R$ %.2f\n", arrecadacao);
    printf("\nO motorista com mais multas tem a carteira numero: %d (com %d multas)\n", carteiraMaxMultas, maxMultas);

    return 0;
}
