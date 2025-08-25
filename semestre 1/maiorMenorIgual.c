#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "");
	int numeroJogador, numeroComputador, resultado;
	char tipoDeComparacao;
	//gera número aleatório utilizando o horário no qual o programa foi gerado
	srand(time(0));
	//recebe o número aleatório. O número aleatório do computador virá de um intervalo de 1 a 100
	numeroComputador = rand () % 100 + 1;
	
	//Início do jogo
	printf("Bem-vindo ao jogo Maior, Menor ou Igual\n\n");
	printf("Foi gerado um número aleatório pelo computador\n");
	printf("Você deve escolher um número e dizer qual comparação quer fazer: Maior, Menor ou Igual\n");
	printf("Ao final, saberemos se vocë conseguiu vencer a máquina\n\n");
	
	system("pause");
	system("cls");
	
	printf("Escolha um número de 1 a 100: ");
	scanf("%d", &numeroJogador);
	printf("\nEscolha qual comparação deseja fazer: \n");
	printf("M - Maior\nN - Menor\nI - Igual\n\n");
	printf("Comparação escolhida: ");
	scanf(" %c", &tipoDeComparacao); //espaço antes do %c para evitar que considere o enter como um caracter
	
	//printf("o número do jogador é %d, o do computador é %d e a comparação é %c", numeroJogador, numeroComputador, tipoDeComparacao);
	
	switch (tipoDeComparacao){
		case 'M':
		case 'm':
			printf("\nVocê escolheu a opção Maior\n");
			resultado = numeroJogador > numeroComputador ? 1 : 0;
			printf("O número do computador é %d e o número do jogador é %d\n", numeroComputador, numeroJogador);
			break;
		case 'N':
		case 'n':
			printf("\nVocê escolheu a opção Menor\n");
			resultado = numeroJogador < numeroComputador ? 1 : 0;
			printf("O número do computador é %d e o número do jogador é %d\n", numeroComputador, numeroJogador);
			break;
		case 'I':
		case 'i':
			printf("\nVocê escolheu a opção Igual\n");
			resultado = numeroJogador == numeroComputador ? 1 : 0;
			printf("O número do computador é %d e o número do jogador é %d\n", numeroComputador, numeroJogador);
			break;
		default:
			printf("\nDigite uma opção válida\n");
			break;
	}
	
	if(resultado == 1){
		printf("\nParabéns!! Você venceu!");
	} else {
		printf("\nVocê perdeu");
	}
}
