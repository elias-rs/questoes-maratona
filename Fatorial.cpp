#include <stdlib.h>
#include <stdio.h>

int main (){
	int n, fat = 1;
	
	scanf("%d", &n);
	for(int i=n;n>1;n--){
		fat = fat * (n);
	}
	printf("%d\n", fat);
}
