#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "");
	int numeroJogador, numeroComputador, resultado;
	char tipoDeComparacao[10];
	//gera n�mero aleat�rio utilizando o hor�rio no qual o programa foi gerado
	srand(time(0));
	//recebe o n�mero aleat�rio. O n�mero aleat�rio do computador vir� de um intervalo de 1 a 100
	numeroComputador = rand () % 100 + 1;
	
	//In�cio do jogo
	printf("Bem-vindo ao jogo Maior, Menor ou Igual\n");
	printf("Foi gerado um n�mero aleat�rio pelo computador\n")
	printf("Voc� deve escolher um n�mero e dizer qual compara��o quer fazer: Maior, Menor ou Igual\n");
	printf("Ao final, saberemos se voc� conseguiu vencer a m�quina\n");
	printf("Escolha seu n�mero: ");
	scanf("%d", &numeroJogador);
	printf("\nEscolha qual compara��o deseja fazer: ");
	scanf("%s", &tipoDeComparacao);
}
