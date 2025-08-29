#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"

int main (){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que ser� utilizada a localiza��o padr�so do sistema operacional
	
	//cria��o e declara��o da matriz s� com "�gua"
	int tabuleiro [10] [10] = {
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0}
	};
	//cria��o dos vetores "navio" alterando valores da matriz para representar os navios na sa�da para o usu�rio
	int navio1[3] = {
	(tabuleiro[0][0] += 3, 3),
	(tabuleiro[0][1] += 3, 3),
	(tabuleiro[0][2] += 3, 3)
	};
	int navio2[3] = {
	(tabuleiro[0][0] += 3, 3),
	(tabuleiro[1][4] += 3, 3),
	(tabuleiro[2][4] += 3, 3)
	};
	
	
	printf("*** Tabuleiro ***\n\n");
	//loop externo controla "i" (as linhas)
	for(int i = 0; i < 10; i++){
		//loop interno controla "j"(as colunas)
		for(int j = 0; j < 10; j++){
			//ser� mostrada todas as colunas (de 0 a 9) at� dar prosseguimento ao loop externo
			printf("%d ", tabuleiro[i][j]);
		}
		//ap�s mostrar todas as colunas, ou seja, at� j < 10, ent�o o loop externo segue seu c�digo e salta uma linha (tornando mais vis�vel ao usu�rio)
		printf("\n");
	}
	
		for(int x = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			if (navio1[x] == 6 || navio2[y] == 6){
				printf("H� sobreposi��o!");
				break;
			} else {
				printf("N�o h� sobreposi��o\n\n");
			}
		}		
	}
}
