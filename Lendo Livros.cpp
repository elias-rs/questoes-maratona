#include <stdlib.h>
#include <stdio.h>

int main (){
	int pga, qtd, pgf, res, bol = 1;
	scanf("%d", &pga);
	while(bol == 1){
		scanf("%d%d", &qtd, &pgf);
		res = (pga * qtd * pgf) / (pgf - pga);
		if(res == 1){
			printf("%d pagina\n", res);
		}else{
			printf("%d paginas\n", res);
		}
		scanf("%d", &pga);
		if(pga == 0){
			break;
		}
	}
}

