#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (){
	int n, r, x, i, vet[10000];
	while(scanf("%d %d", &n, &r) != EOF){
		for (i = 1; i <= r; i++){
			scanf("%d", &x);
			vet[x] = 1;
		}
		
		if (n == r){
			printf("*");
		}else{
			for(i = 1; i <= n; i++){
				if (vet[i] == 0){
					printf("%d", i);
				}
			}
		}
		printf("\n");
		memset(vet, 0, sizeof(vet));
	}
}

