#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"

int main(){
	//vari[avel contadora para a peça torre
	int k = 0;
	
	//antes do laço de repetição é impressa a mensagem (para não repetir todas as vezes)
	printf("A Torre anda: \n");
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
	printf("\nO Bispo anda: \n");
	//no caso do "do", o código será executado pelo menos uma vez
	do{
		//a cada repetição do código, será impressa a mensagem
		printf("cima, direita\n");
		//incremento da variável contadore. A cada repetição, o valor de j aumenta 1
		j++;
	} while (j < 5);
	
	//antes do laço de repetição é impressa a mensagem (para não repetir todas as vezes)
	printf("\nA Rainha anda: \n");
	
	//no caso de for, a variável contadora, a condicional e o incremento são declarados dentro dos parênteses
	for (int i = 0; i < 8; i++){
		////a cada repetição do código, será impressa a mensagem
		printf("Esquerda\n");
	}
	
		//antes do laço de repetição é impressa a mensagem (para não repetir todas as vezes)
	printf("\nO Cavalo anda: \n");
	
	//variável utilizada no loop externo
	int l = 0;
	
	//como o laço "do", garanto uma execução do código antes da condicional
	do{
		//loop interno será executado duas vezes
		for(int m = 0; m < 2; m++){
			//será mostrada duas vezes "baixo" antes de finalizar o loop interno
			printf("baixo\n");
		}
		//após sair do laço interno, será impressa esta mensagem pelo laço externo. 
		printf("Esquerda\n");
		//incremento da variável contadora. A cada repetição, o valor de l aumenta 1
		l++;
	//condição para acabar o loop externo. Ou seja, o loop externo será executado apenas uma vez
	} while (l < 1);
}
