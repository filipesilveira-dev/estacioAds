#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numeroTab, i;
	
	printf("Digite um n�mero para calcularmos a tabuada: ");
	scanf("%d", &numeroTab);
	
	for (i = 0; i <= 10; i++){
		printf("%d X %d = %d\n", i, numeroTab, i*numeroTab);
		 
	}
	
	int numero;
	
	do{
		printf("Digite um n�mero par para sair do programa: ");
		scanf("%d", &numero);
		
		if(numero % 2 == 0){
			printf("\n%d � par\n", numero);
		} else {
			printf("\n%d � �mpar\n", numero);
		}
	//permanecer� em loop enquanto o n�mero se mostrar �mpar
	} while (numero % 2 != 0);
}
