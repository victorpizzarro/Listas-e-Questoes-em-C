#include <stdio.h>
#include <stdlib.h>



int main() {
	int a1, r, n;
	
printf("Entre com a1: ");
scanf("%d",&a1);

printf("Entre com a razao (r): ");
scanf("%d",&r);

printf("Ate qual numero quer exibir a PA: ");
scanf("%d",&n);

for(int i=1; i<=n; i++){
		
	printf("%d ", a1);
	a1 += r;
}
	
	return 0;
}