#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"
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
	printf("Escolha uma opção: ");
	scanf("%d", &opcao);
	
	switch (opcao){
		
		case 1:
			/*code*/
			//inicia a geração de número aleatório. O time vincula o número a ser gerado ao horário no qual o programa está sendo rodado
			srand(time(0));
			//o número a ser gerado é muito grande. Esta linha limita o intervalo utilizado pelo randomizador, no caso de 0 até 9
			numeroSecreto = rand () % 10;
			printf("Digite um número de 0 a 9: ");
			scanf("%d", &palpite);
			if(numeroSecreto == palpite){
				printf("Você acertou!\n");
				printf("Número secreto %d\n", numeroSecreto);
			} else {
				printf("Você errou!\n");
				printf("Número secreto %d\n", numeroSecreto);
			}
		break;
		case 2:
			/*code regras*/
			printf("A explicação das regras\n")
		break;
		case 3:
			/*code*/
			printf("Saindo do jogo!\n")
		break;
		default:
			printf("Opção Inválida");
		break;
	}
}
