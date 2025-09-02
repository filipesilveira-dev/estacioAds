//declara��o de bibliotecas necess�rias para cira��o e bom funcionamento do c�digo
#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"

//constantes declaradas para utilizar nas matrizes de habilidade/ataque as quais possuem as mesmas dimens�es
#define LINHA 3
#define COLUNA 5

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
	
	//declara��o de matrizes (utilizando as constantes) que representar�o os ataques
	int habilidadeCone[LINHA][COLUNA];
	int habilidadeCruz[LINHA][COLUNA];
	int habilidadeOctaedro[LINHA][COLUNA];
	
	//vetor que mostra a marca��o superior das posi��es
	char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	
	//fun��o que repreenta o ataque em forma de cruz
	int ataqueCruz(){
		//loopr externo controla as linhas
		for (int i =0; i<LINHA; i++){
			//loop interno controlando as colunas
			for (int j =0; j<COLUNA; j++){
			//ponto de in�co do ataque definido como o tabuleiro[0][5]. A partir desse ponto, ser� realizada uma soma de matrizes (tabuleiro e habilidadeCruz)			
			tabuleiro[0 + i][5 + j] += habilidadeCruz [i][j];
			}
		}
		//indica o resultado como verdadeiro
		return 1;
	}
	//fun��o que representa o ataque em forma de cone
	int ataqueCone(){
		//loop externo controla as linhas
		for (int i =0; i<LINHA; i++){
		//loop interno controlando as colunas
			for (int j =0; j<COLUNA; j++){
				//ponto de in�co do ataque definido como o tabuleiro[7][3]. A partir desse ponto, ser� realizada uma soma de matrizes (tabuleiro e 
				//habilidadeCone)			
				tabuleiro[7 + i][3 + j] += habilidadeCone [i][j];
			}
		}
		return 1;
	}
	
	int ataqueOctaedro(){
		
		for (int i =0; i<LINHA; i++){
		//loop interno controlando as colunas
			for (int j =0; j<COLUNA; j++){
				//ponto de in�co do ataque definido como o tabuleiro[3][0]. A partir desse ponto, ser� realizada uma soma de matrizes (tabuleiro e 
				//habilidadeOctaedro)			
				tabuleiro[3 + i][0 + j] += habilidadeOctaedro [i][j];
			}
		}
		return 1;
	}
	
	//fun��o criada para verificar se h� sobreposi��o de navios partindo da premissa de que haver� sobreposi��o em casos que o valor de determinada
	//posi��o seja maior que 3, sugerindo que o valor "3" de um elemento de navio est� sendo colocado na mesmo posi��o de um outro elemento de valor
	//"3" de outro navio.
	
	//obs: o valor foi alterado de "3" para "6" para n�o ficar acusando sobreposi��o sem ter por conta dos valores das matrizes de ataque
	void sobreposicaoNavio(){
	//vari�vel de controle para �nica exibi��o de "Sobreposi��o detectada em: " inicialmente como "0" falso
	int sobreposicaoDetectada = 0;
	
		//la�o externo para controle de linhas
		for (int i = 0; i < 10; i++){
			//la�o interno para controle de colunas
			for (int j = 0; j < 10; j++){
				//condicional caso o valor de determinada posi��o seja maior ou igual a "6", indicando sobreposi��o
				if (tabuleiro[i][j] >= 6){
					//a condicional nega sobreposicaoDetectada (inicialmente "falso"), ou seja, transforma em "verdadeiro", indicando que o trecho
					//de c�digo dentro da condicional deve ser executado
					if (!sobreposicaoDetectada){
						printf("\nSobreposi��o detectada em: \n\n");
						//ao final do c�digo, o novo valor de sobreposicaoDetectada � "1" (verdadeiro), imperdindo que, em uma nova ocorr�ncia
						//de sobreposi��o, a condicional "!sobreposicaoDetectada" seja "verdadeira" e consequentemente executando a mensagem apenas
						//na primeira ocorr�ncia
						sobreposicaoDetectada = 1;
					}	
					//mostra em qual ou quais posi�oes est�o ocorrendo sobreposi��es
					printf("tabuleiro[%d][%d]\n", i, j);	
				} 
			}
		}
	}
	//fun��o criada para mostrar o tabuleiro "zerado" (sem navios e sem ataques)
	void imprimirTabuleiro(){
	printf("*** Tabuleiro Batalha Naval ***\n\n");
	//mostra os itens do vetor linhas para fazer a marca��o superior
	for (int i = 0; i < 10; i++){
		//consicional para inserir na posi��o "0" um espa�o maior que nas outras posi��es (escolha est�tica)
		if (i == 0){
			printf("    %c ", linhas[i]);	
		} else {
			//imprime cada elemento do vetor "linhas", funcionando como uma marca��o literal superior no tabuleiro
			printf("%c ", linhas[i]);
		}	
	}
	//salva uma linha para iniciar a impress�o da matriz "tabuleiro"
	printf("\n");
	
	//loop externo controla "i" (as linhas)
	for(int i = 0; i < 10; i++){
		//condicional para acrescentar um espa�o antes do n�mero por quest�es est�ticas
		if (i<9){
			//imprime a marca��o numeral lateral para o usu�rio at� a posi��o 8
			printf(" %d  ", (i + 1));
		} else{
			//imprime a marca��o numeral lateral da posi��o 9 para o usu�rio (dois d�gitos)
			printf("%d  ", (i + 1));
		}
		
		//loop interno controla "j"(as colunas)
		for(int j = 0; j < 10; j++){
			//ser� mostrada todas as colunas (de 0 a 9) at� dar prosseguimento ao loop externo
			printf("%d ", tabuleiro[i][j]);
			}
			//ap�s mostrar todas as colunas, ou seja, at� j < 10, ent�o o loop externo segue seu c�digo e salta uma linha (tornando mais vis�vel ao usu�rio)
			printf("\n");
		}
	}
int main (){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que ser� utilizada a localiza��o padr�so do sistema operacional
	
	//cria��o dos vetores "navio" alterando valores da matriz para representar os navios na sa�da para o usu�rio
	int navio1[3] = {
	//nesse escrita, caso os valores n�o fossem "0", o valor de cada elemento do vetor navio1 seria 3 + o "valor na mesma posi��o no tabuleiro"
	tabuleiro[0][0] += 3,
	tabuleiro[0][1] += 3,
	tabuleiro[0][2] += 3
	};
	
	int navio2[3] = {
	//nessa forma de escrita, o valor de cada elemento de navio2 sempre seria "3" (mesmo se a representa��o de �gua no tabuleiro fosse um n�mero
	//diferente de "0". Com o operador ",", as duas express�es s�o analisadas, mas ser� proirizada a �tlima (mantendo o valor "3"). Nesse caso,
	//a falta dos par�nteses geraria erro.
	(tabuleiro[0][4] += 3, 3),
	(tabuleiro[1][4] += 3, 3),
	(tabuleiro[2][4] += 3, 3)
	};
	//navio na diagonal 1
	int navio3[3] = {
	(tabuleiro[9][0] += 3, 3),
	(tabuleiro[8][1] += 3, 3),
	(tabuleiro[7][2] += 3, 3)
	};
	//navio na diagonal 2
	int navio4[3] = {
	(tabuleiro[9][9] += 3, 3),
	(tabuleiro[8][8] += 3, 3),
	(tabuleiro[7][7] += 3, 3)
	};
	//criado para for�ar sobreposi��es e observar a fun��o criada para verificar agindo
//	int navioTeste[6] = {
//		(tabuleiro[9][0] += 3, 3),
//		(tabuleiro[8][1] += 3, 3),
//		(tabuleiro[7][2] += 3, 3),
//		(tabuleiro[9][9] += 3, 3),
//		(tabuleiro[8][8] += 3, 3),
//		(tabuleiro[7][7] += 3, 3)
//	};
	

	
	//cria uma matriz 5x5, onde o primeiro elemento � "1" e, � medida em que o la�o continua, aumenta uma unidade
	
	//printf("\nHabilidade cruz\n");
	//loop externo controla as linhas
	for(int i = 0; i < LINHA; i++){
		//loop interno controla as colunas
		for(int j = 0; j < COLUNA; j++){
			//a cada posi��o o valor do elemento � "soma" mais "1"
			habilidadeCruz[i][j] = 0;
			if(j == 2){
				habilidadeCruz[i][j] = 5;
			}
			if(i == 1){
			habilidadeCruz[i][j] = 5;
			}
			//mostra cada valor de acordo com a posi��o
			//printf("%d ", habilidadeCruz[i][j]);
		}
		//salta uma linha ap�s terminar a primeira linha e ir para a segunda
		//printf("\n");	
	}
	
	//printf("\nHabilidade cone\n");
	for(int i = 0; i < LINHA; i++){
		//loop interno controla as colunas
		for(int j = 0; j < COLUNA; j++){
			//a cada posi��o o valor do elemento � "soma" mais "1"
			habilidadeCone[i][j] = 0;
			if(j == 2){
				habilidadeCone[i][j] = 4;
			}
			
			if(i == 1){
				habilidadeCone[i][1] = 4;
				habilidadeCone[i][2] = 4;
				habilidadeCone[i][3] = 4;
			}
			
			if(i == 2){
				
				habilidadeCone[i][0] = 4;
				habilidadeCone[i][1] = 4;
				habilidadeCone[i][2] = 4;
				habilidadeCone[i][3] = 4;
				habilidadeCone[i][4] = 4;
			}
			//mostra cada valor de acordo com a posi��o
			//printf("%d ", habilidadeCone[i][j]);
		}
		//salta uma linha ap�s terminar a primeira linha e ir para a segunda
		//printf("\n");	
	}
	
	//printf("\nHabilidade octaedro\n");
	for(int i = 0; i < LINHA; i++){
		//loop interno controla as colunas
		for(int j = 0; j < COLUNA; j++){
			//a cada posi��o o valor do elemento � "soma" mais "1"
			habilidadeOctaedro[i][j] = 0;
			if(j == 2){
				habilidadeOctaedro[i][j] = 2;
			}
			
			if(i == 1){
				habilidadeOctaedro[i][1] = 2;
				habilidadeOctaedro[i][2] = 2;
				habilidadeOctaedro[i][3] = 2;
			}
			

			//mostra cada valor de acordo com a posi��o
			//printf("%d ", habilidadeOctaedro[i][j]);
		}
		//salta uma linha ap�s terminar a primeira linha e ir para a segunda
		//printf("\n");	
	}
	//organiza��o em fun��es na int main (deixa o c�digo mais limpo e leg�vel)
	ataqueCruz();
	ataqueCone();
	ataqueOctaedro();
	//chama a fun��o de imprimir o tabuleiro s� depois dos ataque terem ocorrido
	imprimirTabuleiro();
	//chama a fun��o que verificar� se h� sobreposi��o e onde
	sobreposicaoNavio();
	
	//tudo ok com o programa
	return 0;
}
