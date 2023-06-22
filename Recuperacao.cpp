#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
	int n, i, j, k, vet[100], soma, res, a;
	k = 1;
	while(scanf("%i", &n) != EOF){
		if(n != 0){
			for(i = 0; i < n; i++){
				scanf("%i",&vet[i]);
			}
			a = 0;
			for(i = 0; i < n; i++){
				soma = 0;
				for(j = 0; j < i; j++){
					soma = soma + vet[j];
				}
				if(soma == vet[j]){
					res = vet[i];
					a = 7;
					break;
				}	
			}
			if (a == 7){
	        	printf("Instancia %i\n", k);
	        	printf("%i\n\n", res);
	        }else{
	            printf("Instancia %i\n", k);
	            printf("nao achei\n\n");       
	    	}
		}else{
            printf("Instancia %i\n", k);
            printf("0\n\n");                 
        }
        k++;
	}
	
}

