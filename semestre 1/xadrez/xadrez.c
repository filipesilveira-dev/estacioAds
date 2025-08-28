#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"

void movimentoTorre(int n){
	//condicional para o valor da vari�vel "n" passada como par�mento em int main()
	if(n > 0){
	//mensagem mostrada caso a condicional seja verdadeira
	printf("Direita\n");
	//recursividade: a fun��o � chamada novamente (simulando um loop), por�m o par�mentro � decrescido. Enquanto "n > 0" for verdadeira,
	//o c�digo continuar� a ser executado. Dessa forma, sendo n == 5, o c�digo ser� executado 5 vezes (a mensagem ser� mostrada 5 vezes)
	movimentoTorre(n-1);

	}
}

void movimentoBispo(int n){
	//condicional para o valor da vari�vel "n" passada como par�mento em int main()
	if(n > 0){
		//loop externo controlando o movimento vertical. Enquanto int c for menor que "1" o c�digo seguir� sendo executado em loop (no caso s� ser� executado 
		//uma vez). Aninhado a este loop est� outro (que tamb�m ser� executado apenas uma vez) e dentro deste temos a recursividade, chamando toda a fun��o
		//novamente, mas diminuinda "1" do par�metro inicial passado
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
	//mensagem que ser� mostrada enquanto n > 0 for verdade
	printf("Esquerda\n");
	//recursividade: a fun��o � chamada novamente nela mesma, mas diminuindo "1" do valor de par�metro "n" inicial. O c�digo se repetir� at� a condicional
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
			//at� a condicional de parada do loop se mostrar verdadeira, o c�digo contunua com a recursividade
			movimentoCavalo(n-1);
		}
	}	
}

int main(){
	setlocale(LC_ALL, "");
	
	//declara��o das vari�veis de cada pe�a para movimenta��o (movimenta��o definida diretamente no c�digo)
	int j = 5;	//bispo
	int k = 5;	//torre
	int l = 3;	//cavalo
	int i = 8;	//rainha
	//armazena a escolha do usu�rio
	int escolha;
	
	//menu de apresenta��o
	printf("Bem-vindo ao movimentador de pe�as de xadrez!\n\n");
	//escolha de pe�a a ser movimentada
	printf("Selecione a pe�a que deseja movimentar digitando seu n�mero equivalente: \n");
	printf("1 - Torre\n");
	printf("2 - Bispo\n");
	printf("3 - Rainha\n");
	printf("4 - Cavalo\n");
	printf("N�mero da pe�a: ");
	//op��o do usu�rio salva na vari�vel "escolha"
	scanf("%d", &escolha);
	
	//condicional com base no valor de "int escolha"
	switch (escolha){
		//seleciona a torre e chama o procedimento de andar com a pe�a
		case 1:
			printf("\nA Torre anda: \n");
			movimentoTorre(k);
			break;
		//seleciona o bispo e chama o procedimento de andar com a pe�a
		case 2:
			printf("\nO Bispo anda: \n");
			movimentoBispo(j);
			break;
		//seleciona a rainha e chama o procedimento de andar com a pe�a
		case 3:
			printf("\nA Rainha anda: \n");
			movimentoRainha(i);
			break;
		//seleciona o cavalo e chama o procedimento de andar com a pe�a
		case 4:
			printf("\nO Cavalo anda: \n");
			movimentoCavalo(l);
		break;
		//mensagem em caso de n�mero diferente das op��es
		default:
			printf("Digite um n�mero v�lido");
		break;
	}	
	
	return 0;
}
