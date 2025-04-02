#include <stdio.h>

int main(){
	
	int Numero, tentativas = 3;
	
	printf("Insira um numero. Tentativas restantes: %d\n", tentativas);
	
	do{
		scanf("%d", &Numero);
		
		if(Numero == 7){
			puts("Voce ganhou");
			break;
		} else {
			
			tentativas--;
			
			printf("Numero errado. Tentativas restantes: %d\n", tentativas);
			
	}
		
	} while (tentativas > 0);
	
	puts("Fim de Jogo!");
	
	return 0;
}
