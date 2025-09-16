#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char genero, gosto;
    int i;
    int contAM = 0, contAF = 0, contN = 0;
    int contAT = 0, contNAT = 0;

    for (i = 1; i <= 4; i++) {
        printf("\n[%d] Informe seu Genero: [M] ou [F]: ", i);
        
        fflush(stdin);
        scanf("%c", &genero);
        genero = toupper(genero);

        if (genero == 'M' || genero == 'F') {
            printf("\nInforme se gostou ou nao [G] gostou [N] nao gostou: ");

            fflush(stdin);
            scanf("%c", &gosto);
            gosto = toupper(gosto);

            if (gosto == 'G') {
                contAT++; 
                if (genero == 'M'){
				
                    contAM++;
					}
                else{
				
                    contAF++;
					}
            } else{
            	
			 if (gosto == 'N') {
                contNAT++; 
                contN++;
            } else {
                printf("\nOpcao de gosto invalida.\n");
                return 0;
            }

        } 
        }
    }

    printf("\n%d pessoas gostaram do produto.", contAT);
    printf("\n%d pessoas nao gostaram do produto.", contNAT);

    if (contAM > contAF) {
        printf("\nO genero masculino teve maior aprovacao.");
    } else if (contAF > contAM) {
        printf("\nO genero feminino teve maior aprovacao.");
    } else {
        printf("\nO numero de aprovacao foi igual em ambos os generos.");
    }

    return 0;
}
