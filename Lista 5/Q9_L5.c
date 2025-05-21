// Questão 9 - Lista 5

/*

Escrever um programa que encontre o
quinto número maior que 1000, cuja
divisão por 11 tenha resto 5.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int cont = 0;
    int i = 1001; 

    while (cont < 5) {
        
        if (i % 11 == 5) {
            cont++; 
        }
        
        if (cont == 5) {
            break; 
        }
        
        i++; 
    }

    printf("O quinto numero maior que 1000, cuja divisao por 11 tenha resto 5 e: %d\n", i);

    return 0;
}
