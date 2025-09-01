#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"

#define LINHA 3
#define COLUNA 5

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
	
	int habilidadeCone[LINHA][COLUNA];
	int habilidadeCruz[LINHA][COLUNA];
	int habilidadeOctaedro[LINHA][COLUNA];
	
	//vetor que mostra a marcação superior das posições
	char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	
	
	int ataqueCruz(){
		for (int i =0; i<LINHA; i++){
		//loop interno controlando as colunas
			for (int j =0; j<COLUNA; j++){
			//atribui a cada posição da matrizSoma a soma do valor de cada elemento das outras duas matrizes na posição equivalente			
			tabuleiro[0 + i][5 + j] += habilidadeCruz [i][j];
			//if(i > 8) || (j > 7){
			//	habilidadeCruz[i][j]
			//}
			//mostra em tela a matrizSoma e seus valores
			//printf(“matrizSoma[%d][%d] = %d\n”, i, j, matrizSoma[i][j];
			}
		}
		return 1;
	}
	
	int ataqueCone(){
		for (int i =0; i<LINHA; i++){
		//loop interno controlando as colunas
			for (int j =0; j<COLUNA; j++){
				//atribui a cada posição da matrizSoma a soma do valor de cada elemento das outras duas matrizes na posição equivalente			
				tabuleiro[7 + i][3 + j] += habilidadeCone [i][j];
			//if(i > 8) || (j > 7){
			//	habilidadeCruz[i][j]
			//}
			//mostra em tela a matrizSoma e seus valores
			//printf(“matrizSoma[%d][%d] = %d\n”, i, j, matrizSoma[i][j];
			}
		}
		return 1;
	}
	
	int ataqueOctaedro(){
		for (int i =0; i<LINHA; i++){
		//loop interno controlando as colunas
			for (int j =0; j<COLUNA; j++){
				//atribui a cada posição da matrizSoma a soma do valor de cada elemento das outras duas matrizes na posição equivalente			
				tabuleiro[3 + i][0 + j] += habilidadeOctaedro [i][j];
			//if(i > 8) || (j > 7){
			//	habilidadeCruz[i][j]
			//}
			//mostra em tela a matrizSoma e seus valores
			//printf(“matrizSoma[%d][%d] = %d\n”, i, j, matrizSoma[i][j];
			}
		}
		return 1;
	}
	
	//função criada para verificar se há sobreposição de navios partindo da premissa de que haverá sobreposição em casos que o valor de determinada
	//posição seja maior que 3, sugerindo que o valor "3" de um elemento de navio está sendo colocado na mesmo posição de um outro elemento de valor
	//"3" de outro navio
	void sobreposicaoNavio(){
	//variável de controle para única exibição de "Sobreposição detectada em: " inicialmente como "0" falso
	int sobreposicaoDetectada = 0;
	
		//laço externo para controle de linhas
		for (int i = 0; i < 10; i++){
			//laço interno para controle de colunas
			for (int j = 0; j < 10; j++){
				//condicional caso o valor de determinada posição seja maior que "3", indicando msobreposição
				if (tabuleiro[i][j] > 3){
					//a condicional nega sobreposicaoDetectada (inicialmente "falso"), ou seja, transforma em "verdadeiro", indicando que o trecho
					//de código dentro da condicional deve ser executado
					if (!sobreposicaoDetectada){
						printf("\nSobreposição detectada em: \n\n");
						//ao final do código, o novo valor de sobreposicaoDetectada é "1" (verdadeiro), imperdindo que, em uma nova ocorrência
						//de sobreposição, a condicional "!sobreposicaoDetectada" seja "verdadeira" e consequentemente executando a mensagem apenas
						//na primeira ocorrência
						sobreposicaoDetectada = 1;
					}	
					//mostra em qual ou quais posiçoes estão ocorrendo sobreposições
					printf("tabuleiro[%d][%d]\n", i, j);	
				} 
			}
		}
	}
	
	void imprimirTabuleiro(){
	printf("*** Tabuleiro Batalha Naval ***\n\n");
	//mostra os itens do vetor linhas para fazer a marcação superior
	for (int i = 0; i < 10; i++){
		//consicional para inserir na posição "0" um espaço maior que nas outras posições (escolha estética)
		if (i == 0){
			printf("    %c ", linhas[i]);	
		} else {
			//imprime cada elemento do vetor "linhas", funcionando como uma marcação literal superior no tabuleiro
			printf("%c ", linhas[i]);
		}	
	}
	//salva uma linha para iniciar a impressão da matriz "tabuleiro"
	printf("\n");
	
	//loop externo controla "i" (as linhas)
	for(int i = 0; i < 10; i++){
		//condicional para acrescentar um espaço antes do número por questões estéticas
		if (i<9){
			//imprime a marcação numeral lateral para o usuário até a posição 8
			printf(" %d  ", (i + 1));
		} else{
			//imprime a marcação numeral lateral da posição 9 para o usuário (dois dígitos)
			printf("%d  ", (i + 1));
		}
		
		//loop interno controla "j"(as colunas)
		for(int j = 0; j < 10; j++){
			//será mostrada todas as colunas (de 0 a 9) até dar prosseguimento ao loop externo
			printf("%d ", tabuleiro[i][j]);
			}
			//após mostrar todas as colunas, ou seja, até j < 10, então o loop externo segue seu código e salta uma linha (tornando mais visível ao usuário)
			printf("\n");
		}
	}
int main (){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que será utilizada a localização padrãso do sistema operacional
	
	//criação dos vetores "navio" alterando valores da matriz para representar os navios na saída para o usuário
	int navio1[3] = {
	//nesse escrita, caso os valores não fossem "0", o valor de cada elemento do vetor navio1 seria 3 + o "valor na mesma posição no tabuleiro"
	tabuleiro[0][0] += 3,
	tabuleiro[0][1] += 3,
	tabuleiro[0][2] += 3
	};
	
	int navio2[3] = {
	//nessa forma de escrita, o valor de cada elemento de navio2 sempre seria "3" (mesmo se a representação de água no tabuleiro fosse um número
	//diferente de "0". Com o operador ",", as duas expressões são analisadas, mas será proirizada a útlima (mantendo o valor "3"). Nesse caso,
	//a falta dos parênteses geraria erro.
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
	//criado para forçar sobreposições e observar a função criada para verificar agindo
//	int navioTeste[6] = {
//		(tabuleiro[9][0] += 3, 3),
//		(tabuleiro[8][1] += 3, 3),
//		(tabuleiro[7][2] += 3, 3),
//		(tabuleiro[9][9] += 3, 3),
//		(tabuleiro[8][8] += 3, 3),
//		(tabuleiro[7][7] += 3, 3)
//	};
	

	
	//cria uma matriz 5x5, onde o primeiro elemento é "1" e, à medida em que o laço continua, aumenta uma unidade
	//loop externo controla as linhas
	printf("\nHabilidade cruz\n");
	for(int i = 0; i < LINHA; i++){
		//loop interno controla as colunas
		for(int j = 0; j < COLUNA; j++){
			//a cada posição o valor do elemento à "soma" mais "1"
			habilidadeCruz[i][j] = 0;
			if(j == 2){
				habilidadeCruz[i][j] = 1;
			}
			if(i == 1){
			habilidadeCruz[i][j] = 1;
			}
			//mostra cada valor de acordo com a posição
			printf("%d ", habilidadeCruz[i][j]);
		}
		//salta uma linha após terminar a primeira linha e ir para a segunda
		printf("\n");	
	}
	
	printf("\nHabilidade cone\n");
	for(int i = 0; i < LINHA; i++){
		//loop interno controla as colunas
		for(int j = 0; j < COLUNA; j++){
			//a cada posição o valor do elemento à "soma" mais "1"
			habilidadeCone[i][j] = 0;
			if(j == 2){
				habilidadeCone[i][j] = 1;
			}
			
			if(i == 1){
				habilidadeCone[i][1] = 1;
				habilidadeCone[i][2] = 1;
				habilidadeCone[i][3] = 1;
			}
			
			if(i == 2){
				
				habilidadeCone[i][0] = 1;
				habilidadeCone[i][1] = 1;
				habilidadeCone[i][2] = 1;
				habilidadeCone[i][3] = 1;
				habilidadeCone[i][4] = 1;
			}
			//mostra cada valor de acordo com a posição
			printf("%d ", habilidadeCone[i][j]);
		}
		//salta uma linha após terminar a primeira linha e ir para a segunda
		printf("\n");	
	}
	
	printf("\nHabilidade octaedro\n");
	for(int i = 0; i < LINHA; i++){
		//loop interno controla as colunas
		for(int j = 0; j < COLUNA; j++){
			//a cada posição o valor do elemento à "soma" mais "1"
			habilidadeOctaedro[i][j] = 0;
			if(j == 2){
				habilidadeOctaedro[i][j] = 1;
			}
			
			if(i == 1){
				habilidadeOctaedro[i][1] = 1;
				habilidadeOctaedro[i][2] = 1;
				habilidadeOctaedro[i][3] = 1;
			}
			

			//mostra cada valor de acordo com a posição
			printf("%d ", habilidadeOctaedro[i][j]);
		}
		//salta uma linha após terminar a primeira linha e ir para a segunda
		printf("\n");	
	}

	ataqueCruz();
	ataqueCone();
	ataqueOctaedro();
	imprimirTabuleiro();
	//chama a função que verificará se há sobreposição e onde
	sobreposicaoNavio();
	
	return 0;
}
