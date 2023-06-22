#include <stdlib.h>
#include <stdio.h>

int main (){
	int ini, n1, n2, res;
	char op;
	scanf("%d", &ini);
	scanf("%d %c %d", &n1, &op, &n2);
	if(op == '+'){
		res = (n1+n2);
	}else{
		if(op == '*'){
			res = (n1 * n2);
		}
	}
	
	if(res <= ini){
		printf("OK\n");
	}else{
		printf("OVERFLOW\n");
	}
}

