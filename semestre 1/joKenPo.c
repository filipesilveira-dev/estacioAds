#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"
#include <stdlib.h>
#include <time.h>

int main (){
	setlocale(LC_ALL, "");
	
	int escolhaJogador, escolhaComputador;
	srand(time(0));
	
	printf("*** Jogo de Jokenp� ***\n");
	printf("Escolha uma op��o: \n");
	printf("1 - Pedra\n");
	printf("2 - Papel\n");
	printf("3 - Tesoura\n");
	printf("Escolha: ");
	scanf("%d", &escolhaJogador);
	
	//a escolha do computador ser� o resto da divis�o por 3 (0, 1 ou 2). Por�m com o "+1", passa a ser 1, 2 ou 3
	escolhaComputador = rand() % 3 + 1;
	
	switch(escolhaJogador){
		case 1:
			printf("(Jogador) Pedra -");
			break;
		case 2:
			printf("(Jogador) Papel -");
			break;
		case 3:
			printf("(Jogador) Tesoura -");
			break;
		default:
			printf("Op��o inv�lida\n");
			break;
	}
	
		switch(escolhaComputador){
		case 1:
			printf(" Pedra (Computador)\n\n");
			break;
		case 2:
			printf(" Papel (Computador)\n\n");
			break;
		case 3:
			printf(" Tesoura (Computador)\n\n");
			break;
	}
	
	if(escolhaComputador == escolhaJogador){
		printf("### Jogo empatou! ###\n");
	} else if ((escolhaJogador == 1) && (escolhaComputador == 3) || (escolhaJogador == 2) && (escolhaComputador == 1) || (escolhaJogador == 3) && (escolhaComputador == 2)){
				printf("### Parab�ns!! Voc� ganhou!! ###");
		} else {
			printf("### Voc� perdeu :( ###");
		}
		
	
	return 0;
}
