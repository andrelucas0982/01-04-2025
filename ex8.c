#include <stdio.h>

int Testa_Par(int A){
	
	if(A % 2 == 0){
		return 1;
	} else {
		return 0;
	}
}


int main(){
	
	int N1 = Testa_Par(1);
	int N2 = Testa_Par(2);
	int N3 = Testa_Par(3);
	int N4 = Testa_Par(4);
	
	printf("1 e par? %d\n", N1);
	printf("2 e par? %d\n", N2);
	printf("3 e par? %d\n", N3);
	printf("4 e par? %d\n", N4);
	
	return 0;
} 
