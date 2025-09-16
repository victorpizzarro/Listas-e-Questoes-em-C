#include <stdio.h>
#include <stdlib.h>



int main() {
	 int N, Y;
	
	printf("Entre com um numero N: ");
	scanf("%d",&N);
	
	printf("Entre com um numero Y: ");
	scanf("%d",&Y);
	
	for (int i = 1; i < N; i++){
		if (i % Y == 0){
			printf("%d ",i);
		}
	}
	
	return 0;
}