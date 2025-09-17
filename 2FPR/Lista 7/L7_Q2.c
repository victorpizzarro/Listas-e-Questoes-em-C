/*

Implementar uma função que, dadas duas
strings s1 e s2, crie uma nova string – s3 –
contendo todos os caracteres de s1 que não
estejam em s2.
Nota: em s3, não devem existir caracteres
repetidos.

*/

#include <stdio.h>

void novaString(char str[], char str2[], char str3[]);

int main() {
    char palavra[] = "ouro";
    char palavra2[] = "prata";
    char palavraFinal[32];

    novaString(palavra, palavra2, palavraFinal);

    printf("%s\n", palavraFinal);  

    return 0;
}

void novaString(char str[], char str2[], char str3[]) {
    int i, j, k;   
    int posicaoStr3 = 0;            
    int proibido, jaAdicionado;   

    for(i = 0; str[i] != '\0'; i++) {
        proibido = 0;

        
        for(j = 0; str2[j] != '\0'; j++) {
            if(str[i] == str2[j]) {
                proibido = 1;
                break;
            }
        }

        if(proibido == 0) {
            jaAdicionado = 0;

            
            for(k = 0; k < posicaoStr3; k++) {
                if(str[i] == str3[k]) {
                    jaAdicionado = 1;
                    break;
                }
            }

            if(jaAdicionado == 0) {
                str3[posicaoStr3] = str[i];
                posicaoStr3++;
            }
        }
    }

   
    str3[posicaoStr3] = '\0';
}

