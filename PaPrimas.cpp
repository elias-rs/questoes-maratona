#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (){
	char pala[100];
	int soma, tam, j, res, cont;
	while(scanf("%s", &pala) != EOF){
		soma = 0;
		//tam = strlen(pala);
		for(int i = 0; i < pala[i] != '\0'; i++){
			if(pala[i] >= 97 && pala [i] <= 122){
				j = ((int)pala[i] - 95);
				soma += j;
			}	
			if(pala[i] >= 64 && pala[i] <= 90){
				j = ((int)pala[i] - 38);
				soma += j;
			}
		
		}
		cont = 0;
		for (int i = 2; i <= sqrt(soma); i++) {
			res = soma % i;
			if (res == 0) {
				cont++;
			}
		}
		if (cont >= 2){
			printf("It is not a prime word.\n");         
		}else{
			printf("It is a prime word.\n");
		} 
	}
}

