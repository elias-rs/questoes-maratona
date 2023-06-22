#include <stdlib.h>
#include <stdio.h>

int main () {
	int n, aldo, beto, ponaldo, ponbeto, teste = 1;
	
	
	do{
		scanf("%d", &n);
		if (n != 0){
			ponaldo = 0;
			ponbeto = 0;
			for (int i=0; i<n; i++){
				scanf("%d %d", &aldo, &beto);
				ponaldo += aldo;
				ponbeto += beto; 
 			}
			if(ponaldo > ponbeto){
				printf("\nTeste %d\nAldo\n", teste);
			}else{
				printf("\nTeste %d\nBeto\n", teste);
			}
			teste++;
		}	
		
		
	}while(n != 0);
}
