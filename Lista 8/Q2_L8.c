/*

Questão 2 - Lista 8

Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.

 Para converter de Celsius para Fahrenheit, utiliza-se a fórmula: °F = (°C * 9/5) + 32. 

*/




#include <stdio.h>
#include <stdlib.h>

void temperatura(float tempC) {
	float tempF;
	
	tempF = (tempC * 9/5) + 32;
	
	printf("\n\nA temperatura em fahrenheit: %.2f", tempF);
}


int main(){
	float tempC;
	
	printf("\nEntre com a temperatura em Graus Celcius: ");
	scanf("%f",&tempC);
			
	temperatura(tempC);
	
	return 0;
}
