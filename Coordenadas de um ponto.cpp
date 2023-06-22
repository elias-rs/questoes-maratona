#include <stdlib.h>
#include <stdio.h>

void coordenada(double x, double y){
	
	if(x > 0.0 && y > 0.0){
		printf("Q1\n");
	}else{
		if(x < 0.0 && y > 0.0){
			printf("Q2\n");
		}else{
			if(x < 0.0 && y < 0.0){
				printf("Q3\n");
			}else{
				if(x > 0.0 && y < 0.0){
					printf("Q4\n");
				}else{
					if(x == 0.0 && y == 0.0){
						printf("Origem\n");
					}else{
						if(x != 0.0 && y == 0.0){
							printf("Eixo X\n");
						}else{
							if(y != 0.0 && x == 0.0){
								printf("Eixo Y\n");
							}
						}
					}	
				}
			}
		}
	}
}

int main (){
	
	double x, y;
	scanf("%lf %lf", &x, &y);
	coordenada(x,y);
	
}

