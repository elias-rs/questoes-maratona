#include <stdlib.h>
#include <stdio.h>

int main (){
	int ent = 0, n = 0, soma = 0;
	
	scanf("%d", &ent);
	if(ent > 0 && ent <=50){
		for (int i=0; i<ent; i++){
			scanf("%d",&n);
			if(n<=5000){
				soma += n;
			}
		}
	}
	
	
	printf("%d\n", soma);
}
