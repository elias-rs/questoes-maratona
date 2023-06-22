#include <stdlib.h>
#include <stdio.h>

int main (){
	int n = 0;
	while(scanf("%d",&n) != EOF){
		int i, j, mat[n][n];
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if (i + j == n -1){
					mat[i][j] = 2;
				}else{
					if (i == j){
						mat[i][j] = 1;
					}else{
						mat[i][j] = 3;
					}
				}
			}
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				printf("%d", mat[i][j]);
			}
			printf("\n");
		}
		
	}
}

