#include <stdio.h>

int main(){
	
	int A, Soma = 0;
	
	do{
		puts("Digite o numero do dado: ");
		scanf("%d", &A);
		
		
		
		if(A % 2 == 1){
			break;
		} else 
		Soma += A;
		
	} while(1);
	
	printf("A soma dos numeros pares apresentado e igual a: %d", Soma);
	
	return 0;
}
