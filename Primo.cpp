#include <stdlib.h>
#include <stdio.h>

int main (){
	int n, res=0;
	scanf("%d", &n);
	
	for (int i = 2; i <= n / 2; i++) {
	    if (n % i == 0) {
	       res++;
	       break;
	    }
	}
	
	if(res==0){
		printf("sim\n");
	}else{
		printf("nao\n");
	}
}
