/*


Desenvolver uma função que remova de uma
string s os caracteres compreendidos entre as
posições p1 e p2.
Caso p1 ou p2 seja uma posição inválida, a
função deverá retornar o valor 0 e a remoção de
caracteres solicitada não será realizada; caso
contrário, deverá retornar 1 e proceder com o
que foi pedido.



*/



#include <stdio.h>
#include <string.h>

int removerTrecho(char palavraOriginal[], int posicao1, int posicao2);

int main() {
    char palavra[] = "computador";
    int resultado;
    
    
    
    resultado = removerTrecho(palavra, 3, 6);

    if(resultado == 1) {
        printf("Palavra Final: %s\n", palavra);
    } else {
        printf("Posições invalidas\n");
    }

    return 0;
}

int removerTrecho(char palavraOriginal[], int posicao1, int posicao2) {
    
    int tamanho = strlen(palavraOriginal);
    int i, j;
    
    
    if(posicao1 < 0 || posicao2 < 0 || posicao1 > posicao2 || posicao2 >= tamanho) {
        return 0;
    }

    i = posicao1;
    j = posicao2 + 1;

    while(palavraOriginal[i] != '\0') {
        palavraOriginal[i] = palavraOriginal[j];
        i++;
        j++;
    }

    palavraOriginal[i] = '\0';

    return 1;
}
