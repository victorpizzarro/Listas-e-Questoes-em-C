/*

Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.

*/

#include <stdio.h>
#include <string.h>

void remover(char str[], char letra);

int main() {
    char palavra[] = "feito";
    char letra;
    
    printf("Palavra inicial: %s\n", palavra);
    printf("\nInforme a letra a ser removida: ");
    scanf(" %c", &letra);
    
    remover(palavra, letra);
    
    printf("Palavra final: %s\n", palavra); 
    
    return 0;
}

void remover(char str[], char letra) {
    int i = 0; 
    int j = 0; 

    while (str[i] != '\0') {
        if (str[i] != letra) {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0'; 
}


