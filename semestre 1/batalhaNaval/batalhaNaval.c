#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"

int main (){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que será utilizada a localização padrãso do sistema operacional
	
	//criação e declaração da matriz só com "água"
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
	//criação dos vetores "navio" alterando valores da matriz para representar os navios na saída para o usuário
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
			//será mostrada todas as colunas (de 0 a 9) até dar prosseguimento ao loop externo
			printf("%d ", tabuleiro[i][j]);
		}
		//após mostrar todas as colunas, ou seja, até j < 10, então o loop externo segue seu código e salta uma linha (tornando mais visível ao usuário)
		printf("\n");
	}
	
		for(int x = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			if (navio1[x] == 6 || navio2[y] == 6){
				printf("Há sobreposição!");
				break;
			} else {
				printf("Não há sobreposição\n\n");
			}
		}		
	}
}
