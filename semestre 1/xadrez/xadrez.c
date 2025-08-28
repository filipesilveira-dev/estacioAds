#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"

void movimentoTorre(int n){
	//condicional para o valor da variável "n" passada como parâmento em int main()
	if(n > 0){
	//mensagem mostrada caso a condicional seja verdadeira
	printf("Direita\n");
	//recursividade: a função é chamada novamente (simulando um loop), porém o parâmentro é decrescido. Enquanto "n > 0" for verdadeira,
	//o código continuará a ser executado. Dessa forma, sendo n == 5, o código será executado 5 vezes (a mensagem será mostrada 5 vezes)
	movimentoTorre(n-1);

	}
}

void movimentoBispo(int n){
	//condicional para o valor da variável "n" passada como parâmento em int main()
	if(n > 0){
		//loop externo controlando o movimento vertical. Enquanto int c for menor que "1" o código seguirá sendo executado em loop (no caso só será executado 
		//uma vez). Aninhado a este loop está outro (que também será executado apenas uma vez) e dentro deste temos a recursividade, chamando toda a função
		//novamente, mas diminuinda "1" do parâmetro inicial passado
		for(int c = 0; c < 1; c++){
			printf("cima, ");
			//loop interno controlando o movimento horizontal
			for (c = 0; c < 1; c++){
				printf("direita\n");
				//recursividade	
				movimentoBispo(n-1);
			}
		}
	}
}

void movimentoRainha(int n){
	//condicional a ser satisfeita
	if(n > 0){
	//mensagem que será mostrada enquanto n > 0 for verdade
	printf("Esquerda\n");
	//recursividade: a função é chamada novamente nela mesma, mas diminuindo "1" do valor de parâmetro "n" inicial. O código se repetirá até a condicional
	//ser satisfeita (se mostrar falsa)
	movimentoRainha(n-1);
	}
}

void movimentoCavalo(int n){
	//condicional a ser satisfeita
	if(n > 0){
		//loop
		for(int c = 0; c < 1; c++){
			printf("Cima\n");
			//condicional de parada dentro do loop: quando n for igual a 2, o loop se encerra, impedindo que uma nova mensagem seja mostrada
			if (n == 2){
				printf("Direita\n");
				break;
			}
			//até a condicional de parada do loop se mostrar verdadeira, o código contunua com a recursividade
			movimentoCavalo(n-1);
		}
	}	
}

int main(){
	setlocale(LC_ALL, "");
	
	//declaração das variáveis de cada peça para movimentação (movimentação definida diretamente no código)
	int j = 5;	//bispo
	int k = 5;	//torre
	int l = 3;	//cavalo
	int i = 8;	//rainha
	//armazena a escolha do usuário
	int escolha;
	
	//menu de apresentação
	printf("Bem-vindo ao movimentador de peças de xadrez!\n\n");
	//escolha de peça a ser movimentada
	printf("Selecione a peça que deseja movimentar digitando seu número equivalente: \n");
	printf("1 - Torre\n");
	printf("2 - Bispo\n");
	printf("3 - Rainha\n");
	printf("4 - Cavalo\n");
	printf("Número da peça: ");
	//opção do usuário salva na variável "escolha"
	scanf("%d", &escolha);
	
	//condicional com base no valor de "int escolha"
	switch (escolha){
		//seleciona a torre e chama o procedimento de andar com a peça
		case 1:
			printf("\nA Torre anda: \n");
			movimentoTorre(k);
			break;
		//seleciona o bispo e chama o procedimento de andar com a peça
		case 2:
			printf("\nO Bispo anda: \n");
			movimentoBispo(j);
			break;
		//seleciona a rainha e chama o procedimento de andar com a peça
		case 3:
			printf("\nA Rainha anda: \n");
			movimentoRainha(i);
			break;
		//seleciona o cavalo e chama o procedimento de andar com a peça
		case 4:
			printf("\nO Cavalo anda: \n");
			movimentoCavalo(l);
		break;
		//mensagem em caso de número diferente das opções
		default:
			printf("Digite um número válido");
		break;
	}	
	
	return 0;
}
