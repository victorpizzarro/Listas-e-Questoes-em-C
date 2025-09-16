/*
Questão 3 - Lista 3

Implementar um programa que leia um valor
inteiro n1. Se este não estiver no intervalo de
100 a 999, uma mensagem deve ser exibida ao
usuário informando que o número é inválido e,
em seguida, a execução do programa terminará.
Caso o valor esteja no intervalo definido, o

programa deverá criar um novo valor n2 (e exibi-
lo ao final) contendo os mesmos algarismos de

n1, porém em ordem crescente.
Exemplos:
n1 514
n2 145
n1 929
n2 299
n1 124
n2 124

Nota:
Como definido no enunciado, n1 consiste em um
número inteiro positivo, com 3 algarismos. n2
também será um único número!

*/


#include<stdio.h>

int main()
{
int num, a, b, c, menor, meio, maior, nFinal;



    printf("Entre com um numero de 100 a 999: ");
    scanf("%d",&num);
    
    if ((num < 100) || (num > 999))
	{
    printf("Numero invalido!!!");
    return 0;
    }
    
    else
	{
    	
    	a = num % 10;        // Último dígito
    	b = (num / 10) % 10; // Dígito do meio
    	c = num / 100;       // Primeiro dígito
    	
    	if((a == b) && (b == c))
		{
    		nFinal = num;
	 	 
	    
    		printf("\nN1: %d", num);  
   			printf("\nN2: %d", nFinal);
   			return 0;
		}
		
		
    	if((a > b) && (a >c))
		{
    		maior = a;
    		
    		if(b>=c)
			{
    			meio = b;
    			menor = c;
			}
			else
			{
				
				if(c>b)
				{
					meio = c;
					menor = b;
					
				}
			}
    		
		}
		else
		{
			if((b > a) && (b >c))
		{
    		maior = b;
    		
    		if(a>=c)
			{
    			meio = a;
    			menor = c;
			}
			else
			{
				
				if(c>a)
				{
					meio = c;
					menor = a;
					
				}
			}
    		
		}
		
		else
		{
			
			if((c > b) && (c >a))
			{
    		maior = c;
    		
    			if(b>=a)
				{
    			meio = b;
    			menor = a;
				}
					else
					{
				
						if(a>b)
						{
						meio = a;
						menor = b;
					
						}
						
						
					}
    		
			}
		}
			
			
		}
	}
	                       
     
	nFinal = (menor*100)+(meio*10)+maior;
	 	 
	    
    printf("\nN1: %d", num);  
    printf("\nN2: %03d", nFinal);
    
    
    
    return 0; 
}
    
    

    
    

