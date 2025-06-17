/*
Questão 1 - Lista 3

Faça um programa que, dadas duas datas (cada
qual com dia, mês e ano) fornecidas pelo
usuário, determine qual delas é a mais recente.

*/

#include <stdio.h>

int main() {
    int d1, m1, a1;
    int d2, m2, a2;

    
    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &d1, &m1, &a1);

    
    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    // Comparação das datas
    if (a1 > a2) {
        printf("A data %d/%d/%d eh a mais recente.\n",d1, m1, a1);
    } else if (a2 > a1) {
        printf("A data %d/%d/%d eh a mais recente.\n",d2, m2, a2);
    } else {
        // Anos iguais
        if (m1 > m2) {
            printf("A data %d/%d/%d eh a mais recente.\n",d1, m1, a1);
        } else if (m2 > m1) {
            printf("A data %d/%d/%d eh a mais recente.\n",d2, m2, a2);
        } else {
            // Meses iguais
            if (d1 > d2) {
                printf("A data %d/%d/%d eh a mais recente.\n",d1, m1, a1);
            } else if (d2 > d1) {
                printf("A data %d/%d/%d eh a mais recente.\n",d2, m2, a2);
            } else {
                // Datas iguais
                printf("As duas datas sao iguais.\n");
            }
        }
    }

    return 0;
}