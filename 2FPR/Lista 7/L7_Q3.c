/*

Desenvolver uma função, em C, que, dada uma
string S e dada uma posição P desta string, crie duas
novas strings: s1 com os caracteres de S das
posições 0 a P-1; e S2 com os caracteres de S da
posição P à última.

Nota: Caso P seja uma posição inválida, a função
deverá retornar o valor 0; caso contrário,
procederá com a criação das duas strings e
retornará o valor 1.


*/


#include <stdio.h>
#include <string.h>



int dividirString(char palavraOriginal[], int posicao, char str[], char str2[]);




int main() {
    char palavra[] = "computador";
    char str[50], str2[50];
    int resultado;

    // Vamos dividir na posição 5
    resultado = dividirString(palavra, 5, str, str2);

    if(resultado == 1) {
        printf("Parte 1: %s\n", str);
        printf("Parte 2: %s\n", str2);
    } else {
        printf("Posição invalida!\n");
    }

    return 0;
}





int dividirString(char palavraOriginal[], int posicao, char str[], char str2[]) {
    int i;
    int j = 0, k = 0;
    int tamanhoOriginal = strlen(palavraOriginal);

    
    if(posicao < 0 || posicao > tamanhoOriginal) {
        return 0; 
    }

    for(i = 0; i < posicao; i++) {
        str[j] = palavraOriginal[i];
        j++;
    }
    
    str[j] = '\0'; 
    
    
    
    for(i = posicao; i < tamanhoOriginal; i++) {
        str2[k] = palavraOriginal[i];
        k++;
    }
    str2[k] = '\0'; 

    return 1; 
}


