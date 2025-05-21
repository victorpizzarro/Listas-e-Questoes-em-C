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
    
    

    
    

