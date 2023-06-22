#include <stdlib.h>
#include <stdio.h>

int main (){
	int vet[100], pos=0, maior = 0;
	
	for(int i=0; i<100; i++){
		scanf("%d", &vet[i]);
	}
	for(int i=0;i<100;i++){
		if(vet[i]>maior){
			maior = vet[i];
			pos = i;
		}
	}
	printf("%d\n", maior);
	printf("%d\n", pos+1);
}

