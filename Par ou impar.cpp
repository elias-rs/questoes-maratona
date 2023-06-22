#include <stdlib.h>
#include <stdio.h>

int main (){
	
	int jp, ji, np, soma=0, resp=0, resi=0, ntest=1;
	char j1[11], j2[11];
	
	scanf("%d", &np);
	while(np != 0){
		scanf("%s", &j1);
		fflush(stdin);
		scanf("%s", &j2);
		fflush(stdin);
		for(int i=0;i<np;i++){
			scanf("\n%d %d", &jp, &ji);
			if(i == 0){
				printf("Teste %d\n", ntest);
			}
			if(jp <=5 && jp >= 0 && ji <=5 && ji >= 0){
				soma = (jp+ji);	
				if((soma%2)==0){
					printf("%s\n", j1);
				}else{
					printf("%s\n", j2);
				}
			}
		}
		scanf("%d", &np);
		ntest++;
	}
}
