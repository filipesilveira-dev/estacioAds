#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"

int main(){
	//vari[avel contadora para a peça torre
	int k = 0;
	
	//antes do laço de repetição é impressa a mensagem (para não repetir todas as vezes)
	printf("A torre anda: \n");
		//equanto a condicional (k<5) for verdadeira, o código se repetirá
		while(k < 5){
		//a cada repetição do código, será impressa a mensagem
		printf("Direita\n");
		//incremento da variável contadore. A cada repetição, o valor de k aumenta 1
		k++;
	}
	
	//vari[avel contadora para a peça bispo
	int j = 0;
	
	//antes do laço de repetição é impressa a mensagem (para não repetir todas as vezes)
	printf("\nO bispo anda: \n");
	//no caso do "do", o código será executado pelo menos uma vez
	do{
		//a cada repetição do código, será impressa a mensagem
		printf("cima, direita\n");
		//incremento da variável contadore. A cada repetição, o valor de j aumenta 1
		j++;
	} while (j < 5);
	
	//antes do laço de repetição é impressa a mensagem (para não repetir todas as vezes)
	printf("\nA rainha anda: \n");
	
	//no caso de for, a variável contadora, a condicional e o incremento são declarados dentro dos parênteses
	for (int i = 0; i < 8; i++){
		////a cada repetição do código, será impressa a mensagem
		printf("Esquerda\n");
	}
	
		//antes do laço de repetição é impressa a mensagem (para não repetir todas as vezes)
	printf("\nO cavalo anda: \n");
	
	int l = 0;
	
	do{
		for(int m = 0; m < 2; m++){
			printf("baixo\n");
		}
		//a cada repetição do código, será impressa a mensagem
		printf("Esquerda\n");
		//incremento da variável contadore. A cada repetição, o valor de j aumenta 1
		l++;
	} while (l < 1);
}
