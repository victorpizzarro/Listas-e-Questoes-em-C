#include <stdio.h>
#include <stdlib.h>



int main() {
	int aux=2;
	int n;
	
	printf("Entre com numero: ");
	scanf("%d",&n);
	
for(int i=1; i<=n; i+i){
	
	
	printf("%d ",i);
	i*= aux;
	
}	
	
	
	
	
	
	
	
	return 0;
}