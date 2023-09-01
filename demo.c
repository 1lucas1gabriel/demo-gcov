#include <stdio.h>

int main(){
	
	int a;
	
	printf("Digite um numero entre 0 e 10: ");
	scanf("%d", &a);
	
	if (a > 5){
		printf("Maior que 5: %d\n", a);
	}
	else if (a < 5){
		printf("Menor que 5: %d\n", a);
	}
	else{
		printf("Igual a 5: %d\n", a);
	}
	return 0;
}
