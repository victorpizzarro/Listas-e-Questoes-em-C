#include <stdio.h>
#include <stdlib.h>



void main(){


int d1, m1, a1, d2, m2, a2;

printf("\nInforme a primeira data (dia mes ano): ");
scanf("%d %d %d", &d1, &m1, &a1);

printf("\nInforme a segunda data no formato (dia mes ano): ");
scanf("%d %d %d", &d2, &m2, &a2);


if (a1 > a2){
	printf("\nA data %d/%d/%d ela mais recente.", d1, m1, a1);
		
}
		else{
		if(a1 < a2){
			printf("\nA data %d/%d/%d e a mais recente.", d2, m2, a2);
		}
			else{
				if (m1 > m2){
					printf("\nA data %d/%d/%d e a mais recente.", d1, m1, a1);
				}
					else{
						if(m1 < m2){
							printf("\nA data %d/%d/%d e a mais recente.", d2, m2, a2);
							
						}
							else{
								if(d1 >= d2){
									printf("\nA data %d/%d/%d e a mais recente.", d1, m1, a1);
								}
								else{
									printf("\nA data %d/%d/%d e a mais recente.", d2, m2, a2);
								}
							}
					}
			}
	}

	
}