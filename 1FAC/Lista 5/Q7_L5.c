//Questão 7 - Lista 5

/*Desenvolver um programa no qual o
usuário entre com vários números inteiros
e positivos e imprima o produto dos
números ímpares e a soma dos números
pares.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numero, num, soma=0, mult=1;

    
    printf("\n Quantos numeros voce quer exibir:  ");
    scanf("%d", &numero);
    
    for(int i=1; i<=numero; i++){
        
        printf("\n Informe %d numeros:  ", numero);
        scanf("%d", &num);
        
        if(num % 2 == 0){
            soma += num;
            
        }else{
            mult*=num;
        }
    
    }
    
    printf("\nO produto dos numeros impares e: %d",mult);
    printf("\nA soma dos numeros pares e: %d",soma);
	
	
	return 0;
}