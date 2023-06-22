#include <stdio.h>
#include <math.h>


int main(){
    long long int n, n2, auxa, auxb, soma;
    while(scanf("%lld%lld", &n,&n2) != EOF){
    	auxa = 1;
    	auxb = 1;
    	for(int i = n; i > 0; --i){
    		auxa *= n;
    		n--;
		}
		for(int i = n2; i > 0; --i){
    		auxb *= n2;
    		n2--;
		}
		printf("%lld\n", (auxa+auxb));
	}
}
