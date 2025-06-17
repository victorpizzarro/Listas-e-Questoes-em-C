/*

Questão 2 - Lista 8

Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.

 Para converter de Celsius para Fahrenheit, utiliza-se a fórmula: °F = (°C * 9/5) + 32. 

*/




#include <stdio.h>
#include <stdlib.h>

float fahrenheit(float tempC);


int main(){
	float tempC;
	
	printf("\nEntre com a temperatura em Graus Celcius: ");
	scanf("%f",&tempC);
			
	
	printf("A temperatura %.1f Celcius em Fahrenheit e: %.1f", tempC, fahrenheit(tempC));
	
	
	return 0;
}


// Conversor de graus
float fahrenheit(float tempC) {
	
			
	return (tempC * 1.8) + 32;
}