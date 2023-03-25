#include <stdlib.h>
#include <stdio.h>

int josefo(int n){
	if(n==1){
		return 1;
	}else{
		if(n % 2 == 0){
			return ((2 * josefo(n/2))-1);
		}else{
			return ((2* josefo(n/2))+1);
		}
	}
}

int main (){
	// vai percorrer um circulo de 1 a n
	// em sentido horario
	int n;
	scanf("%d", &n);
	printf("%d", josefo(n));
}
