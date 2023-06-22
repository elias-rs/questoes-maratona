#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
	int n, quad;
	scanf("%d", &n);
	if(n<=10000){
		quad = pow(n,2);
		printf("%d\n", quad);
	}
	
	return 0;
}
