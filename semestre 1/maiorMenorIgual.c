#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "");
	int numeroJogador, numeroComputador, resultado;
	char tipoDeComparacao[10];
	//gera número aleatório utilizando o horário no qual o programa foi gerado
	srand(time(0));
	//recebe o número aleatório. O número aleatório do computador virá de um intervalo de 1 a 100
	numeroComputador = rand () % 100 + 1;
	
	//Início do jogo
	printf("Bem-vindo ao jogo Maior, Menor ou Igual\n");
	printf("Foi gerado um número aleatório pelo computador\n")
	printf("Você deve escolher um número e dizer qual comparação quer fazer: Maior, Menor ou Igual\n");
	printf("Ao final, saberemos se vocë conseguiu vencer a máquina\n");
	printf("Escolha seu número: ");
	scanf("%d", &numeroJogador);
	printf("\nEscolha qual comparação deseja fazer: ");
	scanf("%s", &tipoDeComparacao);
}
