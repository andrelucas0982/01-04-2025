#include <stdio.h>

int main(){
	
	int A,B,C,D;
	
	puts("Digite 4 numeros: ");
	scanf("%d %d %d %d", &A,&B,&C,&D);
	
	for(int i = 1; i <= A; i++){
		
		if(i == A){
			printf("*\n");
		} else 
			printf("*");
	}
	
	for(int i = 1; i <= B; i++){
		
		if(i == B){
			printf("*\n");
		} else 
			printf("*");
	}
	
	for(int i = 1; i <= C; i++){
		
		if(i == C){
			printf("*\n");
		} else 
			printf("*");
	}
	
	for(int i = 1; i <= D; i++){
		
		if(i == D){
			printf("*\n");
		} else 
			printf("*");
	}
	
	return 0;
}
