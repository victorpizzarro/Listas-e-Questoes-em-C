/*

Implementar uma função que, dada uma string
s, determine a quantidade de caracteres
distintos em s.

*/

#include <stdio.h>
#include <string.h>

int distintos(char str[]);

int main() {
    char palavra[] = "amarelo";
    printf("A string '%s' tem %d caracteres distintos.\n", palavra, distintos(palavra));

    return 0;
}

int distintos(char str[]){
    int i = 0, j;
    int cont = 0; 

    while (str[i] != '\0'){ 
        int repetido = 0;

        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                repetido = 1;
                break;
            }
        }

        if (repetido == 0) { 
            cont++; 
        }

        i++;
    }

    return cont;
}

