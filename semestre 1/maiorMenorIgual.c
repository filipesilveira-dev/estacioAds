#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "");
	int numeroJogador, numeroComputador, resultado;
	char tipoDeComparacao;
	//gera n�mero aleat�rio utilizando o hor�rio no qual o programa foi gerado
	srand(time(0));
	//recebe o n�mero aleat�rio. O n�mero aleat�rio do computador vir� de um intervalo de 1 a 100
	numeroComputador = rand () % 100 + 1;
	
	//In�cio do jogo
	printf("Bem-vindo ao jogo Maior, Menor ou Igual\n\n");
	printf("Foi gerado um n�mero aleat�rio pelo computador\n");
	printf("Voc� deve escolher um n�mero e dizer qual compara��o quer fazer: Maior, Menor ou Igual\n");
	printf("Ao final, saberemos se voc� conseguiu vencer a m�quina\n\n");
	
	system("pause");
	system("cls");
	
	printf("Escolha um n�mero de 1 a 100: ");
	scanf("%d", &numeroJogador);
	printf("\nEscolha qual compara��o deseja fazer: \n");
	printf("M - Maior\nN - Menor\nI - Igual\n\n");
	printf("Compara��o escolhida: ");
	scanf(" %c", &tipoDeComparacao); //espa�o antes do %c para evitar que considere o enter como um caracter
	
	//printf("o n�mero do jogador � %d, o do computador � %d e a compara��o � %c", numeroJogador, numeroComputador, tipoDeComparacao);
	
	switch (tipoDeComparacao){
		case 'M':
		case 'm':
			printf("\nVoc� escolheu a op��o Maior\n");
			resultado = numeroJogador > numeroComputador ? 1 : 0;
			printf("O n�mero do computador � %d e o n�mero do jogador � %d\n", numeroComputador, numeroJogador);
			break;
		case 'N':
		case 'n':
			printf("\nVoc� escolheu a op��o Menor\n");
			resultado = numeroJogador < numeroComputador ? 1 : 0;
			printf("O n�mero do computador � %d e o n�mero do jogador � %d\n", numeroComputador, numeroJogador);
			break;
		case 'I':
		case 'i':
			printf("\nVoc� escolheu a op��o Igual\n");
			resultado = numeroJogador == numeroComputador ? 1 : 0;
			printf("O n�mero do computador � %d e o n�mero do jogador � %d\n", numeroComputador, numeroJogador);
			break;
		default:
			printf("\nDigite uma op��o v�lida\n");
			break;
	}
	
	if(resultado == 1){
		printf("\nParab�ns!! Voc� venceu!");
	} else {
		printf("\nVoc� perdeu");
	}
}
