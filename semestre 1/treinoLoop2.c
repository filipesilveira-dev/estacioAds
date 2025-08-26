#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numeroTab, i;
	
	printf("Digite um número para calcularmos a tabuada: ");
	scanf("%d", &numeroTab);
	
	for (i = 0; i <= 10; i++){
		printf("%d X %d = %d\n", i, numeroTab, i*numeroTab);
		 
	}
	
	int numero;
	
	do{
		printf("Digite um número par para sair do programa: ");
		scanf("%d", &numero);
		
		if(numero % 2 == 0){
			printf("\n%d é par\n", numero);
		} else {
			printf("\n%d é ímpar\n", numero);
		}
	//permanecerá em loop enquanto o número se mostrar ímpar
	} while (numero % 2 != 0);
}
