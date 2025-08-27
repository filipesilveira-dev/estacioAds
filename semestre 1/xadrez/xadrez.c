#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"

int main(){
	//vari[avel contadora para a pe�a torre
	int k = 0;
	
	//antes do la�o de repeti��o � impressa a mensagem (para n�o repetir todas as vezes)
	printf("A Torre anda: \n");
		//equanto a condicional (k<5) for verdadeira, o c�digo se repetir�
		while(k < 5){
		//a cada repeti��o do c�digo, ser� impressa a mensagem
		printf("Direita\n");
		//incremento da vari�vel contadore. A cada repeti��o, o valor de k aumenta 1
		k++;
	}
	
	//vari[avel contadora para a pe�a bispo
	int j = 0;
	
	//antes do la�o de repeti��o � impressa a mensagem (para n�o repetir todas as vezes)
	printf("\nO Bispo anda: \n");
	//no caso do "do", o c�digo ser� executado pelo menos uma vez
	do{
		//a cada repeti��o do c�digo, ser� impressa a mensagem
		printf("cima, direita\n");
		//incremento da vari�vel contadore. A cada repeti��o, o valor de j aumenta 1
		j++;
	} while (j < 5);
	
	//antes do la�o de repeti��o � impressa a mensagem (para n�o repetir todas as vezes)
	printf("\nA Rainha anda: \n");
	
	//no caso de for, a vari�vel contadora, a condicional e o incremento s�o declarados dentro dos par�nteses
	for (int i = 0; i < 8; i++){
		////a cada repeti��o do c�digo, ser� impressa a mensagem
		printf("Esquerda\n");
	}
	
		//antes do la�o de repeti��o � impressa a mensagem (para n�o repetir todas as vezes)
	printf("\nO Cavalo anda: \n");
	
	//vari�vel utilizada no loop externo
	int l = 0;
	
	//como o la�o "do", garanto uma execu��o do c�digo antes da condicional
	do{
		//loop interno ser� executado duas vezes
		for(int m = 0; m < 2; m++){
			//ser� mostrada duas vezes "baixo" antes de finalizar o loop interno
			printf("baixo\n");
		}
		//ap�s sair do la�o interno, ser� impressa esta mensagem pelo la�o externo. 
		printf("Esquerda\n");
		//incremento da vari�vel contadora. A cada repeti��o, o valor de l aumenta 1
		l++;
	//condi��o para acabar o loop externo. Ou seja, o loop externo ser� executado apenas uma vez
	} while (l < 1);
}
