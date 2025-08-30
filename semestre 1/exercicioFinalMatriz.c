#include <stdio.h>

//constantes para facilitar manipula��o do c�digo
#define LINHA 5
#define COLUNA 5

int main(){
	
	//matriz 5x5 declarada e inicializada pelas constantes
	int matriz[LINHA][COLUNA];
	//criada para achar um valor dentro da matriz
	int target = 9;
	//criada como flag para uma condicional dentro de um la�o de repeti��o (falso)
	int found = 0;
	//criada para construir uma matriz sem precisar declarar valor por valor
	int soma = 1;
	
	//cria uma matriz 5x5, onde o primeiro elemento � "1" e, � medida em que o la�o continua, aumenta uma unidade
	//loop externo controla as linhas
	for(int i = 0; i < LINHA; i++){
		//loop interno controla as colunas
		for(int j = 0; j < COLUNA; j++){
			//a cada posi��o o valor do elemento � "soma" mais "1"
			matriz[i][j] = soma;
			//incrementador de "soma"
			soma++;
			//mostra cada valor de acordo com a posi��o
			printf("%d ", matriz[i][j]);
		}
		//salta uma linha ap�s terminar a primeira linha e ir para a segunda
		printf("\n");
	}
	
	//busca em "matriz" por um elemento espec�fico (target)
	//loop externo controla as linhas
	for(int i = 0; i < LINHA; i++){
		//loop interno controla as colunas
		for(int j = 0; j < COLUNA; j++){
			//condicional: caso o valor de determinado elemento seja igual ao target (9), imprime o valor de taget e o �ndice de onde foi encontrado
			if(matriz[i][j] == target){
				printf("\nO valor %d encontrado no indice [%d][%d]", target, i, j);
				//muda o valor da flag "found" para 1 (verdadeiro)
				found = 1;
				//sai do la�o interno de repeti��o
				break;
			}
		}
		//condicional: caso found seja verdadeiro, ou seja, caso tenha achado o target
		if(found){
			//sai do la�o externo de repeti��o
			break;
		}
	}
	
	return 0;
}
