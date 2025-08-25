#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "");
	int opcao;
	int numeroSecreto, palpite;
	
	printf("Menu Principal\n");
	printf("1 - Iniciar Jogo\n");
	printf("2 - Ver Regras\n");
	printf("3 - Sair\n");
	printf("Escolha uma op��o: ");
	scanf("%d", &opcao);
	
	switch (opcao){
		
		case 1:
			/*code*/
			//inicia a gera��o de n�mero aleat�rio. O time vincula o n�mero a ser gerado ao hor�rio no qual o programa est� sendo rodado
			srand(time(0));
			//o n�mero a ser gerado � muito grande. Esta linha limita o intervalo utilizado pelo randomizador, no caso de 0 at� 9
			numeroSecreto = rand () % 10;
			printf("Digite um n�mero de 0 a 9: ");
			scanf("%d", &palpite);
			if(numeroSecreto == palpite){
				printf("Voc� acertou!\n");
				printf("N�mero secreto %d\n", numeroSecreto);
			} else {
				printf("Voc� errou!\n");
				printf("N�mero secreto %d\n", numeroSecreto);
			}
		break;
		case 2:
			/*code regras*/
			printf("A explica��o das regras\n")
		break;
		case 3:
			/*code*/
			printf("Saindo do jogo!\n")
		break;
		default:
			printf("Op��o Inv�lida");
		break;
	}
}
